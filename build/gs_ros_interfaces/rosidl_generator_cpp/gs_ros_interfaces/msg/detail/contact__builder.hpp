// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/contact__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Contact_in_contact
{
public:
  explicit Init_Contact_in_contact(::gs_ros_interfaces::msg::Contact & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::Contact in_contact(::gs_ros_interfaces::msg::Contact::_in_contact_type arg)
  {
    msg_.in_contact = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::Contact msg_;
};

class Init_Contact_link_name
{
public:
  Init_Contact_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Contact_in_contact link_name(::gs_ros_interfaces::msg::Contact::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_Contact_in_contact(msg_);
  }

private:
  ::gs_ros_interfaces::msg::Contact msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::Contact>()
{
  return gs_ros_interfaces::msg::builder::Init_Contact_link_name();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT__BUILDER_HPP_
