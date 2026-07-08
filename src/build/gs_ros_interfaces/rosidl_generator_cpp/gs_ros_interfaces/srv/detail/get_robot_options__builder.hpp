// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/GetRobotOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/get_robot_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetRobotOptions_Request_entity
{
public:
  Init_GetRobotOptions_Request_entity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gs_ros_interfaces::srv::GetRobotOptions_Request entity(::gs_ros_interfaces::srv::GetRobotOptions_Request::_entity_type arg)
  {
    msg_.entity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetRobotOptions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::GetRobotOptions_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_GetRobotOptions_Request_entity();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetRobotOptions_Response_result
{
public:
  explicit Init_GetRobotOptions_Response_result(::gs_ros_interfaces::srv::GetRobotOptions_Response & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::GetRobotOptions_Response result(::gs_ros_interfaces::srv::GetRobotOptions_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetRobotOptions_Response msg_;
};

class Init_GetRobotOptions_Response_options
{
public:
  Init_GetRobotOptions_Response_options()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotOptions_Response_result options(::gs_ros_interfaces::srv::GetRobotOptions_Response::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_GetRobotOptions_Response_result(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetRobotOptions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::GetRobotOptions_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_GetRobotOptions_Response_options();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__BUILDER_HPP_
