// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/IKTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/ik_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_IKTarget_Request_execute
{
public:
  explicit Init_IKTarget_Request_execute(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::IKTarget_Request execute(::gs_ros_interfaces::srv::IKTarget_Request::_execute_type arg)
  {
    msg_.execute = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_visualize
{
public:
  explicit Init_IKTarget_Request_visualize(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_execute visualize(::gs_ros_interfaces::srv::IKTarget_Request::_visualize_type arg)
  {
    msg_.visualize = std::move(arg);
    return Init_IKTarget_Request_execute(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_dofs_idx_local
{
public:
  explicit Init_IKTarget_Request_dofs_idx_local(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_visualize dofs_idx_local(::gs_ros_interfaces::srv::IKTarget_Request::_dofs_idx_local_type arg)
  {
    msg_.dofs_idx_local = std::move(arg);
    return Init_IKTarget_Request_visualize(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_max_step_size
{
public:
  explicit Init_IKTarget_Request_max_step_size(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_dofs_idx_local max_step_size(::gs_ros_interfaces::srv::IKTarget_Request::_max_step_size_type arg)
  {
    msg_.max_step_size = std::move(arg);
    return Init_IKTarget_Request_dofs_idx_local(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_rot_mask
{
public:
  explicit Init_IKTarget_Request_rot_mask(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_max_step_size rot_mask(::gs_ros_interfaces::srv::IKTarget_Request::_rot_mask_type arg)
  {
    msg_.rot_mask = std::move(arg);
    return Init_IKTarget_Request_max_step_size(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_pos_mask
{
public:
  explicit Init_IKTarget_Request_pos_mask(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_rot_mask pos_mask(::gs_ros_interfaces::srv::IKTarget_Request::_pos_mask_type arg)
  {
    msg_.pos_mask = std::move(arg);
    return Init_IKTarget_Request_rot_mask(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_rot_tol
{
public:
  explicit Init_IKTarget_Request_rot_tol(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_pos_mask rot_tol(::gs_ros_interfaces::srv::IKTarget_Request::_rot_tol_type arg)
  {
    msg_.rot_tol = std::move(arg);
    return Init_IKTarget_Request_pos_mask(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_pos_tol
{
public:
  explicit Init_IKTarget_Request_pos_tol(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_rot_tol pos_tol(::gs_ros_interfaces::srv::IKTarget_Request::_pos_tol_type arg)
  {
    msg_.pos_tol = std::move(arg);
    return Init_IKTarget_Request_rot_tol(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_damping
{
public:
  explicit Init_IKTarget_Request_damping(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_pos_tol damping(::gs_ros_interfaces::srv::IKTarget_Request::_damping_type arg)
  {
    msg_.damping = std::move(arg);
    return Init_IKTarget_Request_pos_tol(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_max_solver_iterartions
{
public:
  explicit Init_IKTarget_Request_max_solver_iterartions(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_damping max_solver_iterartions(::gs_ros_interfaces::srv::IKTarget_Request::_max_solver_iterartions_type arg)
  {
    msg_.max_solver_iterartions = std::move(arg);
    return Init_IKTarget_Request_damping(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_max_samples
{
public:
  explicit Init_IKTarget_Request_max_samples(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_max_solver_iterartions max_samples(::gs_ros_interfaces::srv::IKTarget_Request::_max_samples_type arg)
  {
    msg_.max_samples = std::move(arg);
    return Init_IKTarget_Request_max_solver_iterartions(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_request_joint_limit
{
public:
  explicit Init_IKTarget_Request_request_joint_limit(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_max_samples request_joint_limit(::gs_ros_interfaces::srv::IKTarget_Request::_request_joint_limit_type arg)
  {
    msg_.request_joint_limit = std::move(arg);
    return Init_IKTarget_Request_max_samples(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_init_robot_pos
{
public:
  explicit Init_IKTarget_Request_init_robot_pos(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_request_joint_limit init_robot_pos(::gs_ros_interfaces::srv::IKTarget_Request::_init_robot_pos_type arg)
  {
    msg_.init_robot_pos = std::move(arg);
    return Init_IKTarget_Request_request_joint_limit(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_orientation
{
public:
  explicit Init_IKTarget_Request_orientation(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_init_robot_pos orientation(::gs_ros_interfaces::srv::IKTarget_Request::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_IKTarget_Request_init_robot_pos(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_position
{
public:
  explicit Init_IKTarget_Request_position(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_orientation position(::gs_ros_interfaces::srv::IKTarget_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_IKTarget_Request_orientation(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_target_link_name
{
public:
  explicit Init_IKTarget_Request_target_link_name(::gs_ros_interfaces::srv::IKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Request_position target_link_name(::gs_ros_interfaces::srv::IKTarget_Request::_target_link_name_type arg)
  {
    msg_.target_link_name = std::move(arg);
    return Init_IKTarget_Request_position(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

class Init_IKTarget_Request_robot_name
{
public:
  Init_IKTarget_Request_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IKTarget_Request_target_link_name robot_name(::gs_ros_interfaces::srv::IKTarget_Request::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_IKTarget_Request_target_link_name(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::IKTarget_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_IKTarget_Request_robot_name();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_IKTarget_Response_message
{
public:
  explicit Init_IKTarget_Response_message(::gs_ros_interfaces::srv::IKTarget_Response & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::IKTarget_Response message(::gs_ros_interfaces::srv::IKTarget_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Response msg_;
};

class Init_IKTarget_Response_target_quat_error
{
public:
  explicit Init_IKTarget_Response_target_quat_error(::gs_ros_interfaces::srv::IKTarget_Response & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Response_message target_quat_error(::gs_ros_interfaces::srv::IKTarget_Response::_target_quat_error_type arg)
  {
    msg_.target_quat_error = std::move(arg);
    return Init_IKTarget_Response_message(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Response msg_;
};

class Init_IKTarget_Response_target_pos_error
{
public:
  explicit Init_IKTarget_Response_target_pos_error(::gs_ros_interfaces::srv::IKTarget_Response & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Response_target_quat_error target_pos_error(::gs_ros_interfaces::srv::IKTarget_Response::_target_pos_error_type arg)
  {
    msg_.target_pos_error = std::move(arg);
    return Init_IKTarget_Response_target_quat_error(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Response msg_;
};

class Init_IKTarget_Response_joint_angles
{
public:
  explicit Init_IKTarget_Response_joint_angles(::gs_ros_interfaces::srv::IKTarget_Response & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Response_target_pos_error joint_angles(::gs_ros_interfaces::srv::IKTarget_Response::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return Init_IKTarget_Response_target_pos_error(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Response msg_;
};

class Init_IKTarget_Response_solution_found
{
public:
  explicit Init_IKTarget_Response_solution_found(::gs_ros_interfaces::srv::IKTarget_Response & msg)
  : msg_(msg)
  {}
  Init_IKTarget_Response_joint_angles solution_found(::gs_ros_interfaces::srv::IKTarget_Response::_solution_found_type arg)
  {
    msg_.solution_found = std::move(arg);
    return Init_IKTarget_Response_joint_angles(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Response msg_;
};

class Init_IKTarget_Response_success
{
public:
  Init_IKTarget_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IKTarget_Response_solution_found success(::gs_ros_interfaces::srv::IKTarget_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_IKTarget_Response_solution_found(msg_);
  }

private:
  ::gs_ros_interfaces::srv::IKTarget_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::IKTarget_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_IKTarget_Response_success();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__BUILDER_HPP_
