// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:msg/ContactForceOptions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gs_ros_interfaces/msg/detail/contact_force_options__struct.hpp"
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

void ContactForceOptions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::msg::ContactForceOptions(_init);
}

void ContactForceOptions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::msg::ContactForceOptions *>(message_memory);
  typed_message->~ContactForceOptions();
}

size_t size_function__ContactForceOptions__min_force(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ContactForceOptions__min_force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactForceOptions__min_force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ContactForceOptions__min_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ContactForceOptions__min_force(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ContactForceOptions__min_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ContactForceOptions__min_force(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ContactForceOptions__min_force(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ContactForceOptions__max_force(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ContactForceOptions__max_force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactForceOptions__max_force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ContactForceOptions__max_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ContactForceOptions__max_force(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ContactForceOptions__max_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ContactForceOptions__max_force(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ContactForceOptions__max_force(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ContactForceOptions__debug_color(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ContactForceOptions__debug_color(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactForceOptions__debug_color(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ContactForceOptions__debug_color(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ContactForceOptions__debug_color(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ContactForceOptions__debug_color(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ContactForceOptions__debug_color(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ContactForceOptions__debug_color(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ContactForceOptions_message_member_array[8] = {
  {
    "options",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::GeneralSensorOptions>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ContactForceOptions, options),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ros_options",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::RosSensorOptions>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ContactForceOptions, ros_options),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rigid_options",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::RigidSensorOptions>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ContactForceOptions, rigid_options),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "noisy_options",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::NoisySensorOptions>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ContactForceOptions, noisy_options),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ContactForceOptions, min_force),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactForceOptions__min_force,  // size() function pointer
    get_const_function__ContactForceOptions__min_force,  // get_const(index) function pointer
    get_function__ContactForceOptions__min_force,  // get(index) function pointer
    fetch_function__ContactForceOptions__min_force,  // fetch(index, &value) function pointer
    assign_function__ContactForceOptions__min_force,  // assign(index, value) function pointer
    resize_function__ContactForceOptions__min_force  // resize(index) function pointer
  },
  {
    "max_force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ContactForceOptions, max_force),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactForceOptions__max_force,  // size() function pointer
    get_const_function__ContactForceOptions__max_force,  // get_const(index) function pointer
    get_function__ContactForceOptions__max_force,  // get(index) function pointer
    fetch_function__ContactForceOptions__max_force,  // fetch(index, &value) function pointer
    assign_function__ContactForceOptions__max_force,  // assign(index, value) function pointer
    resize_function__ContactForceOptions__max_force  // resize(index) function pointer
  },
  {
    "debug_color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ContactForceOptions, debug_color),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactForceOptions__debug_color,  // size() function pointer
    get_const_function__ContactForceOptions__debug_color,  // get_const(index) function pointer
    get_function__ContactForceOptions__debug_color,  // get(index) function pointer
    fetch_function__ContactForceOptions__debug_color,  // fetch(index, &value) function pointer
    assign_function__ContactForceOptions__debug_color,  // assign(index, value) function pointer
    resize_function__ContactForceOptions__debug_color  // resize(index) function pointer
  },
  {
    "debug_scale",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ContactForceOptions, debug_scale),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ContactForceOptions_message_members = {
  "gs_ros_interfaces::msg",  // message namespace
  "ContactForceOptions",  // message name
  8,  // number of fields
  sizeof(gs_ros_interfaces::msg::ContactForceOptions),
  ContactForceOptions_message_member_array,  // message members
  ContactForceOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  ContactForceOptions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ContactForceOptions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ContactForceOptions_message_members,
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
get_message_type_support_handle<gs_ros_interfaces::msg::ContactForceOptions>()
{
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::ContactForceOptions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, msg, ContactForceOptions)() {
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::ContactForceOptions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
