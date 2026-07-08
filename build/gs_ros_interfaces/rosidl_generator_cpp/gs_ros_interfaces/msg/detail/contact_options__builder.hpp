// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/ContactOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/contact_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_ContactOptions_debug_color
{
public:
  explicit Init_ContactOptions_debug_color(::gs_ros_interfaces::msg::ContactOptions & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::ContactOptions debug_color(::gs_ros_interfaces::msg::ContactOptions::_debug_color_type arg)
  {
    msg_.debug_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactOptions msg_;
};

class Init_ContactOptions_debug_sphere_radius
{
public:
  explicit Init_ContactOptions_debug_sphere_radius(::gs_ros_interfaces::msg::ContactOptions & msg)
  : msg_(msg)
  {}
  Init_ContactOptions_debug_color debug_sphere_radius(::gs_ros_interfaces::msg::ContactOptions::_debug_sphere_radius_type arg)
  {
    msg_.debug_sphere_radius = std::move(arg);
    return Init_ContactOptions_debug_color(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactOptions msg_;
};

class Init_ContactOptions_rigid_options
{
public:
  explicit Init_ContactOptions_rigid_options(::gs_ros_interfaces::msg::ContactOptions & msg)
  : msg_(msg)
  {}
  Init_ContactOptions_debug_sphere_radius rigid_options(::gs_ros_interfaces::msg::ContactOptions::_rigid_options_type arg)
  {
    msg_.rigid_options = std::move(arg);
    return Init_ContactOptions_debug_sphere_radius(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactOptions msg_;
};

class Init_ContactOptions_ros_options
{
public:
  explicit Init_ContactOptions_ros_options(::gs_ros_interfaces::msg::ContactOptions & msg)
  : msg_(msg)
  {}
  Init_ContactOptions_rigid_options ros_options(::gs_ros_interfaces::msg::ContactOptions::_ros_options_type arg)
  {
    msg_.ros_options = std::move(arg);
    return Init_ContactOptions_rigid_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactOptions msg_;
};

class Init_ContactOptions_options
{
public:
  Init_ContactOptions_options()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactOptions_ros_options options(::gs_ros_interfaces::msg::ContactOptions::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_ContactOptions_ros_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ContactOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::ContactOptions>()
{
  return gs_ros_interfaces::msg::builder::Init_ContactOptions_options();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_OPTIONS__BUILDER_HPP_
