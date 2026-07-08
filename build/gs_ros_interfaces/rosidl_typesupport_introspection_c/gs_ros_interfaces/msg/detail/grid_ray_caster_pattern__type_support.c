// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:msg/GridRayCasterPattern.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__functions.h"
#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__struct.h"


// Include directives for member types
// Member `size`
// Member `direction`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__msg__GridRayCasterPattern__init(message_memory);
}

void gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_fini_function(void * message_memory)
{
  gs_ros_interfaces__msg__GridRayCasterPattern__fini(message_memory);
}

size_t gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__size_function__GridRayCasterPattern__size(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__GridRayCasterPattern__size(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_function__GridRayCasterPattern__size(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__GridRayCasterPattern__size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__GridRayCasterPattern__size(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__GridRayCasterPattern__size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_function__GridRayCasterPattern__size(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__GridRayCasterPattern__size(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__size_function__GridRayCasterPattern__direction(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__GridRayCasterPattern__direction(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_function__GridRayCasterPattern__direction(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__GridRayCasterPattern__direction(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__GridRayCasterPattern__direction(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__GridRayCasterPattern__direction(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_function__GridRayCasterPattern__direction(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__GridRayCasterPattern__direction(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_message_member_array[3] = {
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__GridRayCasterPattern, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__GridRayCasterPattern, size),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__size_function__GridRayCasterPattern__size,  // size() function pointer
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__GridRayCasterPattern__size,  // get_const(index) function pointer
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_function__GridRayCasterPattern__size,  // get(index) function pointer
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__GridRayCasterPattern__size,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__GridRayCasterPattern__size,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__GridRayCasterPattern__size  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__GridRayCasterPattern, direction),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__size_function__GridRayCasterPattern__direction,  // size() function pointer
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__GridRayCasterPattern__direction,  // get_const(index) function pointer
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__get_function__GridRayCasterPattern__direction,  // get(index) function pointer
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__GridRayCasterPattern__direction,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__GridRayCasterPattern__direction,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__GridRayCasterPattern__direction  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_message_members = {
  "gs_ros_interfaces__msg",  // message namespace
  "GridRayCasterPattern",  // message name
  3,  // number of fields
  sizeof(gs_ros_interfaces__msg__GridRayCasterPattern),
  gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_message_member_array,  // message members
  gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_message_type_support_handle = {
  0,
  &gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, GridRayCasterPattern)() {
  if (!gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__msg__GridRayCasterPattern__rosidl_typesupport_introspection_c__GridRayCasterPattern_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
