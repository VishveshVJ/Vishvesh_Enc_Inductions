// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/SetPhysicsAttributes.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__SET_PHYSICS_ATTRIBUTES__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__SET_PHYSICS_ATTRIBUTES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/set_physics_attributes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPhysicsAttributes_Request_value
{
public:
  explicit Init_SetPhysicsAttributes_Request_value(::gs_ros_interfaces::srv::SetPhysicsAttributes_Request & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::SetPhysicsAttributes_Request value(::gs_ros_interfaces::srv::SetPhysicsAttributes_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetPhysicsAttributes_Request msg_;
};

class Init_SetPhysicsAttributes_Request_dof_names
{
public:
  explicit Init_SetPhysicsAttributes_Request_dof_names(::gs_ros_interfaces::srv::SetPhysicsAttributes_Request & msg)
  : msg_(msg)
  {}
  Init_SetPhysicsAttributes_Request_value dof_names(::gs_ros_interfaces::srv::SetPhysicsAttributes_Request::_dof_names_type arg)
  {
    msg_.dof_names = std::move(arg);
    return Init_SetPhysicsAttributes_Request_value(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetPhysicsAttributes_Request msg_;
};

class Init_SetPhysicsAttributes_Request_names
{
public:
  explicit Init_SetPhysicsAttributes_Request_names(::gs_ros_interfaces::srv::SetPhysicsAttributes_Request & msg)
  : msg_(msg)
  {}
  Init_SetPhysicsAttributes_Request_dof_names names(::gs_ros_interfaces::srv::SetPhysicsAttributes_Request::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_SetPhysicsAttributes_Request_dof_names(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetPhysicsAttributes_Request msg_;
};

class Init_SetPhysicsAttributes_Request_attribute
{
public:
  Init_SetPhysicsAttributes_Request_attribute()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPhysicsAttributes_Request_names attribute(::gs_ros_interfaces::srv::SetPhysicsAttributes_Request::_attribute_type arg)
  {
    msg_.attribute = std::move(arg);
    return Init_SetPhysicsAttributes_Request_names(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetPhysicsAttributes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::SetPhysicsAttributes_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_SetPhysicsAttributes_Request_attribute();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPhysicsAttributes_Response_message
{
public:
  explicit Init_SetPhysicsAttributes_Response_message(::gs_ros_interfaces::srv::SetPhysicsAttributes_Response & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::SetPhysicsAttributes_Response message(::gs_ros_interfaces::srv::SetPhysicsAttributes_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetPhysicsAttributes_Response msg_;
};

class Init_SetPhysicsAttributes_Response_success
{
public:
  Init_SetPhysicsAttributes_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPhysicsAttributes_Response_message success(::gs_ros_interfaces::srv::SetPhysicsAttributes_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetPhysicsAttributes_Response_message(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetPhysicsAttributes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::SetPhysicsAttributes_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_SetPhysicsAttributes_Response_success();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__SET_PHYSICS_ATTRIBUTES__BUILDER_HPP_
