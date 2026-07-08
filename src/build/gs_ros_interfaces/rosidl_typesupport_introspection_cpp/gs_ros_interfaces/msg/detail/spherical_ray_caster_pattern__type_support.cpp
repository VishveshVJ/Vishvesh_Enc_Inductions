// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:msg/SphericalRayCasterPattern.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__struct.hpp"
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

void SphericalRayCasterPattern_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::msg::SphericalRayCasterPattern(_init);
}

void SphericalRayCasterPattern_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::msg::SphericalRayCasterPattern *>(message_memory);
  typed_message->~SphericalRayCasterPattern();
}

size_t size_function__SphericalRayCasterPattern__fov(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SphericalRayCasterPattern__fov(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SphericalRayCasterPattern__fov(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SphericalRayCasterPattern__fov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SphericalRayCasterPattern__fov(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SphericalRayCasterPattern__fov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SphericalRayCasterPattern__fov(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SphericalRayCasterPattern__fov(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SphericalRayCasterPattern__n_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SphericalRayCasterPattern__n_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SphericalRayCasterPattern__n_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SphericalRayCasterPattern__n_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__SphericalRayCasterPattern__n_points(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__SphericalRayCasterPattern__n_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__SphericalRayCasterPattern__n_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__SphericalRayCasterPattern__n_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SphericalRayCasterPattern__angular_resolution(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SphericalRayCasterPattern__angular_resolution(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SphericalRayCasterPattern__angular_resolution(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SphericalRayCasterPattern__angular_resolution(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SphericalRayCasterPattern__angular_resolution(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SphericalRayCasterPattern__angular_resolution(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SphericalRayCasterPattern__angular_resolution(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SphericalRayCasterPattern__angular_resolution(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SphericalRayCasterPattern__angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SphericalRayCasterPattern__angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SphericalRayCasterPattern__angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SphericalRayCasterPattern__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SphericalRayCasterPattern__angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SphericalRayCasterPattern__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SphericalRayCasterPattern__angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SphericalRayCasterPattern__angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SphericalRayCasterPattern_message_member_array[4] = {
  {
    "fov",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::SphericalRayCasterPattern, fov),  // bytes offset in struct
    nullptr,  // default value
    size_function__SphericalRayCasterPattern__fov,  // size() function pointer
    get_const_function__SphericalRayCasterPattern__fov,  // get_const(index) function pointer
    get_function__SphericalRayCasterPattern__fov,  // get(index) function pointer
    fetch_function__SphericalRayCasterPattern__fov,  // fetch(index, &value) function pointer
    assign_function__SphericalRayCasterPattern__fov,  // assign(index, value) function pointer
    resize_function__SphericalRayCasterPattern__fov  // resize(index) function pointer
  },
  {
    "n_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::SphericalRayCasterPattern, n_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__SphericalRayCasterPattern__n_points,  // size() function pointer
    get_const_function__SphericalRayCasterPattern__n_points,  // get_const(index) function pointer
    get_function__SphericalRayCasterPattern__n_points,  // get(index) function pointer
    fetch_function__SphericalRayCasterPattern__n_points,  // fetch(index, &value) function pointer
    assign_function__SphericalRayCasterPattern__n_points,  // assign(index, value) function pointer
    resize_function__SphericalRayCasterPattern__n_points  // resize(index) function pointer
  },
  {
    "angular_resolution",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::SphericalRayCasterPattern, angular_resolution),  // bytes offset in struct
    nullptr,  // default value
    size_function__SphericalRayCasterPattern__angular_resolution,  // size() function pointer
    get_const_function__SphericalRayCasterPattern__angular_resolution,  // get_const(index) function pointer
    get_function__SphericalRayCasterPattern__angular_resolution,  // get(index) function pointer
    fetch_function__SphericalRayCasterPattern__angular_resolution,  // fetch(index, &value) function pointer
    assign_function__SphericalRayCasterPattern__angular_resolution,  // assign(index, value) function pointer
    resize_function__SphericalRayCasterPattern__angular_resolution  // resize(index) function pointer
  },
  {
    "angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::SphericalRayCasterPattern, angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__SphericalRayCasterPattern__angles,  // size() function pointer
    get_const_function__SphericalRayCasterPattern__angles,  // get_const(index) function pointer
    get_function__SphericalRayCasterPattern__angles,  // get(index) function pointer
    fetch_function__SphericalRayCasterPattern__angles,  // fetch(index, &value) function pointer
    assign_function__SphericalRayCasterPattern__angles,  // assign(index, value) function pointer
    resize_function__SphericalRayCasterPattern__angles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SphericalRayCasterPattern_message_members = {
  "gs_ros_interfaces::msg",  // message namespace
  "SphericalRayCasterPattern",  // message name
  4,  // number of fields
  sizeof(gs_ros_interfaces::msg::SphericalRayCasterPattern),
  SphericalRayCasterPattern_message_member_array,  // message members
  SphericalRayCasterPattern_init_function,  // function to initialize message memory (memory has to be allocated)
  SphericalRayCasterPattern_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SphericalRayCasterPattern_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SphericalRayCasterPattern_message_members,
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
get_message_type_support_handle<gs_ros_interfaces::msg::SphericalRayCasterPattern>()
{
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::SphericalRayCasterPattern_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, msg, SphericalRayCasterPattern)() {
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::SphericalRayCasterPattern_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
