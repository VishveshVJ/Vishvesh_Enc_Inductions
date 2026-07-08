// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:srv/SetRobotOptions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/srv/detail/set_robot_options__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/srv/detail/set_robot_options__functions.h"
#include "gs_ros_interfaces/srv/detail/set_robot_options__struct.h"


// Include directives for member types
// Member `entity`
#include "rosidl_runtime_c/string_functions.h"
// Member `options`
#include "gs_ros_interfaces/msg/robot_options.h"
// Member `options`
#include "gs_ros_interfaces/msg/detail/robot_options__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__srv__SetRobotOptions_Request__init(message_memory);
}

void gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_fini_function(void * message_memory)
{
  gs_ros_interfaces__srv__SetRobotOptions_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_message_member_array[2] = {
  {
    "entity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__SetRobotOptions_Request, entity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__SetRobotOptions_Request, options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_message_members = {
  "gs_ros_interfaces__srv",  // message namespace
  "SetRobotOptions_Request",  // message name
  2,  // number of fields
  sizeof(gs_ros_interfaces__srv__SetRobotOptions_Request),
  gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_message_member_array,  // message members
  gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_message_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetRobotOptions_Request)() {
  gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, RobotOptions)();
  if (!gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__srv__SetRobotOptions_Request__rosidl_typesupport_introspection_c__SetRobotOptions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gs_ros_interfaces/srv/detail/set_robot_options__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/set_robot_options__functions.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/set_robot_options__struct.h"


// Include directives for member types
// Member `result`
#include "simulation_interfaces/msg/result.h"
// Member `result`
#include "simulation_interfaces/msg/detail/result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__srv__SetRobotOptions_Response__init(message_memory);
}

void gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_fini_function(void * message_memory)
{
  gs_ros_interfaces__srv__SetRobotOptions_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__SetRobotOptions_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_message_members = {
  "gs_ros_interfaces__srv",  // message namespace
  "SetRobotOptions_Response",  // message name
  1,  // number of fields
  sizeof(gs_ros_interfaces__srv__SetRobotOptions_Response),
  gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_message_member_array,  // message members
  gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_message_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetRobotOptions_Response)() {
  gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Result)();
  if (!gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__srv__SetRobotOptions_Response__rosidl_typesupport_introspection_c__SetRobotOptions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/set_robot_options__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gs_ros_interfaces__srv__detail__set_robot_options__rosidl_typesupport_introspection_c__SetRobotOptions_service_members = {
  "gs_ros_interfaces__srv",  // service namespace
  "SetRobotOptions",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gs_ros_interfaces__srv__detail__set_robot_options__rosidl_typesupport_introspection_c__SetRobotOptions_Request_message_type_support_handle,
  NULL  // response message
  // gs_ros_interfaces__srv__detail__set_robot_options__rosidl_typesupport_introspection_c__SetRobotOptions_Response_message_type_support_handle
};

static rosidl_service_type_support_t gs_ros_interfaces__srv__detail__set_robot_options__rosidl_typesupport_introspection_c__SetRobotOptions_service_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__detail__set_robot_options__rosidl_typesupport_introspection_c__SetRobotOptions_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetRobotOptions_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetRobotOptions_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetRobotOptions)() {
  if (!gs_ros_interfaces__srv__detail__set_robot_options__rosidl_typesupport_introspection_c__SetRobotOptions_service_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__detail__set_robot_options__rosidl_typesupport_introspection_c__SetRobotOptions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gs_ros_interfaces__srv__detail__set_robot_options__rosidl_typesupport_introspection_c__SetRobotOptions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetRobotOptions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetRobotOptions_Response)()->data;
  }

  return &gs_ros_interfaces__srv__detail__set_robot_options__rosidl_typesupport_introspection_c__SetRobotOptions_service_type_support_handle;
}
