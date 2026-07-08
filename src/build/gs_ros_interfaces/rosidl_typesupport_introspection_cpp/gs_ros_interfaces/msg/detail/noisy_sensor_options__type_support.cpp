// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:msg/NoisySensorOptions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__struct.hpp"
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

void NoisySensorOptions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::msg::NoisySensorOptions(_init);
}

void NoisySensorOptions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::msg::NoisySensorOptions *>(message_memory);
  typed_message->~NoisySensorOptions();
}

size_t size_function__NoisySensorOptions__resolution(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NoisySensorOptions__resolution(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__NoisySensorOptions__resolution(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__NoisySensorOptions__resolution(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NoisySensorOptions__resolution(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NoisySensorOptions__resolution(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NoisySensorOptions__resolution(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__NoisySensorOptions__resolution(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NoisySensorOptions__bias(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NoisySensorOptions__bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__NoisySensorOptions__bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__NoisySensorOptions__bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NoisySensorOptions__bias(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NoisySensorOptions__bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NoisySensorOptions__bias(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__NoisySensorOptions__bias(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NoisySensorOptions__noise(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NoisySensorOptions__noise(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__NoisySensorOptions__noise(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__NoisySensorOptions__noise(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NoisySensorOptions__noise(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NoisySensorOptions__noise(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NoisySensorOptions__noise(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__NoisySensorOptions__noise(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NoisySensorOptions__random_walk(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NoisySensorOptions__random_walk(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__NoisySensorOptions__random_walk(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__NoisySensorOptions__random_walk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NoisySensorOptions__random_walk(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NoisySensorOptions__random_walk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NoisySensorOptions__random_walk(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__NoisySensorOptions__random_walk(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NoisySensorOptions_message_member_array[6] = {
  {
    "resolution",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::NoisySensorOptions, resolution),  // bytes offset in struct
    nullptr,  // default value
    size_function__NoisySensorOptions__resolution,  // size() function pointer
    get_const_function__NoisySensorOptions__resolution,  // get_const(index) function pointer
    get_function__NoisySensorOptions__resolution,  // get(index) function pointer
    fetch_function__NoisySensorOptions__resolution,  // fetch(index, &value) function pointer
    assign_function__NoisySensorOptions__resolution,  // assign(index, value) function pointer
    resize_function__NoisySensorOptions__resolution  // resize(index) function pointer
  },
  {
    "bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::NoisySensorOptions, bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__NoisySensorOptions__bias,  // size() function pointer
    get_const_function__NoisySensorOptions__bias,  // get_const(index) function pointer
    get_function__NoisySensorOptions__bias,  // get(index) function pointer
    fetch_function__NoisySensorOptions__bias,  // fetch(index, &value) function pointer
    assign_function__NoisySensorOptions__bias,  // assign(index, value) function pointer
    resize_function__NoisySensorOptions__bias  // resize(index) function pointer
  },
  {
    "noise",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::NoisySensorOptions, noise),  // bytes offset in struct
    nullptr,  // default value
    size_function__NoisySensorOptions__noise,  // size() function pointer
    get_const_function__NoisySensorOptions__noise,  // get_const(index) function pointer
    get_function__NoisySensorOptions__noise,  // get(index) function pointer
    fetch_function__NoisySensorOptions__noise,  // fetch(index, &value) function pointer
    assign_function__NoisySensorOptions__noise,  // assign(index, value) function pointer
    resize_function__NoisySensorOptions__noise  // resize(index) function pointer
  },
  {
    "random_walk",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::NoisySensorOptions, random_walk),  // bytes offset in struct
    nullptr,  // default value
    size_function__NoisySensorOptions__random_walk,  // size() function pointer
    get_const_function__NoisySensorOptions__random_walk,  // get_const(index) function pointer
    get_function__NoisySensorOptions__random_walk,  // get(index) function pointer
    fetch_function__NoisySensorOptions__random_walk,  // fetch(index, &value) function pointer
    assign_function__NoisySensorOptions__random_walk,  // assign(index, value) function pointer
    resize_function__NoisySensorOptions__random_walk  // resize(index) function pointer
  },
  {
    "jitter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::NoisySensorOptions, jitter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "interpolate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::NoisySensorOptions, interpolate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NoisySensorOptions_message_members = {
  "gs_ros_interfaces::msg",  // message namespace
  "NoisySensorOptions",  // message name
  6,  // number of fields
  sizeof(gs_ros_interfaces::msg::NoisySensorOptions),
  NoisySensorOptions_message_member_array,  // message members
  NoisySensorOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  NoisySensorOptions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NoisySensorOptions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NoisySensorOptions_message_members,
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
get_message_type_support_handle<gs_ros_interfaces::msg::NoisySensorOptions>()
{
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::NoisySensorOptions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, msg, NoisySensorOptions)() {
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::NoisySensorOptions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
