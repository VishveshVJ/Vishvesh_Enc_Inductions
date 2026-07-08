// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gs_ros_interfaces:msg/NoisySensorOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__struct.h"
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // bias, noise, random_walk, resolution
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bias, noise, random_walk, resolution

// forward declare type support functions


using _NoisySensorOptions__ros_msg_type = gs_ros_interfaces__msg__NoisySensorOptions;

static bool _NoisySensorOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NoisySensorOptions__ros_msg_type * ros_message = static_cast<const _NoisySensorOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: resolution
  {
    size_t size = ros_message->resolution.size;
    auto array_ptr = ros_message->resolution.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: bias
  {
    size_t size = ros_message->bias.size;
    auto array_ptr = ros_message->bias.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: noise
  {
    size_t size = ros_message->noise.size;
    auto array_ptr = ros_message->noise.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: random_walk
  {
    size_t size = ros_message->random_walk.size;
    auto array_ptr = ros_message->random_walk.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: jitter
  {
    cdr << ros_message->jitter;
  }

  // Field name: interpolate
  {
    cdr << (ros_message->interpolate ? true : false);
  }

  return true;
}

static bool _NoisySensorOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NoisySensorOptions__ros_msg_type * ros_message = static_cast<_NoisySensorOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: resolution
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->resolution.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->resolution);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->resolution, size)) {
      fprintf(stderr, "failed to create array for field 'resolution'");
      return false;
    }
    auto array_ptr = ros_message->resolution.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: bias
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->bias.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->bias);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->bias, size)) {
      fprintf(stderr, "failed to create array for field 'bias'");
      return false;
    }
    auto array_ptr = ros_message->bias.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: noise
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->noise.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->noise);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->noise, size)) {
      fprintf(stderr, "failed to create array for field 'noise'");
      return false;
    }
    auto array_ptr = ros_message->noise.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: random_walk
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->random_walk.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->random_walk);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->random_walk, size)) {
      fprintf(stderr, "failed to create array for field 'random_walk'");
      return false;
    }
    auto array_ptr = ros_message->random_walk.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: jitter
  {
    cdr >> ros_message->jitter;
  }

  // Field name: interpolate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->interpolate = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t get_serialized_size_gs_ros_interfaces__msg__NoisySensorOptions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NoisySensorOptions__ros_msg_type * ros_message = static_cast<const _NoisySensorOptions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name resolution
  {
    size_t array_size = ros_message->resolution.size;
    auto array_ptr = ros_message->resolution.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bias
  {
    size_t array_size = ros_message->bias.size;
    auto array_ptr = ros_message->bias.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name noise
  {
    size_t array_size = ros_message->noise.size;
    auto array_ptr = ros_message->noise.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name random_walk
  {
    size_t array_size = ros_message->random_walk.size;
    auto array_ptr = ros_message->random_walk.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jitter
  {
    size_t item_size = sizeof(ros_message->jitter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name interpolate
  {
    size_t item_size = sizeof(ros_message->interpolate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NoisySensorOptions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gs_ros_interfaces__msg__NoisySensorOptions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t max_serialized_size_gs_ros_interfaces__msg__NoisySensorOptions(
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

  // member: resolution
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bias
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: noise
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: random_walk
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: jitter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: interpolate
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
    using DataType = gs_ros_interfaces__msg__NoisySensorOptions;
    is_plain =
      (
      offsetof(DataType, interpolate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NoisySensorOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gs_ros_interfaces__msg__NoisySensorOptions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NoisySensorOptions = {
  "gs_ros_interfaces::msg",
  "NoisySensorOptions",
  _NoisySensorOptions__cdr_serialize,
  _NoisySensorOptions__cdr_deserialize,
  _NoisySensorOptions__get_serialized_size,
  _NoisySensorOptions__max_serialized_size
};

static rosidl_message_type_support_t _NoisySensorOptions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NoisySensorOptions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, NoisySensorOptions)() {
  return &_NoisySensorOptions__type_support;
}

#if defined(__cplusplus)
}
#endif
