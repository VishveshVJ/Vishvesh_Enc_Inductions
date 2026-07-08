# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_kratos_vishvesh_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED kratos_vishvesh_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(kratos_vishvesh_FOUND FALSE)
  elseif(NOT kratos_vishvesh_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(kratos_vishvesh_FOUND FALSE)
  endif()
  return()
endif()
set(_kratos_vishvesh_CONFIG_INCLUDED TRUE)

# output package information
if(NOT kratos_vishvesh_FIND_QUIETLY)
  message(STATUS "Found kratos_vishvesh: 0.0.0 (${kratos_vishvesh_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'kratos_vishvesh' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${kratos_vishvesh_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(kratos_vishvesh_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${kratos_vishvesh_DIR}/${_extra}")
endforeach()
