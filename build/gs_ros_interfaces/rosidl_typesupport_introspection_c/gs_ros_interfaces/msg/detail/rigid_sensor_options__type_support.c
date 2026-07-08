// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:msg/RigidSensorOptions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__functions.h"
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__struct.h"


// Include directives for member types
// Member `link`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__msg__RigidSensorOptions__init(message_memory);
}

void gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_fini_function(void * message_memory)
{
  gs_ros_interfaces__msg__RigidSensorOptions__fini(message_memory);
}

size_t gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__size_function__RigidSensorOptions__pos_offset(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_const_function__RigidSensorOptions__pos_offset(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_function__RigidSensorOptions__pos_offset(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__fetch_function__RigidSensorOptions__pos_offset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_const_function__RigidSensorOptions__pos_offset(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__assign_function__RigidSensorOptions__pos_offset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_function__RigidSensorOptions__pos_offset(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__size_function__RigidSensorOptions__euler_offset(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_const_function__RigidSensorOptions__euler_offset(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_function__RigidSensorOptions__euler_offset(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__fetch_function__RigidSensorOptions__euler_offset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_const_function__RigidSensorOptions__euler_offset(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__assign_function__RigidSensorOptions__euler_offset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_function__RigidSensorOptions__euler_offset(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_message_member_array[3] = {
  {
    "link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__RigidSensorOptions, link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__RigidSensorOptions, pos_offset),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__size_function__RigidSensorOptions__pos_offset,  // size() function pointer
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_const_function__RigidSensorOptions__pos_offset,  // get_const(index) function pointer
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_function__RigidSensorOptions__pos_offset,  // get(index) function pointer
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__fetch_function__RigidSensorOptions__pos_offset,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__assign_function__RigidSensorOptions__pos_offset,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "euler_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__RigidSensorOptions, euler_offset),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__size_function__RigidSensorOptions__euler_offset,  // size() function pointer
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_const_function__RigidSensorOptions__euler_offset,  // get_const(index) function pointer
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__get_function__RigidSensorOptions__euler_offset,  // get(index) function pointer
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__fetch_function__RigidSensorOptions__euler_offset,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__assign_function__RigidSensorOptions__euler_offset,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_message_members = {
  "gs_ros_interfaces__msg",  // message namespace
  "RigidSensorOptions",  // message name
  3,  // number of fields
  sizeof(gs_ros_interfaces__msg__RigidSensorOptions),
  gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_message_member_array,  // message members
  gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_message_type_support_handle = {
  0,
  &gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, RigidSensorOptions)() {
  if (!gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__msg__RigidSensorOptions__rosidl_typesupport_introspection_c__RigidSensorOptions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
