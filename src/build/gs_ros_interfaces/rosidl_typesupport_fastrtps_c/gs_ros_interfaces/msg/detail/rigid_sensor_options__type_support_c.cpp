// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gs_ros_interfaces:msg/RigidSensorOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__struct.h"
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__functions.h"
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

#include "rosidl_runtime_c/string.h"  // link
#include "rosidl_runtime_c/string_functions.h"  // link

// forward declare type support functions


using _RigidSensorOptions__ros_msg_type = gs_ros_interfaces__msg__RigidSensorOptions;

static bool _RigidSensorOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RigidSensorOptions__ros_msg_type * ros_message = static_cast<const _RigidSensorOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: link
  {
    const rosidl_runtime_c__String * str = &ros_message->link;
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

  // Field name: pos_offset
  {
    size_t size = 3;
    auto array_ptr = ros_message->pos_offset;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: euler_offset
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler_offset;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RigidSensorOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RigidSensorOptions__ros_msg_type * ros_message = static_cast<_RigidSensorOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->link.data) {
      rosidl_runtime_c__String__init(&ros_message->link);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'link'\n");
      return false;
    }
  }

  // Field name: pos_offset
  {
    size_t size = 3;
    auto array_ptr = ros_message->pos_offset;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: euler_offset
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler_offset;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t get_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RigidSensorOptions__ros_msg_type * ros_message = static_cast<const _RigidSensorOptions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->link.size + 1);
  // field.name pos_offset
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pos_offset;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name euler_offset
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->euler_offset;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RigidSensorOptions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t max_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
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

  // member: link
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
  // member: pos_offset
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: euler_offset
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gs_ros_interfaces__msg__RigidSensorOptions;
    is_plain =
      (
      offsetof(DataType, euler_offset) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RigidSensorOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RigidSensorOptions = {
  "gs_ros_interfaces::msg",
  "RigidSensorOptions",
  _RigidSensorOptions__cdr_serialize,
  _RigidSensorOptions__cdr_deserialize,
  _RigidSensorOptions__get_serialized_size,
  _RigidSensorOptions__max_serialized_size
};

static rosidl_message_type_support_t _RigidSensorOptions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RigidSensorOptions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RigidSensorOptions)() {
  return &_RigidSensorOptions__type_support;
}

#if defined(__cplusplus)
}
#endif
