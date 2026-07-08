// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/ContactForceOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'options'
#include "gs_ros_interfaces/msg/detail/general_sensor_options__struct.h"
// Member 'ros_options'
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__struct.h"
// Member 'rigid_options'
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__struct.h"
// Member 'noisy_options'
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__struct.h"
// Member 'min_force'
// Member 'max_force'
// Member 'debug_color'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ContactForceOptions in the package gs_ros_interfaces.
/**
  * Configuration for a contact force sensor
 */
typedef struct gs_ros_interfaces__msg__ContactForceOptions
{
  gs_ros_interfaces__msg__GeneralSensorOptions options;
  gs_ros_interfaces__msg__RosSensorOptions ros_options;
  gs_ros_interfaces__msg__RigidSensorOptions rigid_options;
  gs_ros_interfaces__msg__NoisySensorOptions noisy_options;
  /// Lower bounds for force measurement
  rosidl_runtime_c__float__Sequence min_force;
  /// Upper bounds for force measurement
  rosidl_runtime_c__float__Sequence max_force;
  /// visualization color [r, g, b, a]
  rosidl_runtime_c__float__Sequence debug_color;
  /// Scale of debug vectors
  float debug_scale;
} gs_ros_interfaces__msg__ContactForceOptions;

// Struct for a sequence of gs_ros_interfaces__msg__ContactForceOptions.
typedef struct gs_ros_interfaces__msg__ContactForceOptions__Sequence
{
  gs_ros_interfaces__msg__ContactForceOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__ContactForceOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__STRUCT_H_
