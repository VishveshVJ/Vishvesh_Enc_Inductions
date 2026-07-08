// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/ContactForce.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/contact_force__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_ContactForce_contact_force
{
public:
  explicit Init_ContactForce_contact_force(::gs_ros_interfaces::msg::ContactForce & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::ContactForce contact_force(::gs_ros_interfaces::msg::ContactForce::_contact_force_type arg)
  {
    msg_.contact_force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactForce msg_;
};

class Init_ContactForce_link_name
{
public:
  Init_ContactForce_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactForce_contact_force link_name(::gs_ros_interfaces::msg::ContactForce::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_ContactForce_contact_force(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactForce msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::ContactForce>()
{
  return gs_ros_interfaces::msg::builder::Init_ContactForce_link_name();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE__BUILDER_HPP_
