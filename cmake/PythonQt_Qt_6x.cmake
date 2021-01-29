find_package(Qt6Core REQUIRED)

# aliases
function(qt_use_modules target)
	foreach(arg IN LISTS ARGN)
		find_package(Qt6 COMPONENTS ${arg})
		target_link_libraries(${target} Qt6::${arg})
	endforeach()
endfunction()

macro(qt_wrap_cpp)
  qt6_wrap_cpp(${ARGN})
endmacro()

macro(qt_add_resources)
  qt6_add_resources(${ARGN})
endmacro()

# version
set(QT_VERSION_MAJOR ${Qt6Core_VERSION_MAJOR})
set(QT_VERSION_MINOR ${Qt6Core_VERSION_MINOR})
set(QT_VERSION_PATCH ${Qt6Core_VERSION_PATCH})

get_target_property(QtCoreLibraryType Qt6::Core TYPE)
if(${QtCoreLibraryType} MATCHES STATIC_LIBRARY)
	set(QT_STATIC ON)
endif()