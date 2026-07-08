// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:srv/GetRobotOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'entity'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRobotOptions in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__GetRobotOptions_Request
{
  rosidl_runtime_c__String entity;
} gs_ros_interfaces__srv__GetRobotOptions_Request;

// Struct for a sequence of gs_ros_interfaces__srv__GetRobotOptions_Request.
typedef struct gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence
{
  gs_ros_interfaces__srv__GetRobotOptions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'options'
#include "gs_ros_interfaces/msg/detail/robot_options__struct.h"
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"

/// Struct defined in srv/GetRobotOptions in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__GetRobotOptions_Response
{
  gs_ros_interfaces__msg__RobotOptions options;
  simulation_interfaces__msg__Result result;
} gs_ros_interfaces__srv__GetRobotOptions_Response;

// Struct for a sequence of gs_ros_interfaces__srv__GetRobotOptions_Response.
typedef struct gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence
{
  gs_ros_interfaces__srv__GetRobotOptions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__STRUCT_H_
