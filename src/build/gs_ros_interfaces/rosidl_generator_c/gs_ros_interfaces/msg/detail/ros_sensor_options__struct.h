// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/RosSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_id'
// Member 'topic'
// Member 'qos_history'
// Member 'qos_reliability'
// Member 'qos_durability'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RosSensorOptions in the package gs_ros_interfaces.
/**
  * ROS-specific sensor configuration
 */
typedef struct gs_ros_interfaces__msg__RosSensorOptions
{
  /// TF frame name
  rosidl_runtime_c__String frame_id;
  /// Publishing frequency
  float frequency;
  /// ROS topic name
  rosidl_runtime_c__String topic;
  /// keep_last or keep_all
  rosidl_runtime_c__String qos_history;
  int32_t qos_depth;
  /// reliable or best_effort
  rosidl_runtime_c__String qos_reliability;
  /// volatile or transient_local
  rosidl_runtime_c__String qos_durability;
} gs_ros_interfaces__msg__RosSensorOptions;

// Struct for a sequence of gs_ros_interfaces__msg__RosSensorOptions.
typedef struct gs_ros_interfaces__msg__RosSensorOptions__Sequence
{
  gs_ros_interfaces__msg__RosSensorOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__RosSensorOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__STRUCT_H_
