// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/DepthCameraRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'res'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DepthCameraRayCasterPattern in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__msg__DepthCameraRayCasterPattern
{
  rosidl_runtime_c__float__Sequence res;
  float fx;
  float fy;
  float cx;
  float cy;
  float fov_horizontal;
  float fov_vertical;
} gs_ros_interfaces__msg__DepthCameraRayCasterPattern;

// Struct for a sequence of gs_ros_interfaces__msg__DepthCameraRayCasterPattern.
typedef struct gs_ros_interfaces__msg__DepthCameraRayCasterPattern__Sequence
{
  gs_ros_interfaces__msg__DepthCameraRayCasterPattern * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__DepthCameraRayCasterPattern__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__STRUCT_H_
