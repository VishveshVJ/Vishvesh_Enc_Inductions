// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/NoisySensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'resolution'
// Member 'bias'
// Member 'noise'
// Member 'random_walk'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/NoisySensorOptions in the package gs_ros_interfaces.
/**
  * Common noise parameters for sensors
 */
typedef struct gs_ros_interfaces__msg__NoisySensorOptions
{
  rosidl_runtime_c__double__Sequence resolution;
  rosidl_runtime_c__double__Sequence bias;
  rosidl_runtime_c__double__Sequence noise;
  rosidl_runtime_c__double__Sequence random_walk;
  float jitter;
  bool interpolate;
} gs_ros_interfaces__msg__NoisySensorOptions;

// Struct for a sequence of gs_ros_interfaces__msg__NoisySensorOptions.
typedef struct gs_ros_interfaces__msg__NoisySensorOptions__Sequence
{
  gs_ros_interfaces__msg__NoisySensorOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__NoisySensorOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__STRUCT_H_
