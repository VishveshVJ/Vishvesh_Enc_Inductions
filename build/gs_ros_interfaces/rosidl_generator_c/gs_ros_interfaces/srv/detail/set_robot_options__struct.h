// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:srv/SetRobotOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__SET_ROBOT_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__SRV__DETAIL__SET_ROBOT_OPTIONS__STRUCT_H_

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
// Member 'options'
#include "gs_ros_interfaces/msg/detail/robot_options__struct.h"

/// Struct defined in srv/SetRobotOptions in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__SetRobotOptions_Request
{
  rosidl_runtime_c__String entity;
  gs_ros_interfaces__msg__RobotOptions options;
} gs_ros_interfaces__srv__SetRobotOptions_Request;

// Struct for a sequence of gs_ros_interfaces__srv__SetRobotOptions_Request.
typedef struct gs_ros_interfaces__srv__SetRobotOptions_Request__Sequence
{
  gs_ros_interfaces__srv__SetRobotOptions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__SetRobotOptions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"

/// Struct defined in srv/SetRobotOptions in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__SetRobotOptions_Response
{
  simulation_interfaces__msg__Result result;
} gs_ros_interfaces__srv__SetRobotOptions_Response;

// Struct for a sequence of gs_ros_interfaces__srv__SetRobotOptions_Response.
typedef struct gs_ros_interfaces__srv__SetRobotOptions_Response__Sequence
{
  gs_ros_interfaces__srv__SetRobotOptions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__SetRobotOptions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__SET_ROBOT_OPTIONS__STRUCT_H_
