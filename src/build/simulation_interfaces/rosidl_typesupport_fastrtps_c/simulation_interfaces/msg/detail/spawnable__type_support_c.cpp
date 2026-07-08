// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from simulation_interfaces:msg/Spawnable.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/msg/detail/spawnable__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "simulation_interfaces/msg/detail/spawnable__struct.h"
#include "simulation_interfaces/msg/detail/spawnable__functions.h"
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

#include "rosidl_runtime_c/string.h"  // description
#include "rosidl_runtime_c/string_functions.h"  // description
#include "simulation_interfaces/msg/detail/bounds__functions.h"  // spawn_bounds
#include "simulation_interfaces/msg/detail/resource__functions.h"  // entity_resource

// forward declare type support functions
size_t get_serialized_size_simulation_interfaces__msg__Bounds(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__Bounds(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Bounds)();
size_t get_serialized_size_simulation_interfaces__msg__Resource(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__Resource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Resource)();


using _Spawnable__ros_msg_type = simulation_interfaces__msg__Spawnable;

static bool _Spawnable__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Spawnable__ros_msg_type * ros_message = static_cast<const _Spawnable__ros_msg_type *>(untyped_ros_message);
  // Field name: entity_resource
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Resource
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->entity_resource, cdr))
    {
      return false;
    }
  }

  // Field name: description
  {
    const rosidl_runtime_c__String * str = &ros_message->description;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: spawn_bounds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Bounds
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->spawn_bounds, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Spawnable__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Spawnable__ros_msg_type * ros_message = static_cast<_Spawnable__ros_msg_type *>(untyped_ros_message);
  // Field name: entity_resource
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Resource
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->entity_resource))
    {
      return false;
    }
  }

  // Field name: description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->description.data) {
      rosidl_runtime_c__String__init(&ros_message->description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'description'\n");
      return false;
    }
  }

  // Field name: spawn_bounds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Bounds
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->spawn_bounds))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t get_serialized_size_simulation_interfaces__msg__Spawnable(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Spawnable__ros_msg_type * ros_message = static_cast<const _Spawnable__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name entity_resource

  current_alignment += get_serialized_size_simulation_interfaces__msg__Resource(
    &(ros_message->entity_resource), current_alignment);
  // field.name description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->description.size + 1);
  // field.name spawn_bounds

  current_alignment += get_serialized_size_simulation_interfaces__msg__Bounds(
    &(ros_message->spawn_bounds), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Spawnable__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_simulation_interfaces__msg__Spawnable(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t max_serialized_size_simulation_interfaces__msg__Spawnable(
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

  // member: entity_resource
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
  // member: description
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: spawn_bounds
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_simulation_interfaces__msg__Bounds(
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
    using DataType = simulation_interfaces__msg__Spawnable;
    is_plain =
      (
      offsetof(DataType, spawn_bounds) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Spawnable__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_simulation_interfaces__msg__Spawnable(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Spawnable = {
  "simulation_interfaces::msg",
  "Spawnable",
  _Spawnable__cdr_serialize,
  _Spawnable__cdr_deserialize,
  _Spawnable__get_serialized_size,
  _Spawnable__max_serialized_size
};

static rosidl_message_type_support_t _Spawnable__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Spawnable,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Spawnable)() {
  return &_Spawnable__type_support;
}

#if defined(__cplusplus)
}
#endif
