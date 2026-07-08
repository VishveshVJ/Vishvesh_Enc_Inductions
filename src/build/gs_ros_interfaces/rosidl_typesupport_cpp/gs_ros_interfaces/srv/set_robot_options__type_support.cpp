// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:srv/SetRobotOptions.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gs_ros_interfaces/srv/detail/set_robot_options__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gs_ros_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetRobotOptions_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotOptions_Request_type_support_ids_t;

static const _SetRobotOptions_Request_type_support_ids_t _SetRobotOptions_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetRobotOptions_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotOptions_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotOptions_Request_type_support_symbol_names_t _SetRobotOptions_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gs_ros_interfaces, srv, SetRobotOptions_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, srv, SetRobotOptions_Request)),
  }
};

typedef struct _SetRobotOptions_Request_type_support_data_t
{
  void * data[2];
} _SetRobotOptions_Request_type_support_data_t;

static _SetRobotOptions_Request_type_support_data_t _SetRobotOptions_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotOptions_Request_message_typesupport_map = {
  2,
  "gs_ros_interfaces",
  &_SetRobotOptions_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetRobotOptions_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetRobotOptions_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetRobotOptions_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotOptions_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gs_ros_interfaces::srv::SetRobotOptions_Request>()
{
  return &::gs_ros_interfaces::srv::rosidl_typesupport_cpp::SetRobotOptions_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gs_ros_interfaces, srv, SetRobotOptions_Request)() {
  return get_message_type_support_handle<gs_ros_interfaces::srv::SetRobotOptions_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/set_robot_options__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gs_ros_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetRobotOptions_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotOptions_Response_type_support_ids_t;

static const _SetRobotOptions_Response_type_support_ids_t _SetRobotOptions_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetRobotOptions_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotOptions_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotOptions_Response_type_support_symbol_names_t _SetRobotOptions_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gs_ros_interfaces, srv, SetRobotOptions_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, srv, SetRobotOptions_Response)),
  }
};

typedef struct _SetRobotOptions_Response_type_support_data_t
{
  void * data[2];
} _SetRobotOptions_Response_type_support_data_t;

static _SetRobotOptions_Response_type_support_data_t _SetRobotOptions_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotOptions_Response_message_typesupport_map = {
  2,
  "gs_ros_interfaces",
  &_SetRobotOptions_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetRobotOptions_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetRobotOptions_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetRobotOptions_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotOptions_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gs_ros_interfaces::srv::SetRobotOptions_Response>()
{
  return &::gs_ros_interfaces::srv::rosidl_typesupport_cpp::SetRobotOptions_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gs_ros_interfaces, srv, SetRobotOptions_Response)() {
  return get_message_type_support_handle<gs_ros_interfaces::srv::SetRobotOptions_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/set_robot_options__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gs_ros_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetRobotOptions_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotOptions_type_support_ids_t;

static const _SetRobotOptions_type_support_ids_t _SetRobotOptions_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetRobotOptions_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotOptions_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotOptions_type_support_symbol_names_t _SetRobotOptions_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gs_ros_interfaces, srv, SetRobotOptions)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, srv, SetRobotOptions)),
  }
};

typedef struct _SetRobotOptions_type_support_data_t
{
  void * data[2];
} _SetRobotOptions_type_support_data_t;

static _SetRobotOptions_type_support_data_t _SetRobotOptions_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotOptions_service_typesupport_map = {
  2,
  "gs_ros_interfaces",
  &_SetRobotOptions_service_typesupport_ids.typesupport_identifier[0],
  &_SetRobotOptions_service_typesupport_symbol_names.symbol_name[0],
  &_SetRobotOptions_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetRobotOptions_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotOptions_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gs_ros_interfaces::srv::SetRobotOptions>()
{
  return &::gs_ros_interfaces::srv::rosidl_typesupport_cpp::SetRobotOptions_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, gs_ros_interfaces, srv, SetRobotOptions)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<gs_ros_interfaces::srv::SetRobotOptions>();
}

#ifdef __cplusplus
}
#endif
