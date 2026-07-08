// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:srv/IKTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__STRUCT_H_
#define GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__STRUCT_H_

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
// Member 'target_link_name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'init_robot_pos'
// Member 'pos_mask'
// Member 'rot_mask'
// Member 'dofs_idx_local'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/IKTarget in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__IKTarget_Request
{
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String target_link_name;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
  /// Starting joint positions
  rosidl_runtime_c__double__Sequence init_robot_pos;
  /// Respect joint limits
  bool request_joint_limit;
  /// random restarts
  int32_t max_samples;
  int32_t max_solver_iterartions;
  double damping;
  /// Position tolerance
  double pos_tol;
  /// Rotation tolerance
  double rot_tol;
  /// [x, y, z] mask
  rosidl_runtime_c__boolean__Sequence pos_mask;
  /// [roll, pitch, yaw] mask
  rosidl_runtime_c__boolean__Sequence rot_mask;
  double max_step_size;
  /// DOFs to optimize
  rosidl_runtime_c__int32__Sequence dofs_idx_local;
  /// Show ghost robot in GUI
  bool visualize;
  /// Apply solution to robot
  bool execute;
} gs_ros_interfaces__srv__IKTarget_Request;

// Struct for a sequence of gs_ros_interfaces__srv__IKTarget_Request.
typedef struct gs_ros_interfaces__srv__IKTarget_Request__Sequence
{
  gs_ros_interfaces__srv__IKTarget_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__IKTarget_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_angles'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/IKTarget in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__IKTarget_Response
{
  /// Service call status
  bool success;
  /// If solver converged
  bool solution_found;
  /// Resulting DOF positions
  rosidl_runtime_c__double__Sequence joint_angles;
  double target_pos_error;
  double target_quat_error;
  rosidl_runtime_c__String message;
} gs_ros_interfaces__srv__IKTarget_Response;

// Struct for a sequence of gs_ros_interfaces__srv__IKTarget_Response.
typedef struct gs_ros_interfaces__srv__IKTarget_Response__Sequence
{
  gs_ros_interfaces__srv__IKTarget_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__IKTarget_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__STRUCT_H_
