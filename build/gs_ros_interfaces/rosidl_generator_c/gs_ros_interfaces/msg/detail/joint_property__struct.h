// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/JointProperty.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'command'
#include "rosidl_runtime_c/string.h"
// Member 'force_range'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointProperty in the package gs_ros_interfaces.
/**
  * Physics and control properties for a robot joint
 */
typedef struct gs_ros_interfaces__msg__JointProperty
{
  rosidl_runtime_c__String name;
  /// Proportional gain
  float kp;
  /// Velocity gain
  float kv;
  float stiffness;
  float armature;
  float damping;
  /// [min_force, max_force]
  rosidl_runtime_c__float__Sequence force_range;
  /// Control mode: position, velocity, or effort
  rosidl_runtime_c__String command;
} gs_ros_interfaces__msg__JointProperty;

// Struct for a sequence of gs_ros_interfaces__msg__JointProperty.
typedef struct gs_ros_interfaces__msg__JointProperty__Sequence
{
  gs_ros_interfaces__msg__JointProperty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__JointProperty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__STRUCT_H_
