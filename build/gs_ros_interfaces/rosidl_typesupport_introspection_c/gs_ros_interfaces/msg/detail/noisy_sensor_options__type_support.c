// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:msg/NoisySensorOptions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__functions.h"
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__struct.h"


// Include directives for member types
// Member `resolution`
// Member `bias`
// Member `noise`
// Member `random_walk`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__msg__NoisySensorOptions__init(message_memory);
}

void gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_fini_function(void * message_memory)
{
  gs_ros_interfaces__msg__NoisySensorOptions__fini(message_memory);
}

size_t gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__size_function__NoisySensorOptions__resolution(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__resolution(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__resolution(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__fetch_function__NoisySensorOptions__resolution(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__resolution(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__assign_function__NoisySensorOptions__resolution(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__resolution(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__resize_function__NoisySensorOptions__resolution(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__size_function__NoisySensorOptions__bias(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__bias(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__bias(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__fetch_function__NoisySensorOptions__bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__bias(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__assign_function__NoisySensorOptions__bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__bias(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__resize_function__NoisySensorOptions__bias(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__size_function__NoisySensorOptions__noise(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__noise(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__noise(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__fetch_function__NoisySensorOptions__noise(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__noise(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__assign_function__NoisySensorOptions__noise(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__noise(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__resize_function__NoisySensorOptions__noise(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__size_function__NoisySensorOptions__random_walk(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__random_walk(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__random_walk(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__fetch_function__NoisySensorOptions__random_walk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__random_walk(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__assign_function__NoisySensorOptions__random_walk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__random_walk(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__resize_function__NoisySensorOptions__random_walk(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_message_member_array[6] = {
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__NoisySensorOptions, resolution),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__size_function__NoisySensorOptions__resolution,  // size() function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__resolution,  // get_const(index) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__resolution,  // get(index) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__fetch_function__NoisySensorOptions__resolution,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__assign_function__NoisySensorOptions__resolution,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__resize_function__NoisySensorOptions__resolution  // resize(index) function pointer
  },
  {
    "bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__NoisySensorOptions, bias),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__size_function__NoisySensorOptions__bias,  // size() function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__bias,  // get_const(index) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__bias,  // get(index) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__fetch_function__NoisySensorOptions__bias,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__assign_function__NoisySensorOptions__bias,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__resize_function__NoisySensorOptions__bias  // resize(index) function pointer
  },
  {
    "noise",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__NoisySensorOptions, noise),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__size_function__NoisySensorOptions__noise,  // size() function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__noise,  // get_const(index) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__noise,  // get(index) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__fetch_function__NoisySensorOptions__noise,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__assign_function__NoisySensorOptions__noise,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__resize_function__NoisySensorOptions__noise  // resize(index) function pointer
  },
  {
    "random_walk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__NoisySensorOptions, random_walk),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__size_function__NoisySensorOptions__random_walk,  // size() function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_const_function__NoisySensorOptions__random_walk,  // get_const(index) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__get_function__NoisySensorOptions__random_walk,  // get(index) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__fetch_function__NoisySensorOptions__random_walk,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__assign_function__NoisySensorOptions__random_walk,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__resize_function__NoisySensorOptions__random_walk  // resize(index) function pointer
  },
  {
    "jitter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__NoisySensorOptions, jitter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interpolate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__NoisySensorOptions, interpolate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_message_members = {
  "gs_ros_interfaces__msg",  // message namespace
  "NoisySensorOptions",  // message name
  6,  // number of fields
  sizeof(gs_ros_interfaces__msg__NoisySensorOptions),
  gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_message_member_array,  // message members
  gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_message_type_support_handle = {
  0,
  &gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, NoisySensorOptions)() {
  if (!gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__msg__NoisySensorOptions__rosidl_typesupport_introspection_c__NoisySensorOptions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
