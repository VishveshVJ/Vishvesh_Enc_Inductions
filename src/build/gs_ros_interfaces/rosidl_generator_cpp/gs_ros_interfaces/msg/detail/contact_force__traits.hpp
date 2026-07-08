// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/ContactForce.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/contact_force__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'contact_force'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContactForce & msg,
  std::ostream & out)
{
  out << "{";
  // member: link_name
  {
    out << "link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link_name, out);
    out << ", ";
  }

  // member: contact_force
  {
    out << "contact_force: ";
    to_flow_style_yaml(msg.contact_force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContactForce & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link_name, out);
    out << "\n";
  }

  // member: contact_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_force:\n";
    to_block_style_yaml(msg.contact_force, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactForce & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace gs_ros_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gs_ros_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gs_ros_interfaces::msg::ContactForce & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::ContactForce & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::ContactForce>()
{
  return "gs_ros_interfaces::msg::ContactForce";
}

template<>
inline const char * name<gs_ros_interfaces::msg::ContactForce>()
{
  return "gs_ros_interfaces/msg/ContactForce";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::ContactForce>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::ContactForce>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::ContactForce>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE__TRAITS_HPP_
