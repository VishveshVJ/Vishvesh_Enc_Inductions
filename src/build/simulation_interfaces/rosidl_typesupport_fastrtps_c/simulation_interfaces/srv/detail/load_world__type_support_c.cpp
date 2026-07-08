// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from simulation_interfaces:srv/LoadWorld.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/srv/detail/load_world__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "simulation_interfaces/srv/detail/load_world__struct.h"
#include "simulation_interfaces/srv/detail/load_world__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "simulation_interfaces/msg/detail/resource__functions.h"  // world_resource

// forward declare type support functions
size_t get_serialized_size_simulation_interfaces__msg__Resource(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__Resource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Resource)();


using _LoadWorld_Request__ros_msg_type = simulation_interfaces__srv__LoadWorld_Request;

static bool _LoadWorld_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LoadWorld_Request__ros_msg_type * ros_message = static_cast<const _LoadWorld_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: world_resource
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Resource
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->world_resource, cdr))
    {
      return false;
    }
  }

  // Field name: fail_on_unsupported_element
  {
    cdr << (ros_message->fail_on_unsupported_element ? true : false);
  }

  // Field name: ignore_missing_or_unsupported_assets
  {
    cdr << (ros_message->ignore_missing_or_unsupported_assets ? true : false);
  }

  return true;
}

static bool _LoadWorld_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LoadWorld_Request__ros_msg_type * ros_message = static_cast<_LoadWorld_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: world_resource
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Resource
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->world_resource))
    {
      return false;
    }
  }

  // Field name: fail_on_unsupported_element
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fail_on_unsupported_element = tmp ? true : false;
  }

  // Field name: ignore_missing_or_unsupported_assets
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ignore_missing_or_unsupported_assets = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t get_serialized_size_simulation_interfaces__srv__LoadWorld_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadWorld_Request__ros_msg_type * ros_message = static_cast<const _LoadWorld_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name world_resource

  current_alignment += get_serialized_size_simulation_interfaces__msg__Resource(
    &(ros_message->world_resource), current_alignment);
  // field.name fail_on_unsupported_element
  {
    size_t item_size = sizeof(ros_message->fail_on_unsupported_element);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ignore_missing_or_unsupported_assets
  {
    size_t item_size = sizeof(ros_message->ignore_missing_or_unsupported_assets);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LoadWorld_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_simulation_interfaces__srv__LoadWorld_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t max_serialized_size_simulation_interfaces__srv__LoadWorld_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: world_resource
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_simulation_interfaces__msg__Resource(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fail_on_unsupported_element
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ignore_missing_or_unsupported_assets
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = simulation_interfaces__srv__LoadWorld_Request;
    is_plain =
      (
      offsetof(DataType, ignore_missing_or_unsupported_assets) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LoadWorld_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_simulation_interfaces__srv__LoadWorld_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoadWorld_Request = {
  "simulation_interfaces::srv",
  "LoadWorld_Request",
  _LoadWorld_Request__cdr_serialize,
  _LoadWorld_Request__cdr_deserialize,
  _LoadWorld_Request__get_serialized_size,
  _LoadWorld_Request__max_serialized_size
};

static rosidl_message_type_support_t _LoadWorld_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadWorld_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, LoadWorld_Request)() {
  return &_LoadWorld_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "simulation_interfaces/srv/detail/load_world__struct.h"
// already included above
// #include "simulation_interfaces/srv/detail/load_world__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "simulation_interfaces/msg/detail/result__functions.h"  // result
#include "simulation_interfaces/msg/detail/world_resource__functions.h"  // world

// forward declare type support functions
size_t get_serialized_size_simulation_interfaces__msg__Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Result)();
size_t get_serialized_size_simulation_interfaces__msg__WorldResource(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__WorldResource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, WorldResource)();


using _LoadWorld_Response__ros_msg_type = simulation_interfaces__srv__LoadWorld_Response;

static bool _LoadWorld_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LoadWorld_Response__ros_msg_type * ros_message = static_cast<const _LoadWorld_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  // Field name: world
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, WorldResource
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->world, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LoadWorld_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LoadWorld_Response__ros_msg_type * ros_message = static_cast<_LoadWorld_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  // Field name: world
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, WorldResource
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->world))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t get_serialized_size_simulation_interfaces__srv__LoadWorld_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadWorld_Response__ros_msg_type * ros_message = static_cast<const _LoadWorld_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result

  current_alignment += get_serialized_size_simulation_interfaces__msg__Result(
    &(ros_message->result), current_alignment);
  // field.name world

  current_alignment += get_serialized_size_simulation_interfaces__msg__WorldResource(
    &(ros_message->world), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LoadWorld_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_simulation_interfaces__srv__LoadWorld_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t max_serialized_size_simulation_interfaces__srv__LoadWorld_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_simulation_interfaces__msg__Result(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: world
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_simulation_interfaces__msg__WorldResource(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = simulation_interfaces__srv__LoadWorld_Response;
    is_plain =
      (
      offsetof(DataType, world) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LoadWorld_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_simulation_interfaces__srv__LoadWorld_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoadWorld_Response = {
  "simulation_interfaces::srv",
  "LoadWorld_Response",
  _LoadWorld_Response__cdr_serialize,
  _LoadWorld_Response__cdr_deserialize,
  _LoadWorld_Response__get_serialized_size,
  _LoadWorld_Response__max_serialized_size
};

static rosidl_message_type_support_t _LoadWorld_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadWorld_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, LoadWorld_Response)() {
  return &_LoadWorld_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "simulation_interfaces/srv/load_world.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LoadWorld__callbacks = {
  "simulation_interfaces::srv",
  "LoadWorld",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, LoadWorld_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, LoadWorld_Response)(),
};

static rosidl_service_type_support_t LoadWorld__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LoadWorld__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, LoadWorld)() {
  return &LoadWorld__handle;
}

#if defined(__cplusplus)
}
#endif
