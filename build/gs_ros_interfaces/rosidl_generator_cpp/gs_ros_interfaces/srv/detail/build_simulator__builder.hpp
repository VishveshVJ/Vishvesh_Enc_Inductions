// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/BuildSimulator.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__BUILD_SIMULATOR__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__BUILD_SIMULATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/build_simulator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::BuildSimulator_Request>()
{
  return ::gs_ros_interfaces::srv::BuildSimulator_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_BuildSimulator_Response_result
{
public:
  Init_BuildSimulator_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gs_ros_interfaces::srv::BuildSimulator_Response result(::gs_ros_interfaces::srv::BuildSimulator_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::BuildSimulator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::BuildSimulator_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_BuildSimulator_Response_result();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__BUILD_SIMULATOR__BUILDER_HPP_
