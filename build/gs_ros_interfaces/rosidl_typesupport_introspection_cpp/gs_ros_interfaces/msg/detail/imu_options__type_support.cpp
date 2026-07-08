// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:msg/ImuOptions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gs_ros_interfaces/msg/detail/imu_options__struct.hpp"
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

void ImuOptions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::msg::ImuOptions(_init);
}

void ImuOptions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::msg::ImuOptions *>(message_memory);
  typed_message->~ImuOptions();
}

size_t size_function__ImuOptions__acc_cross_axis_coupling(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImuOptions__acc_cross_axis_coupling(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuOptions__acc_cross_axis_coupling(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuOptions__acc_cross_axis_coupling(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImuOptions__acc_cross_axis_coupling(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImuOptions__acc_cross_axis_coupling(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImuOptions__acc_cross_axis_coupling(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImuOptions__acc_cross_axis_coupling(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImuOptions__acc_bias(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImuOptions__acc_bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuOptions__acc_bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuOptions__acc_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImuOptions__acc_bias(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImuOptions__acc_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImuOptions__acc_bias(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImuOptions__acc_bias(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImuOptions__acc_noise(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImuOptions__acc_noise(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuOptions__acc_noise(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuOptions__acc_noise(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImuOptions__acc_noise(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImuOptions__acc_noise(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImuOptions__acc_noise(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImuOptions__acc_noise(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImuOptions__acc_random_walk(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImuOptions__acc_random_walk(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuOptions__acc_random_walk(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuOptions__acc_random_walk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImuOptions__acc_random_walk(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImuOptions__acc_random_walk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImuOptions__acc_random_walk(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImuOptions__acc_random_walk(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImuOptions__gyro_cross_axis_coupling(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImuOptions__gyro_cross_axis_coupling(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuOptions__gyro_cross_axis_coupling(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuOptions__gyro_cross_axis_coupling(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImuOptions__gyro_cross_axis_coupling(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImuOptions__gyro_cross_axis_coupling(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImuOptions__gyro_cross_axis_coupling(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImuOptions__gyro_cross_axis_coupling(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImuOptions__gyro_bias(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImuOptions__gyro_bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuOptions__gyro_bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuOptions__gyro_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImuOptions__gyro_bias(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImuOptions__gyro_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImuOptions__gyro_bias(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImuOptions__gyro_bias(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImuOptions__gyro_noise(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImuOptions__gyro_noise(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuOptions__gyro_noise(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuOptions__gyro_noise(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImuOptions__gyro_noise(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImuOptions__gyro_noise(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImuOptions__gyro_noise(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImuOptions__gyro_noise(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImuOptions__gyro_random_walk(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImuOptions__gyro_random_walk(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuOptions__gyro_random_walk(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuOptions__gyro_random_walk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImuOptions__gyro_random_walk(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImuOptions__gyro_random_walk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImuOptions__gyro_random_walk(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImuOptions__gyro_random_walk(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImuOptions__debug_acc_color(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImuOptions__debug_acc_color(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuOptions__debug_acc_color(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuOptions__debug_acc_color(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImuOptions__debug_acc_color(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImuOptions__debug_acc_color(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImuOptions__debug_acc_color(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImuOptions__debug_acc_color(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImuOptions__debug_gyro_color(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImuOptions__debug_gyro_color(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuOptions__debug_gyro_color(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuOptions__debug_gyro_color(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImuOptions__debug_gyro_color(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImuOptions__debug_gyro_color(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImuOptions__debug_gyro_color(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImuOptions__debug_gyro_color(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ImuOptions_message_member_array[18] = {
  {
    "options",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::GeneralSensorOptions>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, options),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces::msg::ImuOptions, ros_options),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces::msg::ImuOptions, rigid_options),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces::msg::ImuOptions, noisy_options),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acc_resolution",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, acc_resolution),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acc_cross_axis_coupling",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, acc_cross_axis_coupling),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuOptions__acc_cross_axis_coupling,  // size() function pointer
    get_const_function__ImuOptions__acc_cross_axis_coupling,  // get_const(index) function pointer
    get_function__ImuOptions__acc_cross_axis_coupling,  // get(index) function pointer
    fetch_function__ImuOptions__acc_cross_axis_coupling,  // fetch(index, &value) function pointer
    assign_function__ImuOptions__acc_cross_axis_coupling,  // assign(index, value) function pointer
    resize_function__ImuOptions__acc_cross_axis_coupling  // resize(index) function pointer
  },
  {
    "acc_bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, acc_bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuOptions__acc_bias,  // size() function pointer
    get_const_function__ImuOptions__acc_bias,  // get_const(index) function pointer
    get_function__ImuOptions__acc_bias,  // get(index) function pointer
    fetch_function__ImuOptions__acc_bias,  // fetch(index, &value) function pointer
    assign_function__ImuOptions__acc_bias,  // assign(index, value) function pointer
    resize_function__ImuOptions__acc_bias  // resize(index) function pointer
  },
  {
    "acc_noise",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, acc_noise),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuOptions__acc_noise,  // size() function pointer
    get_const_function__ImuOptions__acc_noise,  // get_const(index) function pointer
    get_function__ImuOptions__acc_noise,  // get(index) function pointer
    fetch_function__ImuOptions__acc_noise,  // fetch(index, &value) function pointer
    assign_function__ImuOptions__acc_noise,  // assign(index, value) function pointer
    resize_function__ImuOptions__acc_noise  // resize(index) function pointer
  },
  {
    "acc_random_walk",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, acc_random_walk),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuOptions__acc_random_walk,  // size() function pointer
    get_const_function__ImuOptions__acc_random_walk,  // get_const(index) function pointer
    get_function__ImuOptions__acc_random_walk,  // get(index) function pointer
    fetch_function__ImuOptions__acc_random_walk,  // fetch(index, &value) function pointer
    assign_function__ImuOptions__acc_random_walk,  // assign(index, value) function pointer
    resize_function__ImuOptions__acc_random_walk  // resize(index) function pointer
  },
  {
    "gyro_resolution",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, gyro_resolution),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_cross_axis_coupling",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, gyro_cross_axis_coupling),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuOptions__gyro_cross_axis_coupling,  // size() function pointer
    get_const_function__ImuOptions__gyro_cross_axis_coupling,  // get_const(index) function pointer
    get_function__ImuOptions__gyro_cross_axis_coupling,  // get(index) function pointer
    fetch_function__ImuOptions__gyro_cross_axis_coupling,  // fetch(index, &value) function pointer
    assign_function__ImuOptions__gyro_cross_axis_coupling,  // assign(index, value) function pointer
    resize_function__ImuOptions__gyro_cross_axis_coupling  // resize(index) function pointer
  },
  {
    "gyro_bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, gyro_bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuOptions__gyro_bias,  // size() function pointer
    get_const_function__ImuOptions__gyro_bias,  // get_const(index) function pointer
    get_function__ImuOptions__gyro_bias,  // get(index) function pointer
    fetch_function__ImuOptions__gyro_bias,  // fetch(index, &value) function pointer
    assign_function__ImuOptions__gyro_bias,  // assign(index, value) function pointer
    resize_function__ImuOptions__gyro_bias  // resize(index) function pointer
  },
  {
    "gyro_noise",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, gyro_noise),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuOptions__gyro_noise,  // size() function pointer
    get_const_function__ImuOptions__gyro_noise,  // get_const(index) function pointer
    get_function__ImuOptions__gyro_noise,  // get(index) function pointer
    fetch_function__ImuOptions__gyro_noise,  // fetch(index, &value) function pointer
    assign_function__ImuOptions__gyro_noise,  // assign(index, value) function pointer
    resize_function__ImuOptions__gyro_noise  // resize(index) function pointer
  },
  {
    "gyro_random_walk",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, gyro_random_walk),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuOptions__gyro_random_walk,  // size() function pointer
    get_const_function__ImuOptions__gyro_random_walk,  // get_const(index) function pointer
    get_function__ImuOptions__gyro_random_walk,  // get(index) function pointer
    fetch_function__ImuOptions__gyro_random_walk,  // fetch(index, &value) function pointer
    assign_function__ImuOptions__gyro_random_walk,  // assign(index, value) function pointer
    resize_function__ImuOptions__gyro_random_walk  // resize(index) function pointer
  },
  {
    "debug_acc_color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, debug_acc_color),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuOptions__debug_acc_color,  // size() function pointer
    get_const_function__ImuOptions__debug_acc_color,  // get_const(index) function pointer
    get_function__ImuOptions__debug_acc_color,  // get(index) function pointer
    fetch_function__ImuOptions__debug_acc_color,  // fetch(index, &value) function pointer
    assign_function__ImuOptions__debug_acc_color,  // assign(index, value) function pointer
    resize_function__ImuOptions__debug_acc_color  // resize(index) function pointer
  },
  {
    "debug_acc_scale",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, debug_acc_scale),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "debug_gyro_color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, debug_gyro_color),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuOptions__debug_gyro_color,  // size() function pointer
    get_const_function__ImuOptions__debug_gyro_color,  // get_const(index) function pointer
    get_function__ImuOptions__debug_gyro_color,  // get(index) function pointer
    fetch_function__ImuOptions__debug_gyro_color,  // fetch(index, &value) function pointer
    assign_function__ImuOptions__debug_gyro_color,  // assign(index, value) function pointer
    resize_function__ImuOptions__debug_gyro_color  // resize(index) function pointer
  },
  {
    "debug_gyro_scale",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::ImuOptions, debug_gyro_scale),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ImuOptions_message_members = {
  "gs_ros_interfaces::msg",  // message namespace
  "ImuOptions",  // message name
  18,  // number of fields
  sizeof(gs_ros_interfaces::msg::ImuOptions),
  ImuOptions_message_member_array,  // message members
  ImuOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  ImuOptions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ImuOptions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ImuOptions_message_members,
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
get_message_type_support_handle<gs_ros_interfaces::msg::ImuOptions>()
{
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::ImuOptions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, msg, ImuOptions)() {
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::ImuOptions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
