// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT__STRUCT_H_

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

/// Struct defined in msg/Contact in the package gs_ros_interfaces.
/**
  * Binary contact state for a link
 */
typedef struct gs_ros_interfaces__msg__Contact
{
  rosidl_runtime_c__String link_name;
  bool in_contact;
} gs_ros_interfaces__msg__Contact;

// Struct for a sequence of gs_ros_interfaces__msg__Contact.
typedef struct gs_ros_interfaces__msg__Contact__Sequence
{
  gs_ros_interfaces__msg__Contact * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__Contact__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT__STRUCT_H_
