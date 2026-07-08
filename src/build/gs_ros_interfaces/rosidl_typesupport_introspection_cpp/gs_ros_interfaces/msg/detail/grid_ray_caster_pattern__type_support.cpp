// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:msg/GridRayCasterPattern.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__struct.hpp"
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

void GridRayCasterPattern_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::msg::GridRayCasterPattern(_init);
}

void GridRayCasterPattern_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::msg::GridRayCasterPattern *>(message_memory);
  typed_message->~GridRayCasterPattern();
}

size_t size_function__GridRayCasterPattern__size(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GridRayCasterPattern__size(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__GridRayCasterPattern__size(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__GridRayCasterPattern__size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__GridRayCasterPattern__size(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__GridRayCasterPattern__size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__GridRayCasterPattern__size(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__GridRayCasterPattern__size(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GridRayCasterPattern__direction(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GridRayCasterPattern__direction(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__GridRayCasterPattern__direction(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__GridRayCasterPattern__direction(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__GridRayCasterPattern__direction(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__GridRayCasterPattern__direction(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__GridRayCasterPattern__direction(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__GridRayCasterPattern__direction(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GridRayCasterPattern_message_member_array[3] = {
  {
    "resolution",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::GridRayCasterPattern, resolution),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::GridRayCasterPattern, size),  // bytes offset in struct
    nullptr,  // default value
    size_function__GridRayCasterPattern__size,  // size() function pointer
    get_const_function__GridRayCasterPattern__size,  // get_const(index) function pointer
    get_function__GridRayCasterPattern__size,  // get(index) function pointer
    fetch_function__GridRayCasterPattern__size,  // fetch(index, &value) function pointer
    assign_function__GridRayCasterPattern__size,  // assign(index, value) function pointer
    resize_function__GridRayCasterPattern__size  // resize(index) function pointer
  },
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::GridRayCasterPattern, direction),  // bytes offset in struct
    nullptr,  // default value
    size_function__GridRayCasterPattern__direction,  // size() function pointer
    get_const_function__GridRayCasterPattern__direction,  // get_const(index) function pointer
    get_function__GridRayCasterPattern__direction,  // get(index) function pointer
    fetch_function__GridRayCasterPattern__direction,  // fetch(index, &value) function pointer
    assign_function__GridRayCasterPattern__direction,  // assign(index, value) function pointer
    resize_function__GridRayCasterPattern__direction  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GridRayCasterPattern_message_members = {
  "gs_ros_interfaces::msg",  // message namespace
  "GridRayCasterPattern",  // message name
  3,  // number of fields
  sizeof(gs_ros_interfaces::msg::GridRayCasterPattern),
  GridRayCasterPattern_message_member_array,  // message members
  GridRayCasterPattern_init_function,  // function to initialize message memory (memory has to be allocated)
  GridRayCasterPattern_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GridRayCasterPattern_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GridRayCasterPattern_message_members,
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
get_message_type_support_handle<gs_ros_interfaces::msg::GridRayCasterPattern>()
{
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::GridRayCasterPattern_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, msg, GridRayCasterPattern)() {
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::GridRayCasterPattern_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
