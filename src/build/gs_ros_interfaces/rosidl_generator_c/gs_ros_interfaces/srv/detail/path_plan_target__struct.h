// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:srv/PathPlanTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__STRUCT_H_
#define GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__STRUCT_H_

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
// Member 'attached_intity'
// Member 'target_link_name'
// Member 'planner'
// Member 'ee_link_name'
#include "rosidl_runtime_c/string.h"
// Member 'goal_state'
// Member 'start_state'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'target_pos'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/PathPlanTarget in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__PathPlanTarget_Request
{
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String attached_intity;
  rosidl_runtime_c__String target_link_name;
  /// Goal joint angles
  rosidl_runtime_c__double__Sequence goal_state;
  /// Starting joint angles
  rosidl_runtime_c__double__Sequence start_state;
  int32_t max_nodes;
  /// Path resolution
  double resolution;
  /// Planning timeout in seconds
  double timeout;
  int32_t max_retries;
  bool smooth_path;
  int32_t num_waypoints;
  bool ignore_collision;
  /// Planner type (e.g., RRT)
  rosidl_runtime_c__String planner;
  /// End-effector link
  rosidl_runtime_c__String ee_link_name;
  /// Show path in GUI
  bool visualize;
  /// Execute path on robot
  bool execute;
  geometry_msgs__msg__Point target_pos;
  double tolerance;
} gs_ros_interfaces__srv__PathPlanTarget_Request;

// Struct for a sequence of gs_ros_interfaces__srv__PathPlanTarget_Request.
typedef struct gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence
{
  gs_ros_interfaces__srv__PathPlanTarget_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'path'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/PathPlanTarget in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__PathPlanTarget_Response
{
  bool success;
  bool plan_found;
  rosidl_runtime_c__String message;
  /// Flattened path [w1_j1, w1_j2, ..., wN_jM]
  rosidl_runtime_c__double__Sequence path;
} gs_ros_interfaces__srv__PathPlanTarget_Response;

// Struct for a sequence of gs_ros_interfaces__srv__PathPlanTarget_Response.
typedef struct gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence
{
  gs_ros_interfaces__srv__PathPlanTarget_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__STRUCT_H_
