// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gs_ros_interfaces:msg/RosSensorOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__struct.h"
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__functions.h"
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

#include "rosidl_runtime_c/string.h"  // frame_id, qos_durability, qos_history, qos_reliability, topic
#include "rosidl_runtime_c/string_functions.h"  // frame_id, qos_durability, qos_history, qos_reliability, topic

// forward declare type support functions


using _RosSensorOptions__ros_msg_type = gs_ros_interfaces__msg__RosSensorOptions;

static bool _RosSensorOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RosSensorOptions__ros_msg_type * ros_message = static_cast<const _RosSensorOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: frame_id
  {
    const rosidl_runtime_c__String * str = &ros_message->frame_id;
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

  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  // Field name: topic
  {
    const rosidl_runtime_c__String * str = &ros_message->topic;
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

  // Field name: qos_history
  {
    const rosidl_runtime_c__String * str = &ros_message->qos_history;
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

  // Field name: qos_depth
  {
    cdr << ros_message->qos_depth;
  }

  // Field name: qos_reliability
  {
    const rosidl_runtime_c__String * str = &ros_message->qos_reliability;
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

  // Field name: qos_durability
  {
    const rosidl_runtime_c__String * str = &ros_message->qos_durability;
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

  return true;
}

static bool _RosSensorOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RosSensorOptions__ros_msg_type * ros_message = static_cast<_RosSensorOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: frame_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->frame_id.data) {
      rosidl_runtime_c__String__init(&ros_message->frame_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->frame_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'frame_id'\n");
      return false;
    }
  }

  // Field name: frequency
  {
    cdr >> ros_message->frequency;
  }

  // Field name: topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->topic.data) {
      rosidl_runtime_c__String__init(&ros_message->topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'topic'\n");
      return false;
    }
  }

  // Field name: qos_history
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->qos_history.data) {
      rosidl_runtime_c__String__init(&ros_message->qos_history);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->qos_history,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'qos_history'\n");
      return false;
    }
  }

  // Field name: qos_depth
  {
    cdr >> ros_message->qos_depth;
  }

  // Field name: qos_reliability
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->qos_reliability.data) {
      rosidl_runtime_c__String__init(&ros_message->qos_reliability);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->qos_reliability,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'qos_reliability'\n");
      return false;
    }
  }

  // Field name: qos_durability
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->qos_durability.data) {
      rosidl_runtime_c__String__init(&ros_message->qos_durability);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->qos_durability,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'qos_durability'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t get_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosSensorOptions__ros_msg_type * ros_message = static_cast<const _RosSensorOptions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name frame_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->frame_id.size + 1);
  // field.name frequency
  {
    size_t item_size = sizeof(ros_message->frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->topic.size + 1);
  // field.name qos_history
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->qos_history.size + 1);
  // field.name qos_depth
  {
    size_t item_size = sizeof(ros_message->qos_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qos_reliability
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->qos_reliability.size + 1);
  // field.name qos_durability
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->qos_durability.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RosSensorOptions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t max_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
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

  // member: frame_id
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
  // member: frequency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: topic
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
  // member: qos_history
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
  // member: qos_depth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: qos_reliability
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
  // member: qos_durability
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gs_ros_interfaces__msg__RosSensorOptions;
    is_plain =
      (
      offsetof(DataType, qos_durability) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RosSensorOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosSensorOptions = {
  "gs_ros_interfaces::msg",
  "RosSensorOptions",
  _RosSensorOptions__cdr_serialize,
  _RosSensorOptions__cdr_deserialize,
  _RosSensorOptions__get_serialized_size,
  _RosSensorOptions__max_serialized_size
};

static rosidl_message_type_support_t _RosSensorOptions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosSensorOptions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RosSensorOptions)() {
  return &_RosSensorOptions__type_support;
}

#if defined(__cplusplus)
}
#endif
