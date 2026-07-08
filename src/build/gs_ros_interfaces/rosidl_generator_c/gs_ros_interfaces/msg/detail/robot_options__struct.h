// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/RobotOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_states_topic'
// Member 'joint_commands_topic'
// Member 'joints_control_topic'
#include "rosidl_runtime_c/string.h"
// Member 'joint_properties'
#include "gs_ros_interfaces/msg/detail/joint_property__struct.h"

/// Struct defined in msg/RobotOptions in the package gs_ros_interfaces.
/**
  * Configuration for robot-specific ROS interfacing
 */
typedef struct gs_ros_interfaces__msg__RobotOptions
{
  rosidl_runtime_c__String joint_states_topic;
  float joint_states_topic_frequency;
  rosidl_runtime_c__String joint_commands_topic;
  float joint_commands_topic_frequency;
  rosidl_runtime_c__String joints_control_topic;
  float joints_control_topic_frequency;
  gs_ros_interfaces__msg__JointProperty__Sequence joint_properties;
} gs_ros_interfaces__msg__RobotOptions;

// Struct for a sequence of gs_ros_interfaces__msg__RobotOptions.
typedef struct gs_ros_interfaces__msg__RobotOptions__Sequence
{
  gs_ros_interfaces__msg__RobotOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__RobotOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__STRUCT_H_
