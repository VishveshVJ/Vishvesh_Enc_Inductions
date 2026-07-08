// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/FKTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__FK_TARGET__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__FK_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/fk_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_FKTarget_Request_link_names
{
public:
  explicit Init_FKTarget_Request_link_names(::gs_ros_interfaces::srv::FKTarget_Request & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::FKTarget_Request link_names(::gs_ros_interfaces::srv::FKTarget_Request::_link_names_type arg)
  {
    msg_.link_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::FKTarget_Request msg_;
};

class Init_FKTarget_Request_dof_names
{
public:
  explicit Init_FKTarget_Request_dof_names(::gs_ros_interfaces::srv::FKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_FKTarget_Request_link_names dof_names(::gs_ros_interfaces::srv::FKTarget_Request::_dof_names_type arg)
  {
    msg_.dof_names = std::move(arg);
    return Init_FKTarget_Request_link_names(msg_);
  }

private:
  ::gs_ros_interfaces::srv::FKTarget_Request msg_;
};

class Init_FKTarget_Request_qpos
{
public:
  explicit Init_FKTarget_Request_qpos(::gs_ros_interfaces::srv::FKTarget_Request & msg)
  : msg_(msg)
  {}
  Init_FKTarget_Request_dof_names qpos(::gs_ros_interfaces::srv::FKTarget_Request::_qpos_type arg)
  {
    msg_.qpos = std::move(arg);
    return Init_FKTarget_Request_dof_names(msg_);
  }

private:
  ::gs_ros_interfaces::srv::FKTarget_Request msg_;
};

class Init_FKTarget_Request_robot_name
{
public:
  Init_FKTarget_Request_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FKTarget_Request_qpos robot_name(::gs_ros_interfaces::srv::FKTarget_Request::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_FKTarget_Request_qpos(msg_);
  }

private:
  ::gs_ros_interfaces::srv::FKTarget_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::FKTarget_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_FKTarget_Request_robot_name();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_FKTarget_Response_link_quat
{
public:
  explicit Init_FKTarget_Response_link_quat(::gs_ros_interfaces::srv::FKTarget_Response & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::FKTarget_Response link_quat(::gs_ros_interfaces::srv::FKTarget_Response::_link_quat_type arg)
  {
    msg_.link_quat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::FKTarget_Response msg_;
};

class Init_FKTarget_Response_link_pos
{
public:
  explicit Init_FKTarget_Response_link_pos(::gs_ros_interfaces::srv::FKTarget_Response & msg)
  : msg_(msg)
  {}
  Init_FKTarget_Response_link_quat link_pos(::gs_ros_interfaces::srv::FKTarget_Response::_link_pos_type arg)
  {
    msg_.link_pos = std::move(arg);
    return Init_FKTarget_Response_link_quat(msg_);
  }

private:
  ::gs_ros_interfaces::srv::FKTarget_Response msg_;
};

class Init_FKTarget_Response_message
{
public:
  explicit Init_FKTarget_Response_message(::gs_ros_interfaces::srv::FKTarget_Response & msg)
  : msg_(msg)
  {}
  Init_FKTarget_Response_link_pos message(::gs_ros_interfaces::srv::FKTarget_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_FKTarget_Response_link_pos(msg_);
  }

private:
  ::gs_ros_interfaces::srv::FKTarget_Response msg_;
};

class Init_FKTarget_Response_success
{
public:
  Init_FKTarget_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FKTarget_Response_message success(::gs_ros_interfaces::srv::FKTarget_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FKTarget_Response_message(msg_);
  }

private:
  ::gs_ros_interfaces::srv::FKTarget_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::FKTarget_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_FKTarget_Response_success();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__FK_TARGET__BUILDER_HPP_
