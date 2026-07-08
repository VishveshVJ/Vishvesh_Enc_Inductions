// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/RigidSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RigidSensorOptions in the package gs_ros_interfaces.
/**
  * Attachment properties for a sensor on a rigid body
 */
typedef struct gs_ros_interfaces__msg__RigidSensorOptions
{
  /// Name of the link to attach to
  rosidl_runtime_c__String link;
  /// Position offset [x, y, z]
  double pos_offset[3];
  /// Rotation offset [roll, pitch, yaw]
  double euler_offset[3];
} gs_ros_interfaces__msg__RigidSensorOptions;

// Struct for a sequence of gs_ros_interfaces__msg__RigidSensorOptions.
typedef struct gs_ros_interfaces__msg__RigidSensorOptions__Sequence
{
  gs_ros_interfaces__msg__RigidSensorOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__RigidSensorOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__STRUCT_H_
