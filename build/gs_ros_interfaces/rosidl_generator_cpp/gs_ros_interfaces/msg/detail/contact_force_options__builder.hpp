// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/ContactForceOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/contact_force_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_ContactForceOptions_debug_scale
{
public:
  explicit Init_ContactForceOptions_debug_scale(::gs_ros_interfaces::msg::ContactForceOptions & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::ContactForceOptions debug_scale(::gs_ros_interfaces::msg::ContactForceOptions::_debug_scale_type arg)
  {
    msg_.debug_scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactForceOptions msg_;
};

class Init_ContactForceOptions_debug_color
{
public:
  explicit Init_ContactForceOptions_debug_color(::gs_ros_interfaces::msg::ContactForceOptions & msg)
  : msg_(msg)
  {}
  Init_ContactForceOptions_debug_scale debug_color(::gs_ros_interfaces::msg::ContactForceOptions::_debug_color_type arg)
  {
    msg_.debug_color = std::move(arg);
    return Init_ContactForceOptions_debug_scale(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactForceOptions msg_;
};

class Init_ContactForceOptions_max_force
{
public:
  explicit Init_ContactForceOptions_max_force(::gs_ros_interfaces::msg::ContactForceOptions & msg)
  : msg_(msg)
  {}
  Init_ContactForceOptions_debug_color max_force(::gs_ros_interfaces::msg::ContactForceOptions::_max_force_type arg)
  {
    msg_.max_force = std::move(arg);
    return Init_ContactForceOptions_debug_color(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactForceOptions msg_;
};

class Init_ContactForceOptions_min_force
{
public:
  explicit Init_ContactForceOptions_min_force(::gs_ros_interfaces::msg::ContactForceOptions & msg)
  : msg_(msg)
  {}
  Init_ContactForceOptions_max_force min_force(::gs_ros_interfaces::msg::ContactForceOptions::_min_force_type arg)
  {
    msg_.min_force = std::move(arg);
    return Init_ContactForceOptions_max_force(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactForceOptions msg_;
};

class Init_ContactForceOptions_noisy_options
{
public:
  explicit Init_ContactForceOptions_noisy_options(::gs_ros_interfaces::msg::ContactForceOptions & msg)
  : msg_(msg)
  {}
  Init_ContactForceOptions_min_force noisy_options(::gs_ros_interfaces::msg::ContactForceOptions::_noisy_options_type arg)
  {
    msg_.noisy_options = std::move(arg);
    return Init_ContactForceOptions_min_force(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactForceOptions msg_;
};

class Init_ContactForceOptions_rigid_options
{
public:
  explicit Init_ContactForceOptions_rigid_options(::gs_ros_interfaces::msg::ContactForceOptions & msg)
  : msg_(msg)
  {}
  Init_ContactForceOptions_noisy_options rigid_options(::gs_ros_interfaces::msg::ContactForceOptions::_rigid_options_type arg)
  {
    msg_.rigid_options = std::move(arg);
    return Init_ContactForceOptions_noisy_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactForceOptions msg_;
};

class Init_ContactForceOptions_ros_options
{
public:
  explicit Init_ContactForceOptions_ros_options(::gs_ros_interfaces::msg::ContactForceOptions & msg)
  : msg_(msg)
  {}
  Init_ContactForceOptions_rigid_options ros_options(::gs_ros_interfaces::msg::ContactForceOptions::_ros_options_type arg)
  {
    msg_.ros_options = std::move(arg);
    return Init_ContactForceOptions_rigid_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactForceOptions msg_;
};

class Init_ContactForceOptions_options
{
public:
  Init_ContactForceOptions_options()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactForceOptions_ros_options options(::gs_ros_interfaces::msg::ContactForceOptions::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_ContactForceOptions_ros_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactForceOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::ContactForceOptions>()
{
  return gs_ros_interfaces::msg::builder::Init_ContactForceOptions_options();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__BUILDER_HPP_
