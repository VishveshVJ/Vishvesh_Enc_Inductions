// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:srv/GetRobotOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/srv/detail/get_robot_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotOptions_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: entity
  {
    out << "entity: ";
    rosidl_generator_traits::value_to_yaml(msg.entity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotOptions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entity: ";
    rosidl_generator_traits::value_to_yaml(msg.entity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotOptions_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gs_ros_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gs_ros_interfaces::srv::GetRobotOptions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::GetRobotOptions_Request & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::GetRobotOptions_Request>()
{
  return "gs_ros_interfaces::srv::GetRobotOptions_Request";
}

template<>
inline const char * name<gs_ros_interfaces::srv::GetRobotOptions_Request>()
{
  return "gs_ros_interfaces/srv/GetRobotOptions_Request";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::GetRobotOptions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::GetRobotOptions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::GetRobotOptions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'options'
#include "gs_ros_interfaces/msg/detail/robot_options__traits.hpp"
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotOptions_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: options
  {
    out << "options: ";
    to_flow_style_yaml(msg.options, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotOptions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "options:\n";
    to_block_style_yaml(msg.options, out, indentation + 2);
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotOptions_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gs_ros_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gs_ros_interfaces::srv::GetRobotOptions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::GetRobotOptions_Response & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::GetRobotOptions_Response>()
{
  return "gs_ros_interfaces::srv::GetRobotOptions_Response";
}

template<>
inline const char * name<gs_ros_interfaces::srv::GetRobotOptions_Response>()
{
  return "gs_ros_interfaces/srv/GetRobotOptions_Response";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::GetRobotOptions_Response>
  : std::integral_constant<bool, has_fixed_size<gs_ros_interfaces::msg::RobotOptions>::value && has_fixed_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::GetRobotOptions_Response>
  : std::integral_constant<bool, has_bounded_size<gs_ros_interfaces::msg::RobotOptions>::value && has_bounded_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct is_message<gs_ros_interfaces::srv::GetRobotOptions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gs_ros_interfaces::srv::GetRobotOptions>()
{
  return "gs_ros_interfaces::srv::GetRobotOptions";
}

template<>
inline const char * name<gs_ros_interfaces::srv::GetRobotOptions>()
{
  return "gs_ros_interfaces/srv/GetRobotOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::GetRobotOptions>
  : std::integral_constant<
    bool,
    has_fixed_size<gs_ros_interfaces::srv::GetRobotOptions_Request>::value &&
    has_fixed_size<gs_ros_interfaces::srv::GetRobotOptions_Response>::value
  >
{
};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::GetRobotOptions>
  : std::integral_constant<
    bool,
    has_bounded_size<gs_ros_interfaces::srv::GetRobotOptions_Request>::value &&
    has_bounded_size<gs_ros_interfaces::srv::GetRobotOptions_Response>::value
  >
{
};

template<>
struct is_service<gs_ros_interfaces::srv::GetRobotOptions>
  : std::true_type
{
};

template<>
struct is_service_request<gs_ros_interfaces::srv::GetRobotOptions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gs_ros_interfaces::srv::GetRobotOptions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__TRAITS_HPP_
