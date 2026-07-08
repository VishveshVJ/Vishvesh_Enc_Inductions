// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:srv/SetEntityPose.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__SET_ENTITY_POSE__STRUCT_H_
#define GS_ROS_INTERFACES__SRV__DETAIL__SET_ENTITY_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'entity_name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SetEntityPose in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__SetEntityPose_Request
{
  rosidl_runtime_c__String entity_name;
  geometry_msgs__msg__Pose pose;
} gs_ros_interfaces__srv__SetEntityPose_Request;

// Struct for a sequence of gs_ros_interfaces__srv__SetEntityPose_Request.
typedef struct gs_ros_interfaces__srv__SetEntityPose_Request__Sequence
{
  gs_ros_interfaces__srv__SetEntityPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__SetEntityPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetEntityPose in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__SetEntityPose_Response
{
  bool success;
  rosidl_runtime_c__String message;
} gs_ros_interfaces__srv__SetEntityPose_Response;

// Struct for a sequence of gs_ros_interfaces__srv__SetEntityPose_Response.
typedef struct gs_ros_interfaces__srv__SetEntityPose_Response__Sequence
{
  gs_ros_interfaces__srv__SetEntityPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__SetEntityPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__SET_ENTITY_POSE__STRUCT_H_
