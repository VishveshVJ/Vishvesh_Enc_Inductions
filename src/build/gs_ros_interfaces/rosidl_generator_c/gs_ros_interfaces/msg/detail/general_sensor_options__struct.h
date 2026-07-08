// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/GeneralSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__STRUCT_H_

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
// Member 'sensor_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GeneralSensorOptions in the package gs_ros_interfaces.
/**
  * Common sensor properties
 */
typedef struct gs_ros_interfaces__msg__GeneralSensorOptions
{
  rosidl_runtime_c__String name;
  /// e.g., cam, lidar, imu
  rosidl_runtime_c__String sensor_type;
  /// Simulated sensor delay
  float delay;
  bool update_ground_truth_only;
  /// Enable visualization in sim
  bool draw_debug;
} gs_ros_interfaces__msg__GeneralSensorOptions;

// Struct for a sequence of gs_ros_interfaces__msg__GeneralSensorOptions.
typedef struct gs_ros_interfaces__msg__GeneralSensorOptions__Sequence
{
  gs_ros_interfaces__msg__GeneralSensorOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__GeneralSensorOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__STRUCT_H_
