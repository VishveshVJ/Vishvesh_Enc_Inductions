// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:srv/StopRecording.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__STOP_RECORDING__STRUCT_H_
#define GS_ROS_INTERFACES__SRV__DETAIL__STOP_RECORDING__STRUCT_H_

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
// Member 'file_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StopRecording in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__StopRecording_Request
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String file_name;
  double fps;
} gs_ros_interfaces__srv__StopRecording_Request;

// Struct for a sequence of gs_ros_interfaces__srv__StopRecording_Request.
typedef struct gs_ros_interfaces__srv__StopRecording_Request__Sequence
{
  gs_ros_interfaces__srv__StopRecording_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__StopRecording_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StopRecording in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__StopRecording_Response
{
  bool success;
  rosidl_runtime_c__String message;
} gs_ros_interfaces__srv__StopRecording_Response;

// Struct for a sequence of gs_ros_interfaces__srv__StopRecording_Response.
typedef struct gs_ros_interfaces__srv__StopRecording_Response__Sequence
{
  gs_ros_interfaces__srv__StopRecording_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__StopRecording_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__STOP_RECORDING__STRUCT_H_
