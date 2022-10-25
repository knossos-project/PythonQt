cmake_minimum_required(VERSION 3.15)
project(PythonQt CXX)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

#-----------------------------------------------------------------------------
# Policy
IF(POLICY CMP0020)
	cmake_policy(SET CMP0020 NEW)
ENDIF()

IF(POLICY CMP0026) # Location property
	cmake_policy(SET CMP0026 NEW)
ENDIF()

IF(POLICY CMP0028) # ALIAS with ::
	cmake_policy(SET CMP0028 NEW)
ENDIF()

IF(POLICY CMP0046) # Missing Deps
	cmake_policy(SET CMP0046 NEW)
ENDIF()

IF(POLICY CMP0043) # Ignore COMPILE_DEFINITIONS_<Config>
	cmake_policy(SET CMP0043 NEW)
ENDIF()

include(CTestUseLaunchers OPTIONAL)

#-----------------------------------------------------------------------------
# Version
SET(PythonQt_VERSION 2.3.0)

#-----------------------------------------------------------------------------
# Debug
option(PythonQt_DEBUG "Enable/Disable PythonQt debug output" OFF)
if(PythonQt_DEBUG)
	add_definitions(-DPYTHONQT_DEBUG)
else()
	remove_definitions(-DPYTHONQT_DEBUG)
endif()

if(NOT CMAKE_BUILD_TYPE)
	if(PythonQt_DEBUG)
		set(CMAKE_BUILD_TYPE Debug)
	else()
		set(CMAKE_BUILD_TYPE Release)
	endif()
endif()

#-----------------------------------------------------------------------------
# Qt
option(PythonQt_Qt5 "Use Qt 5.x" ON)
if(PythonQt_Qt5)
	include(PythonQt_Qt_5x)
else(PythonQt_Qt5)
	include(PythonQt_Qt_4x)
endif(PythonQt_Qt5)

#-----------------------------------------------------------------------------
# The variable "generated_cpp_suffix" allows to conditionnally compile the generated wrappers
# associated with the Qt version being used.

set(generated_cpp_suffix "${QT_VERSION_MAJOR}${QT_VERSION_MINOR}")
if("${generated_cpp_suffix}" GREATER_EQUAL "511")
	set(generated_cpp_suffix "511")
elseif("${generated_cpp_suffix}" GREATER_EQUAL "56")
	set(generated_cpp_suffix "56") # Also use 5.6 wrappers for 5.7 and ongoing
elseif("${generated_cpp_suffix}" GREATER_EQUAL "54")
	set(generated_cpp_suffix "54") # Also use 5.4 wrappers for 5.5
elseif("${generated_cpp_suffix}" GREATER_EQUAL "50")
	set(generated_cpp_suffix "50") # Also use 5.0 wrappers for 5.1.x and 5.2.x version
elseif("${generated_cpp_suffix}" LESS_EQUAL "47")
	set(generated_cpp_suffix "47") # Also use 4.7 wrappers for 4.6.x version
endif()

set(WEBKIT_AVAILABLE ON)
if("${generated_cpp_suffix}" GREATER_EQUAL "56" OR QT_STATIC)
	set(WEBKIT_AVAILABLE OFF)
endif()
set(generated_cpp_suffix "_${generated_cpp_suffix}") # prepend _
include(CMakeDependentOption)
CMAKE_DEPENDENT_OPTION(PYTHONQT_WITH_WEBKIT "include QtWebKit wrappers" ON "WEBKIT_AVAILABLE" OFF)

#-----------------------------------------------------------------------------
# Generator
#add_subdirectory(generator EXCLUDE_FROM_ALL)
#add_custom_target(generator)
#add_dependencies(generator pythonqt_generator)

option(BUILD_SHARED_LIBS "build shared instead of static library")
#-----------------------------------------------------------------------------
# Find Python
option(PythonQtAll "Build complete Qt wrapper library" ON)
option(PythonQt_Python3 "Use Python 3.x (3.3+)" ON)
option(PythonQt_Python "Use specific Python Version" OFF)
option(PythonQt_DynamicMetaObject "Add functionality which requires Qt source code and will depend exactly on the specific Qt version it was built with" OFF)
if(PythonQt_Python)
	find_package(PythonLibs ${PythonQt_Python} REQUIRED EXACT)
elseif(PythonQt_Python3)
	find_package(Python 3.3 REQUIRED COMPONENTS Development.Embed)
else()
	find_package(Python 2.6 REQUIRED COMPONENTS Development.Embed)
endif()

if(NOT ${PYTHONLIBS_VERSION_STRING} VERSION_LESS 3)
	set(PythonQt_Python3 ON)
else()
	set(PythonQt_Python3 OFF)
endif()

add_definitions(-DPYTHONQT_USE_RELEASE_PYTHON_FALLBACK)

#-----------------------------------------------------------------------------
# Library Name
# To maintain ABI compatibility, the Qt major version as well as the Python major and minor version are needed
set(PythonQt Qt${QT_VERSION_MAJOR}Python${Python_VERSION_MAJOR}${Python_VERSION_MINOR} CACHE INTERNAL "")

set(CMAKE_DEBUG_POSTFIX "_d")

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options("-fcolor-diagnostics")
elseif(CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    add_compile_options("-fdiagnostics-color=always")
endif()
# reduce spam
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations -Wno-register -Wno-write-strings -Wno-cpp")

#-----------------------------------------------------------------------------
# Core
add_subdirectory(src)
set(optpy "libpython${python_major}${python_minor}.dl.a")
install(FILES ${PROJECT_BINARY_DIR}/${optpy} DESTINATION lib)
target_link_libraries(${PythonQt} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/libpython${python_major}${python_minor}.dl.a>$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/lib/libpython${python_major}${python_minor}.dl.a>)
#-----------------------------------------------------------------------------
# Extenseions (QtAll)
if (${PythonQtAll})
	add_subdirectory(extensions)
	#find Qt imported targets for use in examples
	#the necessaty is a bug and will be probably be fixed in CMake 3.1 (http://public.kitware.com/Bug/view.php?id=15101)
	find_package(Qt5 CONFIG REQUIRED COMPONENTS ${QT})
	# Examples, depending on QtAll
	add_subdirectory(examples EXCLUDE_FROM_ALL)
endif()
#-----------------------------------------------------------------------------
# Tests
add_subdirectory(tests EXCLUDE_FROM_ALL)
add_custom_target(tests
	COMMAND PythonQt_Tests
	DEPENDS ${PythonQt}
	WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/src#preliminary hack to find the dll on windows
)
add_dependencies(tests PythonQt_Tests)

#-----------------------------------------------------------------------------
# uninstall target
configure_file(
	"${CMAKE_CURRENT_SOURCE_DIR}/cmake/cmake_uninstall.cmake.in"
	"${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
	IMMEDIATE @ONLY)
add_custom_target(uninstall COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)

if(BUILD_SHARED_LIBS)
	set(LINK_TYPE "Shared")
else()
	set(LINK_TYPE "Static")
endif()
if(QT_STATIC)
	set(QT_LINK_TYPE "static")
else()
	set(QT_LINK_TYPE "shared")
endif()
if(${PythonQtAll})
	set(WrapAll " + ${PythonQt_QtAll}")
endif()
message(STATUS "Building ${PythonQt}${WrapAll} (${QT_LINK_TYPE} Qt ${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}.${QT_VERSION_PATCH} (using ${generated_cpp_suffix} wrappers) + Python ${Python_VERSION} | ${CMAKE_BUILD_TYPE} | ${LINK_TYPE})")
