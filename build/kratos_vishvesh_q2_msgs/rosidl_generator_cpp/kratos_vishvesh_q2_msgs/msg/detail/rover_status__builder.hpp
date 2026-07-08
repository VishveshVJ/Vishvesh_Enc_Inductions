// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kratos_vishvesh_q2_msgs:msg/RoverStatus.idl
// generated code does not contain a copyright notice

#ifndef KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__BUILDER_HPP_
#define KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kratos_vishvesh_q2_msgs/msg/detail/rover_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kratos_vishvesh_q2_msgs
{

namespace msg
{

namespace builder
{

class Init_RoverStatus_mode
{
public:
  explicit Init_RoverStatus_mode(::kratos_vishvesh_q2_msgs::msg::RoverStatus & msg)
  : msg_(msg)
  {}
  ::kratos_vishvesh_q2_msgs::msg::RoverStatus mode(::kratos_vishvesh_q2_msgs::msg::RoverStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kratos_vishvesh_q2_msgs::msg::RoverStatus msg_;
};

class Init_RoverStatus_emergency_stop
{
public:
  explicit Init_RoverStatus_emergency_stop(::kratos_vishvesh_q2_msgs::msg::RoverStatus & msg)
  : msg_(msg)
  {}
  Init_RoverStatus_mode emergency_stop(::kratos_vishvesh_q2_msgs::msg::RoverStatus::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_RoverStatus_mode(msg_);
  }

private:
  ::kratos_vishvesh_q2_msgs::msg::RoverStatus msg_;
};

class Init_RoverStatus_velocity
{
public:
  explicit Init_RoverStatus_velocity(::kratos_vishvesh_q2_msgs::msg::RoverStatus & msg)
  : msg_(msg)
  {}
  Init_RoverStatus_emergency_stop velocity(::kratos_vishvesh_q2_msgs::msg::RoverStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RoverStatus_emergency_stop(msg_);
  }

private:
  ::kratos_vishvesh_q2_msgs::msg::RoverStatus msg_;
};

class Init_RoverStatus_battery_percentage
{
public:
  Init_RoverStatus_battery_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverStatus_velocity battery_percentage(::kratos_vishvesh_q2_msgs::msg::RoverStatus::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_RoverStatus_velocity(msg_);
  }

private:
  ::kratos_vishvesh_q2_msgs::msg::RoverStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kratos_vishvesh_q2_msgs::msg::RoverStatus>()
{
  return kratos_vishvesh_q2_msgs::msg::builder::Init_RoverStatus_battery_percentage();
}

}  // namespace kratos_vishvesh_q2_msgs

#endif  // KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__BUILDER_HPP_
