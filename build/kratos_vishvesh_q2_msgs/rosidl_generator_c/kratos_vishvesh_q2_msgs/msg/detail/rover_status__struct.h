// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kratos_vishvesh_q2_msgs:msg/RoverStatus.idl
// generated code does not contain a copyright notice

#ifndef KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__STRUCT_H_
#define KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RoverStatus in the package kratos_vishvesh_q2_msgs.
typedef struct kratos_vishvesh_q2_msgs__msg__RoverStatus
{
  float battery_percentage;
  float velocity;
  bool emergency_stop;
  rosidl_runtime_c__String mode;
} kratos_vishvesh_q2_msgs__msg__RoverStatus;

// Struct for a sequence of kratos_vishvesh_q2_msgs__msg__RoverStatus.
typedef struct kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence
{
  kratos_vishvesh_q2_msgs__msg__RoverStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__STRUCT_H_
