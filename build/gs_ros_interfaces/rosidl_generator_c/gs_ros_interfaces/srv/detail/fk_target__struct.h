// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:srv/FKTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__FK_TARGET__STRUCT_H_
#define GS_ROS_INTERFACES__SRV__DETAIL__FK_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_name'
// Member 'dof_names'
// Member 'link_names'
#include "rosidl_runtime_c/string.h"
// Member 'qpos'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/FKTarget in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__FKTarget_Request
{
  rosidl_runtime_c__String robot_name;
  /// Joint positions to calculate FK for
  rosidl_runtime_c__double__Sequence qpos;
  /// Optional: specific DOFs
  rosidl_runtime_c__String__Sequence dof_names;
  /// Links to calculate poses for
  rosidl_runtime_c__String__Sequence link_names;
} gs_ros_interfaces__srv__FKTarget_Request;

// Struct for a sequence of gs_ros_interfaces__srv__FKTarget_Request.
typedef struct gs_ros_interfaces__srv__FKTarget_Request__Sequence
{
  gs_ros_interfaces__srv__FKTarget_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__FKTarget_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'link_pos'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'link_quat'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in srv/FKTarget in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__FKTarget_Response
{
  bool success;
  rosidl_runtime_c__String message;
  geometry_msgs__msg__Point__Sequence link_pos;
  geometry_msgs__msg__Quaternion__Sequence link_quat;
} gs_ros_interfaces__srv__FKTarget_Response;

// Struct for a sequence of gs_ros_interfaces__srv__FKTarget_Response.
typedef struct gs_ros_interfaces__srv__FKTarget_Response__Sequence
{
  gs_ros_interfaces__srv__FKTarget_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__FKTarget_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__FK_TARGET__STRUCT_H_
