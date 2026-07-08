// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:srv/SetEntityPose.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__SET_ENTITY_POSE__TRAITS_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__SET_ENTITY_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/srv/detail/set_entity_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetEntityPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: entity_name
  {
    out << "entity_name: ";
    rosidl_generator_traits::value_to_yaml(msg.entity_name, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetEntityPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entity_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entity_name: ";
    rosidl_generator_traits::value_to_yaml(msg.entity_name, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetEntityPose_Request & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::srv::SetEntityPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::SetEntityPose_Request & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::SetEntityPose_Request>()
{
  return "gs_ros_interfaces::srv::SetEntityPose_Request";
}

template<>
inline const char * name<gs_ros_interfaces::srv::SetEntityPose_Request>()
{
  return "gs_ros_interfaces/srv/SetEntityPose_Request";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::SetEntityPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::SetEntityPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::SetEntityPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetEntityPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetEntityPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetEntityPose_Response & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::srv::SetEntityPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::SetEntityPose_Response & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::SetEntityPose_Response>()
{
  return "gs_ros_interfaces::srv::SetEntityPose_Response";
}

template<>
inline const char * name<gs_ros_interfaces::srv::SetEntityPose_Response>()
{
  return "gs_ros_interfaces/srv/SetEntityPose_Response";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::SetEntityPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::SetEntityPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::SetEntityPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gs_ros_interfaces::srv::SetEntityPose>()
{
  return "gs_ros_interfaces::srv::SetEntityPose";
}

template<>
inline const char * name<gs_ros_interfaces::srv::SetEntityPose>()
{
  return "gs_ros_interfaces/srv/SetEntityPose";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::SetEntityPose>
  : std::integral_constant<
    bool,
    has_fixed_size<gs_ros_interfaces::srv::SetEntityPose_Request>::value &&
    has_fixed_size<gs_ros_interfaces::srv::SetEntityPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::SetEntityPose>
  : std::integral_constant<
    bool,
    has_bounded_size<gs_ros_interfaces::srv::SetEntityPose_Request>::value &&
    has_bounded_size<gs_ros_interfaces::srv::SetEntityPose_Response>::value
  >
{
};

template<>
struct is_service<gs_ros_interfaces::srv::SetEntityPose>
  : std::true_type
{
};

template<>
struct is_service_request<gs_ros_interfaces::srv::SetEntityPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gs_ros_interfaces::srv::SetEntityPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__SET_ENTITY_POSE__TRAITS_HPP_
