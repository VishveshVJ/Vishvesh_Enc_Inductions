// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/ContactForce.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_name'
#include "rosidl_runtime_c/string.h"
// Member 'contact_force'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ContactForce in the package gs_ros_interfaces.
/**
  * Measured contact force on a link
 */
typedef struct gs_ros_interfaces__msg__ContactForce
{
  rosidl_runtime_c__String link_name;
  geometry_msgs__msg__Vector3 contact_force;
} gs_ros_interfaces__msg__ContactForce;

// Struct for a sequence of gs_ros_interfaces__msg__ContactForce.
typedef struct gs_ros_interfaces__msg__ContactForce__Sequence
{
  gs_ros_interfaces__msg__ContactForce * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__ContactForce__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE__STRUCT_H_
