// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:msg/SphericalRayCasterPattern.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__functions.h"
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__struct.h"


// Include directives for member types
// Member `fov`
// Member `n_points`
// Member `angular_resolution`
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__msg__SphericalRayCasterPattern__init(message_memory);
}

void gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_fini_function(void * message_memory)
{
  gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(message_memory);
}

size_t gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__size_function__SphericalRayCasterPattern__fov(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__fov(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__fov(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__SphericalRayCasterPattern__fov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__fov(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__SphericalRayCasterPattern__fov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__fov(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__SphericalRayCasterPattern__fov(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__size_function__SphericalRayCasterPattern__n_points(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__n_points(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__n_points(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__SphericalRayCasterPattern__n_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__n_points(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__SphericalRayCasterPattern__n_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__n_points(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__SphericalRayCasterPattern__n_points(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__size_function__SphericalRayCasterPattern__angular_resolution(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__angular_resolution(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__angular_resolution(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__SphericalRayCasterPattern__angular_resolution(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__angular_resolution(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__SphericalRayCasterPattern__angular_resolution(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__angular_resolution(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__SphericalRayCasterPattern__angular_resolution(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__size_function__SphericalRayCasterPattern__angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__SphericalRayCasterPattern__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__SphericalRayCasterPattern__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__SphericalRayCasterPattern__angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_message_member_array[4] = {
  {
    "fov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__SphericalRayCasterPattern, fov),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__size_function__SphericalRayCasterPattern__fov,  // size() function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__fov,  // get_const(index) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__fov,  // get(index) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__SphericalRayCasterPattern__fov,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__SphericalRayCasterPattern__fov,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__SphericalRayCasterPattern__fov  // resize(index) function pointer
  },
  {
    "n_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__SphericalRayCasterPattern, n_points),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__size_function__SphericalRayCasterPattern__n_points,  // size() function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__n_points,  // get_const(index) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__n_points,  // get(index) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__SphericalRayCasterPattern__n_points,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__SphericalRayCasterPattern__n_points,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__SphericalRayCasterPattern__n_points  // resize(index) function pointer
  },
  {
    "angular_resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__SphericalRayCasterPattern, angular_resolution),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__size_function__SphericalRayCasterPattern__angular_resolution,  // size() function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__angular_resolution,  // get_const(index) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__angular_resolution,  // get(index) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__SphericalRayCasterPattern__angular_resolution,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__SphericalRayCasterPattern__angular_resolution,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__SphericalRayCasterPattern__angular_resolution  // resize(index) function pointer
  },
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__SphericalRayCasterPattern, angles),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__size_function__SphericalRayCasterPattern__angles,  // size() function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__SphericalRayCasterPattern__angles,  // get_const(index) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__get_function__SphericalRayCasterPattern__angles,  // get(index) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__SphericalRayCasterPattern__angles,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__SphericalRayCasterPattern__angles,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__SphericalRayCasterPattern__angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_message_members = {
  "gs_ros_interfaces__msg",  // message namespace
  "SphericalRayCasterPattern",  // message name
  4,  // number of fields
  sizeof(gs_ros_interfaces__msg__SphericalRayCasterPattern),
  gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_message_member_array,  // message members
  gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_message_type_support_handle = {
  0,
  &gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, SphericalRayCasterPattern)() {
  if (!gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__msg__SphericalRayCasterPattern__rosidl_typesupport_introspection_c__SphericalRayCasterPattern_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
