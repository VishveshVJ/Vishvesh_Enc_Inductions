// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kratos_vishvesh_q2_msgs:msg/RoverStatus.idl
// generated code does not contain a copyright notice

#ifndef KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__TRAITS_HPP_
#define KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kratos_vishvesh_q2_msgs/msg/detail/rover_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kratos_vishvesh_q2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoverStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: emergency_stop
  {
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoverStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoverStatus & msg, bool use_flow_style = false)
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

}  // namespace kratos_vishvesh_q2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kratos_vishvesh_q2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kratos_vishvesh_q2_msgs::msg::RoverStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  kratos_vishvesh_q2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kratos_vishvesh_q2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kratos_vishvesh_q2_msgs::msg::RoverStatus & msg)
{
  return kratos_vishvesh_q2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kratos_vishvesh_q2_msgs::msg::RoverStatus>()
{
  return "kratos_vishvesh_q2_msgs::msg::RoverStatus";
}

template<>
inline const char * name<kratos_vishvesh_q2_msgs::msg::RoverStatus>()
{
  return "kratos_vishvesh_q2_msgs/msg/RoverStatus";
}

template<>
struct has_fixed_size<kratos_vishvesh_q2_msgs::msg::RoverStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kratos_vishvesh_q2_msgs::msg::RoverStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kratos_vishvesh_q2_msgs::msg::RoverStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__TRAITS_HPP_
