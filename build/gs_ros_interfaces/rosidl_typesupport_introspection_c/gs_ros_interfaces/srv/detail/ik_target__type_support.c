// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:srv/IKTarget.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/srv/detail/ik_target__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/srv/detail/ik_target__functions.h"
#include "gs_ros_interfaces/srv/detail/ik_target__struct.h"


// Include directives for member types
// Member `robot_name`
// Member `target_link_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `init_robot_pos`
// Member `pos_mask`
// Member `rot_mask`
// Member `dofs_idx_local`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__srv__IKTarget_Request__init(message_memory);
}

void gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_fini_function(void * message_memory)
{
  gs_ros_interfaces__srv__IKTarget_Request__fini(message_memory);
}

size_t gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__size_function__IKTarget_Request__init_robot_pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__init_robot_pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__init_robot_pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__fetch_function__IKTarget_Request__init_robot_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__init_robot_pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__assign_function__IKTarget_Request__init_robot_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__init_robot_pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__resize_function__IKTarget_Request__init_robot_pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__size_function__IKTarget_Request__pos_mask(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__pos_mask(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__pos_mask(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__fetch_function__IKTarget_Request__pos_mask(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__pos_mask(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__assign_function__IKTarget_Request__pos_mask(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__pos_mask(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__resize_function__IKTarget_Request__pos_mask(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__size_function__IKTarget_Request__rot_mask(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__rot_mask(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__rot_mask(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__fetch_function__IKTarget_Request__rot_mask(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__rot_mask(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__assign_function__IKTarget_Request__rot_mask(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__rot_mask(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__resize_function__IKTarget_Request__rot_mask(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__size_function__IKTarget_Request__dofs_idx_local(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__dofs_idx_local(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__dofs_idx_local(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__fetch_function__IKTarget_Request__dofs_idx_local(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__dofs_idx_local(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__assign_function__IKTarget_Request__dofs_idx_local(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__dofs_idx_local(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__resize_function__IKTarget_Request__dofs_idx_local(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_message_member_array[17] = {
  {
    "robot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_link_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, target_link_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "init_robot_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, init_robot_pos),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__size_function__IKTarget_Request__init_robot_pos,  // size() function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__init_robot_pos,  // get_const(index) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__init_robot_pos,  // get(index) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__fetch_function__IKTarget_Request__init_robot_pos,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__assign_function__IKTarget_Request__init_robot_pos,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__resize_function__IKTarget_Request__init_robot_pos  // resize(index) function pointer
  },
  {
    "request_joint_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, request_joint_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_samples",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, max_samples),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_solver_iterartions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, max_solver_iterartions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, damping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_tol",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, pos_tol),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rot_tol",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, rot_tol),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, pos_mask),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__size_function__IKTarget_Request__pos_mask,  // size() function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__pos_mask,  // get_const(index) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__pos_mask,  // get(index) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__fetch_function__IKTarget_Request__pos_mask,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__assign_function__IKTarget_Request__pos_mask,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__resize_function__IKTarget_Request__pos_mask  // resize(index) function pointer
  },
  {
    "rot_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, rot_mask),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__size_function__IKTarget_Request__rot_mask,  // size() function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__rot_mask,  // get_const(index) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__rot_mask,  // get(index) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__fetch_function__IKTarget_Request__rot_mask,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__assign_function__IKTarget_Request__rot_mask,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__resize_function__IKTarget_Request__rot_mask  // resize(index) function pointer
  },
  {
    "max_step_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, max_step_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dofs_idx_local",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, dofs_idx_local),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__size_function__IKTarget_Request__dofs_idx_local,  // size() function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Request__dofs_idx_local,  // get_const(index) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__get_function__IKTarget_Request__dofs_idx_local,  // get(index) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__fetch_function__IKTarget_Request__dofs_idx_local,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__assign_function__IKTarget_Request__dofs_idx_local,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__resize_function__IKTarget_Request__dofs_idx_local  // resize(index) function pointer
  },
  {
    "visualize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, visualize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "execute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Request, execute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_message_members = {
  "gs_ros_interfaces__srv",  // message namespace
  "IKTarget_Request",  // message name
  17,  // number of fields
  sizeof(gs_ros_interfaces__srv__IKTarget_Request),
  gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_message_member_array,  // message members
  gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_message_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, IKTarget_Request)() {
  gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__srv__IKTarget_Request__rosidl_typesupport_introspection_c__IKTarget_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gs_ros_interfaces/srv/detail/ik_target__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/ik_target__functions.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/ik_target__struct.h"


// Include directives for member types
// Member `joint_angles`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__srv__IKTarget_Response__init(message_memory);
}

void gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_fini_function(void * message_memory)
{
  gs_ros_interfaces__srv__IKTarget_Response__fini(message_memory);
}

size_t gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__size_function__IKTarget_Response__joint_angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Response__joint_angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__get_function__IKTarget_Response__joint_angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__fetch_function__IKTarget_Response__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Response__joint_angles(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__assign_function__IKTarget_Response__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__get_function__IKTarget_Response__joint_angles(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__resize_function__IKTarget_Response__joint_angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_message_member_array[6] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solution_found",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Response, solution_found),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Response, joint_angles),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__size_function__IKTarget_Response__joint_angles,  // size() function pointer
    gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__get_const_function__IKTarget_Response__joint_angles,  // get_const(index) function pointer
    gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__get_function__IKTarget_Response__joint_angles,  // get(index) function pointer
    gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__fetch_function__IKTarget_Response__joint_angles,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__assign_function__IKTarget_Response__joint_angles,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__resize_function__IKTarget_Response__joint_angles  // resize(index) function pointer
  },
  {
    "target_pos_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Response, target_pos_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_quat_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Response, target_quat_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__IKTarget_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_message_members = {
  "gs_ros_interfaces__srv",  // message namespace
  "IKTarget_Response",  // message name
  6,  // number of fields
  sizeof(gs_ros_interfaces__srv__IKTarget_Response),
  gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_message_member_array,  // message members
  gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_message_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, IKTarget_Response)() {
  if (!gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__srv__IKTarget_Response__rosidl_typesupport_introspection_c__IKTarget_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/ik_target__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gs_ros_interfaces__srv__detail__ik_target__rosidl_typesupport_introspection_c__IKTarget_service_members = {
  "gs_ros_interfaces__srv",  // service namespace
  "IKTarget",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gs_ros_interfaces__srv__detail__ik_target__rosidl_typesupport_introspection_c__IKTarget_Request_message_type_support_handle,
  NULL  // response message
  // gs_ros_interfaces__srv__detail__ik_target__rosidl_typesupport_introspection_c__IKTarget_Response_message_type_support_handle
};

static rosidl_service_type_support_t gs_ros_interfaces__srv__detail__ik_target__rosidl_typesupport_introspection_c__IKTarget_service_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__detail__ik_target__rosidl_typesupport_introspection_c__IKTarget_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, IKTarget_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, IKTarget_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, IKTarget)() {
  if (!gs_ros_interfaces__srv__detail__ik_target__rosidl_typesupport_introspection_c__IKTarget_service_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__detail__ik_target__rosidl_typesupport_introspection_c__IKTarget_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gs_ros_interfaces__srv__detail__ik_target__rosidl_typesupport_introspection_c__IKTarget_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, IKTarget_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, IKTarget_Response)()->data;
  }

  return &gs_ros_interfaces__srv__detail__ik_target__rosidl_typesupport_introspection_c__IKTarget_service_type_support_handle;
}
