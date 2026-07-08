// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:srv/SetPhysicsAttributes.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__SET_PHYSICS_ATTRIBUTES__STRUCT_H_
#define GS_ROS_INTERFACES__SRV__DETAIL__SET_PHYSICS_ATTRIBUTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'attribute'
// Member 'names'
// Member 'dof_names'
#include "rosidl_runtime_c/string.h"
// Member 'value'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetPhysicsAttributes in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__SetPhysicsAttributes_Request
{
  /// e.g., kp, kv, mass, damping
  rosidl_runtime_c__String attribute;
  /// Parent entity names
  rosidl_runtime_c__String__Sequence names;
  /// Joint or link names
  rosidl_runtime_c__String__Sequence dof_names;
  /// New values
  rosidl_runtime_c__double__Sequence value;
} gs_ros_interfaces__srv__SetPhysicsAttributes_Request;

// Struct for a sequence of gs_ros_interfaces__srv__SetPhysicsAttributes_Request.
typedef struct gs_ros_interfaces__srv__SetPhysicsAttributes_Request__Sequence
{
  gs_ros_interfaces__srv__SetPhysicsAttributes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__SetPhysicsAttributes_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetPhysicsAttributes in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__SetPhysicsAttributes_Response
{
  bool success;
  rosidl_runtime_c__String message;
} gs_ros_interfaces__srv__SetPhysicsAttributes_Response;

// Struct for a sequence of gs_ros_interfaces__srv__SetPhysicsAttributes_Response.
typedef struct gs_ros_interfaces__srv__SetPhysicsAttributes_Response__Sequence
{
  gs_ros_interfaces__srv__SetPhysicsAttributes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__SetPhysicsAttributes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__SET_PHYSICS_ATTRIBUTES__STRUCT_H_
