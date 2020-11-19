find_package(Qt5Core REQUIRED)

# aliases
function(qt_use_modules target)
	foreach(arg IN LISTS ARGN)
		find_package(Qt5 COMPONENTS ${arg})
		target_link_libraries(${target} Qt5::${arg})
	endforeach()
endfunction()

macro(qt_wrap_cpp)
  qt5_wrap_cpp(${ARGN})
endmacro()

macro(qt_add_resources)
  qt5_add_resources(${ARGN})
endmacro()

# version
set(QT_VERSION_MAJOR ${Qt5Core_VERSION_MAJOR})
set(QT_VERSION_MINOR ${Qt5Core_VERSION_MINOR})
set(QT_VERSION_PATCH ${Qt5Core_VERSION_PATCH})

get_target_property(QtCoreLibraryType Qt5::Core TYPE)
if(${QtCoreLibraryType} MATCHES STATIC_LIBRARY)
	set(QT_STATIC ON)
endif()