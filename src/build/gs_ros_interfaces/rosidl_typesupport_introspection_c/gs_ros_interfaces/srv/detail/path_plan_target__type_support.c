// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:srv/PathPlanTarget.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/srv/detail/path_plan_target__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/srv/detail/path_plan_target__functions.h"
#include "gs_ros_interfaces/srv/detail/path_plan_target__struct.h"


// Include directives for member types
// Member `robot_name`
// Member `attached_intity`
// Member `target_link_name`
// Member `planner`
// Member `ee_link_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `goal_state`
// Member `start_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `target_pos`
#include "geometry_msgs/msg/point.h"
// Member `target_pos`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__srv__PathPlanTarget_Request__init(message_memory);
}

void gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_fini_function(void * message_memory)
{
  gs_ros_interfaces__srv__PathPlanTarget_Request__fini(message_memory);
}

size_t gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__size_function__PathPlanTarget_Request__goal_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_const_function__PathPlanTarget_Request__goal_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_function__PathPlanTarget_Request__goal_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__fetch_function__PathPlanTarget_Request__goal_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_const_function__PathPlanTarget_Request__goal_state(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__assign_function__PathPlanTarget_Request__goal_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_function__PathPlanTarget_Request__goal_state(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__resize_function__PathPlanTarget_Request__goal_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__size_function__PathPlanTarget_Request__start_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_const_function__PathPlanTarget_Request__start_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_function__PathPlanTarget_Request__start_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__fetch_function__PathPlanTarget_Request__start_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_const_function__PathPlanTarget_Request__start_state(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__assign_function__PathPlanTarget_Request__start_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_function__PathPlanTarget_Request__start_state(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__resize_function__PathPlanTarget_Request__start_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_message_member_array[18] = {
  {
    "robot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attached_intity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, attached_intity),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, target_link_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, goal_state),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__size_function__PathPlanTarget_Request__goal_state,  // size() function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_const_function__PathPlanTarget_Request__goal_state,  // get_const(index) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_function__PathPlanTarget_Request__goal_state,  // get(index) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__fetch_function__PathPlanTarget_Request__goal_state,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__assign_function__PathPlanTarget_Request__goal_state,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__resize_function__PathPlanTarget_Request__goal_state  // resize(index) function pointer
  },
  {
    "start_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, start_state),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__size_function__PathPlanTarget_Request__start_state,  // size() function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_const_function__PathPlanTarget_Request__start_state,  // get_const(index) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__get_function__PathPlanTarget_Request__start_state,  // get(index) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__fetch_function__PathPlanTarget_Request__start_state,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__assign_function__PathPlanTarget_Request__start_state,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__resize_function__PathPlanTarget_Request__start_state  // resize(index) function pointer
  },
  {
    "max_nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, max_nodes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_retries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, max_retries),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "smooth_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, smooth_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, num_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ignore_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, ignore_collision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, planner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ee_link_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, ee_link_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "visualize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, visualize),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, execute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, target_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Request, tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_message_members = {
  "gs_ros_interfaces__srv",  // message namespace
  "PathPlanTarget_Request",  // message name
  18,  // number of fields
  sizeof(gs_ros_interfaces__srv__PathPlanTarget_Request),
  gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_message_member_array,  // message members
  gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_message_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, PathPlanTarget_Request)() {
  gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__srv__PathPlanTarget_Request__rosidl_typesupport_introspection_c__PathPlanTarget_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gs_ros_interfaces/srv/detail/path_plan_target__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/path_plan_target__functions.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/path_plan_target__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `path`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__srv__PathPlanTarget_Response__init(message_memory);
}

void gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_fini_function(void * message_memory)
{
  gs_ros_interfaces__srv__PathPlanTarget_Response__fini(message_memory);
}

size_t gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__size_function__PathPlanTarget_Response__path(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__get_const_function__PathPlanTarget_Response__path(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__get_function__PathPlanTarget_Response__path(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__fetch_function__PathPlanTarget_Response__path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__get_const_function__PathPlanTarget_Response__path(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__assign_function__PathPlanTarget_Response__path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__get_function__PathPlanTarget_Response__path(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__resize_function__PathPlanTarget_Response__path(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plan_found",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Response, plan_found),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__PathPlanTarget_Response, path),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__size_function__PathPlanTarget_Response__path,  // size() function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__get_const_function__PathPlanTarget_Response__path,  // get_const(index) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__get_function__PathPlanTarget_Response__path,  // get(index) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__fetch_function__PathPlanTarget_Response__path,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__assign_function__PathPlanTarget_Response__path,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__resize_function__PathPlanTarget_Response__path  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_message_members = {
  "gs_ros_interfaces__srv",  // message namespace
  "PathPlanTarget_Response",  // message name
  4,  // number of fields
  sizeof(gs_ros_interfaces__srv__PathPlanTarget_Response),
  gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_message_member_array,  // message members
  gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_message_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, PathPlanTarget_Response)() {
  if (!gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__srv__PathPlanTarget_Response__rosidl_typesupport_introspection_c__PathPlanTarget_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/path_plan_target__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gs_ros_interfaces__srv__detail__path_plan_target__rosidl_typesupport_introspection_c__PathPlanTarget_service_members = {
  "gs_ros_interfaces__srv",  // service namespace
  "PathPlanTarget",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gs_ros_interfaces__srv__detail__path_plan_target__rosidl_typesupport_introspection_c__PathPlanTarget_Request_message_type_support_handle,
  NULL  // response message
  // gs_ros_interfaces__srv__detail__path_plan_target__rosidl_typesupport_introspection_c__PathPlanTarget_Response_message_type_support_handle
};

static rosidl_service_type_support_t gs_ros_interfaces__srv__detail__path_plan_target__rosidl_typesupport_introspection_c__PathPlanTarget_service_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__detail__path_plan_target__rosidl_typesupport_introspection_c__PathPlanTarget_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, PathPlanTarget_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, PathPlanTarget_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, PathPlanTarget)() {
  if (!gs_ros_interfaces__srv__detail__path_plan_target__rosidl_typesupport_introspection_c__PathPlanTarget_service_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__detail__path_plan_target__rosidl_typesupport_introspection_c__PathPlanTarget_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gs_ros_interfaces__srv__detail__path_plan_target__rosidl_typesupport_introspection_c__PathPlanTarget_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, PathPlanTarget_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, PathPlanTarget_Response)()->data;
  }

  return &gs_ros_interfaces__srv__detail__path_plan_target__rosidl_typesupport_introspection_c__PathPlanTarget_service_type_support_handle;
}
