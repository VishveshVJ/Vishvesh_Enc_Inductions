// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/SetRobotOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__SET_ROBOT_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__SET_ROBOT_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/set_robot_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetRobotOptions_Request_options
{
public:
  explicit Init_SetRobotOptions_Request_options(::gs_ros_interfaces::srv::SetRobotOptions_Request & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::SetRobotOptions_Request options(::gs_ros_interfaces::srv::SetRobotOptions_Request::_options_type arg)
  {
    msg_.options = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetRobotOptions_Request msg_;
};

class Init_SetRobotOptions_Request_entity
{
public:
  Init_SetRobotOptions_Request_entity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotOptions_Request_options entity(::gs_ros_interfaces::srv::SetRobotOptions_Request::_entity_type arg)
  {
    msg_.entity = std::move(arg);
    return Init_SetRobotOptions_Request_options(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetRobotOptions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::SetRobotOptions_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_SetRobotOptions_Request_entity();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetRobotOptions_Response_result
{
public:
  Init_SetRobotOptions_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gs_ros_interfaces::srv::SetRobotOptions_Response result(::gs_ros_interfaces::srv::SetRobotOptions_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetRobotOptions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::SetRobotOptions_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_SetRobotOptions_Response_result();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__SET_ROBOT_OPTIONS__BUILDER_HPP_
