// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:msg/RobotOptions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gs_ros_interfaces/msg/detail/robot_options__struct.hpp"
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

void RobotOptions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::msg::RobotOptions(_init);
}

void RobotOptions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::msg::RobotOptions *>(message_memory);
  typed_message->~RobotOptions();
}

size_t size_function__RobotOptions__joint_properties(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<gs_ros_interfaces::msg::JointProperty> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotOptions__joint_properties(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<gs_ros_interfaces::msg::JointProperty> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotOptions__joint_properties(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<gs_ros_interfaces::msg::JointProperty> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotOptions__joint_properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const gs_ros_interfaces::msg::JointProperty *>(
    get_const_function__RobotOptions__joint_properties(untyped_member, index));
  auto & value = *reinterpret_cast<gs_ros_interfaces::msg::JointProperty *>(untyped_value);
  value = item;
}

void assign_function__RobotOptions__joint_properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<gs_ros_interfaces::msg::JointProperty *>(
    get_function__RobotOptions__joint_properties(untyped_member, index));
  const auto & value = *reinterpret_cast<const gs_ros_interfaces::msg::JointProperty *>(untyped_value);
  item = value;
}

void resize_function__RobotOptions__joint_properties(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<gs_ros_interfaces::msg::JointProperty> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotOptions_message_member_array[7] = {
  {
    "joint_states_topic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::RobotOptions, joint_states_topic),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_states_topic_frequency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::RobotOptions, joint_states_topic_frequency),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_commands_topic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::RobotOptions, joint_commands_topic),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_commands_topic_frequency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::RobotOptions, joint_commands_topic_frequency),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joints_control_topic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::RobotOptions, joints_control_topic),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joints_control_topic_frequency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::RobotOptions, joints_control_topic_frequency),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_properties",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::JointProperty>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::msg::RobotOptions, joint_properties),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotOptions__joint_properties,  // size() function pointer
    get_const_function__RobotOptions__joint_properties,  // get_const(index) function pointer
    get_function__RobotOptions__joint_properties,  // get(index) function pointer
    fetch_function__RobotOptions__joint_properties,  // fetch(index, &value) function pointer
    assign_function__RobotOptions__joint_properties,  // assign(index, value) function pointer
    resize_function__RobotOptions__joint_properties  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotOptions_message_members = {
  "gs_ros_interfaces::msg",  // message namespace
  "RobotOptions",  // message name
  7,  // number of fields
  sizeof(gs_ros_interfaces::msg::RobotOptions),
  RobotOptions_message_member_array,  // message members
  RobotOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotOptions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotOptions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotOptions_message_members,
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
get_message_type_support_handle<gs_ros_interfaces::msg::RobotOptions>()
{
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotOptions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, msg, RobotOptions)() {
  return &::gs_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotOptions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
