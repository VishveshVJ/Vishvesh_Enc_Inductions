// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:msg/DepthCameraRayCasterPattern.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__functions.h"
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__struct.h"


// Include directives for member types
// Member `res`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__msg__DepthCameraRayCasterPattern__init(message_memory);
}

void gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_fini_function(void * message_memory)
{
  gs_ros_interfaces__msg__DepthCameraRayCasterPattern__fini(message_memory);
}

size_t gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__size_function__DepthCameraRayCasterPattern__res(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__DepthCameraRayCasterPattern__res(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__get_function__DepthCameraRayCasterPattern__res(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__DepthCameraRayCasterPattern__res(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__DepthCameraRayCasterPattern__res(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__DepthCameraRayCasterPattern__res(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__get_function__DepthCameraRayCasterPattern__res(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__DepthCameraRayCasterPattern__res(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_message_member_array[7] = {
  {
    "res",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__DepthCameraRayCasterPattern, res),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__size_function__DepthCameraRayCasterPattern__res,  // size() function pointer
    gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__get_const_function__DepthCameraRayCasterPattern__res,  // get_const(index) function pointer
    gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__get_function__DepthCameraRayCasterPattern__res,  // get(index) function pointer
    gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__fetch_function__DepthCameraRayCasterPattern__res,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__assign_function__DepthCameraRayCasterPattern__res,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__resize_function__DepthCameraRayCasterPattern__res  // resize(index) function pointer
  },
  {
    "fx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__DepthCameraRayCasterPattern, fx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__DepthCameraRayCasterPattern, fy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__DepthCameraRayCasterPattern, cx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__DepthCameraRayCasterPattern, cy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fov_horizontal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__DepthCameraRayCasterPattern, fov_horizontal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fov_vertical",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__DepthCameraRayCasterPattern, fov_vertical),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_message_members = {
  "gs_ros_interfaces__msg",  // message namespace
  "DepthCameraRayCasterPattern",  // message name
  7,  // number of fields
  sizeof(gs_ros_interfaces__msg__DepthCameraRayCasterPattern),
  gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_message_member_array,  // message members
  gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_message_type_support_handle = {
  0,
  &gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, DepthCameraRayCasterPattern)() {
  if (!gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__msg__DepthCameraRayCasterPattern__rosidl_typesupport_introspection_c__DepthCameraRayCasterPattern_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
