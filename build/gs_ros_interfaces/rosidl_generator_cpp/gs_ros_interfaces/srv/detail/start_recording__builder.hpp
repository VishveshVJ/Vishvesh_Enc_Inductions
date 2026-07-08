// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/StartRecording.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__START_RECORDING__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__START_RECORDING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/start_recording__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartRecording_Request_name
{
public:
  Init_StartRecording_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gs_ros_interfaces::srv::StartRecording_Request name(::gs_ros_interfaces::srv::StartRecording_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::StartRecording_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::StartRecording_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_StartRecording_Request_name();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartRecording_Response_message
{
public:
  explicit Init_StartRecording_Response_message(::gs_ros_interfaces::srv::StartRecording_Response & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::StartRecording_Response message(::gs_ros_interfaces::srv::StartRecording_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::StartRecording_Response msg_;
};

class Init_StartRecording_Response_success
{
public:
  Init_StartRecording_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRecording_Response_message success(::gs_ros_interfaces::srv::StartRecording_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_StartRecording_Response_message(msg_);
  }

private:
  ::gs_ros_interfaces::srv::StartRecording_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::StartRecording_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_StartRecording_Response_success();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__START_RECORDING__BUILDER_HPP_
