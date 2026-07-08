// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:srv/GetSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__GET_SENSOR_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__GET_SENSOR_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/srv/detail/get_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSensorOptions_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: entity
  {
    out << "entity: ";
    rosidl_generator_traits::value_to_yaml(msg.entity, out);
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

  // member: sensor_types
  {
    if (msg.sensor_types.size() == 0) {
      out << "sensor_types: []";
    } else {
      out << "sensor_types: [";
      size_t pending_items = msg.sensor_types.size();
      for (auto item : msg.sensor_types) {
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
  const GetSensorOptions_Request & msg,
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

  // member: sensor_types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_types.size() == 0) {
      out << "sensor_types: []\n";
    } else {
      out << "sensor_types:\n";
      for (auto item : msg.sensor_types) {
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

inline std::string to_yaml(const GetSensorOptions_Request & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::srv::GetSensorOptions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::GetSensorOptions_Request & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::GetSensorOptions_Request>()
{
  return "gs_ros_interfaces::srv::GetSensorOptions_Request";
}

template<>
inline const char * name<gs_ros_interfaces::srv::GetSensorOptions_Request>()
{
  return "gs_ros_interfaces/srv/GetSensorOptions_Request";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::GetSensorOptions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::GetSensorOptions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::GetSensorOptions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'cameras'
#include "gs_ros_interfaces/msg/detail/camera_options__traits.hpp"
// Member 'lidars'
#include "gs_ros_interfaces/msg/detail/lidar_options__traits.hpp"
// Member 'imus'
#include "gs_ros_interfaces/msg/detail/imu_options__traits.hpp"
// Member 'contacts'
#include "gs_ros_interfaces/msg/detail/contact_options__traits.hpp"
// Member 'contact_forces'
#include "gs_ros_interfaces/msg/detail/contact_force_options__traits.hpp"
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSensorOptions_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cameras
  {
    if (msg.cameras.size() == 0) {
      out << "cameras: []";
    } else {
      out << "cameras: [";
      size_t pending_items = msg.cameras.size();
      for (auto item : msg.cameras) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lidars
  {
    if (msg.lidars.size() == 0) {
      out << "lidars: []";
    } else {
      out << "lidars: [";
      size_t pending_items = msg.lidars.size();
      for (auto item : msg.lidars) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imus
  {
    if (msg.imus.size() == 0) {
      out << "imus: []";
    } else {
      out << "imus: [";
      size_t pending_items = msg.imus.size();
      for (auto item : msg.imus) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: contacts
  {
    if (msg.contacts.size() == 0) {
      out << "contacts: []";
    } else {
      out << "contacts: [";
      size_t pending_items = msg.contacts.size();
      for (auto item : msg.contacts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: contact_forces
  {
    if (msg.contact_forces.size() == 0) {
      out << "contact_forces: []";
    } else {
      out << "contact_forces: [";
      size_t pending_items = msg.contact_forces.size();
      for (auto item : msg.contact_forces) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const GetSensorOptions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cameras
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cameras.size() == 0) {
      out << "cameras: []\n";
    } else {
      out << "cameras:\n";
      for (auto item : msg.cameras) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lidars
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lidars.size() == 0) {
      out << "lidars: []\n";
    } else {
      out << "lidars:\n";
      for (auto item : msg.lidars) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: imus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imus.size() == 0) {
      out << "imus: []\n";
    } else {
      out << "imus:\n";
      for (auto item : msg.imus) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: contacts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contacts.size() == 0) {
      out << "contacts: []\n";
    } else {
      out << "contacts:\n";
      for (auto item : msg.contacts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: contact_forces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contact_forces.size() == 0) {
      out << "contact_forces: []\n";
    } else {
      out << "contact_forces:\n";
      for (auto item : msg.contact_forces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const GetSensorOptions_Response & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::srv::GetSensorOptions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::GetSensorOptions_Response & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::GetSensorOptions_Response>()
{
  return "gs_ros_interfaces::srv::GetSensorOptions_Response";
}

template<>
inline const char * name<gs_ros_interfaces::srv::GetSensorOptions_Response>()
{
  return "gs_ros_interfaces/srv/GetSensorOptions_Response";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::GetSensorOptions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::GetSensorOptions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::GetSensorOptions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gs_ros_interfaces::srv::GetSensorOptions>()
{
  return "gs_ros_interfaces::srv::GetSensorOptions";
}

template<>
inline const char * name<gs_ros_interfaces::srv::GetSensorOptions>()
{
  return "gs_ros_interfaces/srv/GetSensorOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::GetSensorOptions>
  : std::integral_constant<
    bool,
    has_fixed_size<gs_ros_interfaces::srv::GetSensorOptions_Request>::value &&
    has_fixed_size<gs_ros_interfaces::srv::GetSensorOptions_Response>::value
  >
{
};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::GetSensorOptions>
  : std::integral_constant<
    bool,
    has_bounded_size<gs_ros_interfaces::srv::GetSensorOptions_Request>::value &&
    has_bounded_size<gs_ros_interfaces::srv::GetSensorOptions_Response>::value
  >
{
};

template<>
struct is_service<gs_ros_interfaces::srv::GetSensorOptions>
  : std::true_type
{
};

template<>
struct is_service_request<gs_ros_interfaces::srv::GetSensorOptions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gs_ros_interfaces::srv::GetSensorOptions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__GET_SENSOR_OPTIONS__TRAITS_HPP_
