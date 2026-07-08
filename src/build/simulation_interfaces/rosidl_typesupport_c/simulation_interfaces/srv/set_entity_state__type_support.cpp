// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from simulation_interfaces:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "simulation_interfaces/srv/detail/set_entity_state__struct.h"
#include "simulation_interfaces/srv/detail/set_entity_state__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace simulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetEntityState_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetEntityState_Request_type_support_ids_t;

static const _SetEntityState_Request_type_support_ids_t _SetEntityState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetEntityState_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetEntityState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetEntityState_Request_type_support_symbol_names_t _SetEntityState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, SetEntityState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SetEntityState_Request)),
  }
};

typedef struct _SetEntityState_Request_type_support_data_t
{
  void * data[2];
} _SetEntityState_Request_type_support_data_t;

static _SetEntityState_Request_type_support_data_t _SetEntityState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetEntityState_Request_message_typesupport_map = {
  2,
  "simulation_interfaces",
  &_SetEntityState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetEntityState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetEntityState_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetEntityState_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetEntityState_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace simulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, simulation_interfaces, srv, SetEntityState_Request)() {
  return &::simulation_interfaces::srv::rosidl_typesupport_c::SetEntityState_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "simulation_interfaces/srv/detail/set_entity_state__struct.h"
// already included above
// #include "simulation_interfaces/srv/detail/set_entity_state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace simulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetEntityState_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetEntityState_Response_type_support_ids_t;

static const _SetEntityState_Response_type_support_ids_t _SetEntityState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetEntityState_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetEntityState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetEntityState_Response_type_support_symbol_names_t _SetEntityState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, SetEntityState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SetEntityState_Response)),
  }
};

typedef struct _SetEntityState_Response_type_support_data_t
{
  void * data[2];
} _SetEntityState_Response_type_support_data_t;

static _SetEntityState_Response_type_support_data_t _SetEntityState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetEntityState_Response_message_typesupport_map = {
  2,
  "simulation_interfaces",
  &_SetEntityState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetEntityState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetEntityState_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetEntityState_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetEntityState_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace simulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, simulation_interfaces, srv, SetEntityState_Response)() {
  return &::simulation_interfaces::srv::rosidl_typesupport_c::SetEntityState_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simulation_interfaces/srv/detail/set_entity_state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace simulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetEntityState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetEntityState_type_support_ids_t;

static const _SetEntityState_type_support_ids_t _SetEntityState_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetEntityState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetEntityState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetEntityState_type_support_symbol_names_t _SetEntityState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, SetEntityState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SetEntityState)),
  }
};

typedef struct _SetEntityState_type_support_data_t
{
  void * data[2];
} _SetEntityState_type_support_data_t;

static _SetEntityState_type_support_data_t _SetEntityState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetEntityState_service_typesupport_map = {
  2,
  "simulation_interfaces",
  &_SetEntityState_service_typesupport_ids.typesupport_identifier[0],
  &_SetEntityState_service_typesupport_symbol_names.symbol_name[0],
  &_SetEntityState_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetEntityState_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetEntityState_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace simulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, simulation_interfaces, srv, SetEntityState)() {
  return &::simulation_interfaces::srv::rosidl_typesupport_c::SetEntityState_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
