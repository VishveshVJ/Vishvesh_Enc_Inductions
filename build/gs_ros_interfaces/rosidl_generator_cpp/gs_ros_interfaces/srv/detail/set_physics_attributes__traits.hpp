// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:srv/SetPhysicsAttributes.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__SET_PHYSICS_ATTRIBUTES__TRAITS_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__SET_PHYSICS_ATTRIBUTES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/srv/detail/set_physics_attributes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPhysicsAttributes_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: attribute
  {
    out << "attribute: ";
    rosidl_generator_traits::value_to_yaml(msg.attribute, out);
    out << ", ";
  }

  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dof_names
  {
    if (msg.dof_names.size() == 0) {
      out << "dof_names: []";
    } else {
      out << "dof_names: [";
      size_t pending_items = msg.dof_names.size();
      for (auto item : msg.dof_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: value
  {
    if (msg.value.size() == 0) {
      out << "value: []";
    } else {
      out << "value: [";
      size_t pending_items = msg.value.size();
      for (auto item : msg.value) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPhysicsAttributes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: attribute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attribute: ";
    rosidl_generator_traits::value_to_yaml(msg.attribute, out);
    out << "\n";
  }

  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dof_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dof_names.size() == 0) {
      out << "dof_names: []\n";
    } else {
      out << "dof_names:\n";
      for (auto item : msg.dof_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.value.size() == 0) {
      out << "value: []\n";
    } else {
      out << "value:\n";
      for (auto item : msg.value) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPhysicsAttributes_Request & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::srv::SetPhysicsAttributes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::SetPhysicsAttributes_Request & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::SetPhysicsAttributes_Request>()
{
  return "gs_ros_interfaces::srv::SetPhysicsAttributes_Request";
}

template<>
inline const char * name<gs_ros_interfaces::srv::SetPhysicsAttributes_Request>()
{
  return "gs_ros_interfaces/srv/SetPhysicsAttributes_Request";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::SetPhysicsAttributes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::SetPhysicsAttributes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::SetPhysicsAttributes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPhysicsAttributes_Response & msg,
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
  const SetPhysicsAttributes_Response & msg,
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

inline std::string to_yaml(const SetPhysicsAttributes_Response & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::srv::SetPhysicsAttributes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::SetPhysicsAttributes_Response & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::SetPhysicsAttributes_Response>()
{
  return "gs_ros_interfaces::srv::SetPhysicsAttributes_Response";
}

template<>
inline const char * name<gs_ros_interfaces::srv::SetPhysicsAttributes_Response>()
{
  return "gs_ros_interfaces/srv/SetPhysicsAttributes_Response";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::SetPhysicsAttributes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::SetPhysicsAttributes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::SetPhysicsAttributes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gs_ros_interfaces::srv::SetPhysicsAttributes>()
{
  return "gs_ros_interfaces::srv::SetPhysicsAttributes";
}

template<>
inline const char * name<gs_ros_interfaces::srv::SetPhysicsAttributes>()
{
  return "gs_ros_interfaces/srv/SetPhysicsAttributes";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::SetPhysicsAttributes>
  : std::integral_constant<
    bool,
    has_fixed_size<gs_ros_interfaces::srv::SetPhysicsAttributes_Request>::value &&
    has_fixed_size<gs_ros_interfaces::srv::SetPhysicsAttributes_Response>::value
  >
{
};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::SetPhysicsAttributes>
  : std::integral_constant<
    bool,
    has_bounded_size<gs_ros_interfaces::srv::SetPhysicsAttributes_Request>::value &&
    has_bounded_size<gs_ros_interfaces::srv::SetPhysicsAttributes_Response>::value
  >
{
};

template<>
struct is_service<gs_ros_interfaces::srv::SetPhysicsAttributes>
  : std::true_type
{
};

template<>
struct is_service_request<gs_ros_interfaces::srv::SetPhysicsAttributes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gs_ros_interfaces::srv::SetPhysicsAttributes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__SET_PHYSICS_ATTRIBUTES__TRAITS_HPP_
