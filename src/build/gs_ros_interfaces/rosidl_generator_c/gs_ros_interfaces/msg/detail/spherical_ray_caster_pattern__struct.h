// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/SphericalRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fov'
// Member 'n_points'
// Member 'angular_resolution'
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SphericalRayCasterPattern in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__msg__SphericalRayCasterPattern
{
  rosidl_runtime_c__float__Sequence fov;
  rosidl_runtime_c__int32__Sequence n_points;
  rosidl_runtime_c__float__Sequence angular_resolution;
  rosidl_runtime_c__float__Sequence angles;
} gs_ros_interfaces__msg__SphericalRayCasterPattern;

// Struct for a sequence of gs_ros_interfaces__msg__SphericalRayCasterPattern.
typedef struct gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence
{
  gs_ros_interfaces__msg__SphericalRayCasterPattern * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__STRUCT_H_
