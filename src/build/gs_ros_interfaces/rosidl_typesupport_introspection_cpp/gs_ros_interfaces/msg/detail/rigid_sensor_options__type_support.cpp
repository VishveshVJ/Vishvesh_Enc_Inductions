// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:msg/RigidSensorOptions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gs_ros_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RigidSensorOptions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::msg::RigidSensorOptions(_init);
}

void RigidSensorOptions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::msg::RigidSensorOptions *>(message_memory);
  typed_message->~RigidSensorOptions();
}

size_t size_function__RigidSensorOptions__pos_offset(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__RigidSensorOptions__pos_offset(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__RigidSensorOptions__pos_offset(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__RigidSensorOptions__pos_offset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RigidSensorOptions__pos_offset(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RigidSensorOptions__pos_offset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RigidSensorOptions__pos_offset(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__RigidSensorOptions__euler_offset(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__RigidSensorOptions__euler_offset(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__RigidSensorOptions__euler_offset(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__RigidSensorOptions__euler_offset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RigidSensorOptions__euler_offset(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RigidSensorOptions__euler_offset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RigidSensorOptions__euler_offset(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RigidSensorOptions_message_member_array[3] = {
  {
    "link",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::RigidSensorOptions, link),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::RigidSensorOptions, pos_offset),  // bytes offset in struct
    nullptr,  // default value
    size_function__RigidSensorOptions__pos_offset,  // size() function pointer
    get_const_function__RigidSensorOptions__pos_offset,  // get_const(index) function pointer
    get_function__RigidSensorOptions__pos_offset,  // get(index) function pointer
    fetch_function__RigidSensorOptions__pos_offset,  // fetch(index, &value) function pointer
    assign_function__RigidSensorOptions__pos_offset,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "euler_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::RigidSensorOptions, euler_offset),  // bytes offset in struct
    nullptr,  // default value
    size_function__RigidSensorOptions__euler_offset,  // size() function pointer
    get_const_function__RigidSensorOptions__euler_offset,  // get_const(index) function pointer
    get_function__RigidSensorOptions__euler_offset,  // get(index) function pointer
    fetch_function__RigidSensorOptions__euler_offset,  // fetch(index, &value) function pointer
    assign_function__RigidSensorOptions__euler_offset,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RigidSensorOptions_message_members = {
  "gs_ros_interfaces::msg",  // message namespace
  "RigidSensorOptions",  // message name
  3,  // number of fields
  sizeof(gs_ros_interfaces::msg::RigidSensorOptions),
  RigidSensorOptions_message_member_array,  // message members
  RigidSensorOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  RigidSensorOptions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RigidSensorOptions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RigidSensorOptions_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace gs_ros_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gs_ros_interfaces::msg::RigidSensorOptions>()
{
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::RigidSensorOptions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, msg, RigidSensorOptions)() {
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::RigidSensorOptions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
