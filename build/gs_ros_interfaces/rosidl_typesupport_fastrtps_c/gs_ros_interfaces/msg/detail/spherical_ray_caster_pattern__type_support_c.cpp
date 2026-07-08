// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gs_ros_interfaces:msg/SphericalRayCasterPattern.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__struct.h"
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // angles, angular_resolution, fov, n_points
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // angles, angular_resolution, fov, n_points

// forward declare type support functions


using _SphericalRayCasterPattern__ros_msg_type = gs_ros_interfaces__msg__SphericalRayCasterPattern;

static bool _SphericalRayCasterPattern__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SphericalRayCasterPattern__ros_msg_type * ros_message = static_cast<const _SphericalRayCasterPattern__ros_msg_type *>(untyped_ros_message);
  // Field name: fov
  {
    size_t size = ros_message->fov.size;
    auto array_ptr = ros_message->fov.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: n_points
  {
    size_t size = ros_message->n_points.size;
    auto array_ptr = ros_message->n_points.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: angular_resolution
  {
    size_t size = ros_message->angular_resolution.size;
    auto array_ptr = ros_message->angular_resolution.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: angles
  {
    size_t size = ros_message->angles.size;
    auto array_ptr = ros_message->angles.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SphericalRayCasterPattern__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SphericalRayCasterPattern__ros_msg_type * ros_message = static_cast<_SphericalRayCasterPattern__ros_msg_type *>(untyped_ros_message);
  // Field name: fov
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

    if (ros_message->fov.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->fov);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->fov, size)) {
      fprintf(stderr, "failed to create array for field 'fov'");
      return false;
    }
    auto array_ptr = ros_message->fov.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: n_points
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

    if (ros_message->n_points.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->n_points);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->n_points, size)) {
      fprintf(stderr, "failed to create array for field 'n_points'");
      return false;
    }
    auto array_ptr = ros_message->n_points.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: angular_resolution
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

    if (ros_message->angular_resolution.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->angular_resolution);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->angular_resolution, size)) {
      fprintf(stderr, "failed to create array for field 'angular_resolution'");
      return false;
    }
    auto array_ptr = ros_message->angular_resolution.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: angles
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

    if (ros_message->angles.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->angles);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->angles, size)) {
      fprintf(stderr, "failed to create array for field 'angles'");
      return false;
    }
    auto array_ptr = ros_message->angles.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t get_serialized_size_gs_ros_interfaces__msg__SphericalRayCasterPattern(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SphericalRayCasterPattern__ros_msg_type * ros_message = static_cast<const _SphericalRayCasterPattern__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name fov
  {
    size_t array_size = ros_message->fov.size;
    auto array_ptr = ros_message->fov.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name n_points
  {
    size_t array_size = ros_message->n_points.size;
    auto array_ptr = ros_message->n_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_resolution
  {
    size_t array_size = ros_message->angular_resolution.size;
    auto array_ptr = ros_message->angular_resolution.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angles
  {
    size_t array_size = ros_message->angles.size;
    auto array_ptr = ros_message->angles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SphericalRayCasterPattern__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gs_ros_interfaces__msg__SphericalRayCasterPattern(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t max_serialized_size_gs_ros_interfaces__msg__SphericalRayCasterPattern(
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

  // member: fov
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: n_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angular_resolution
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gs_ros_interfaces__msg__SphericalRayCasterPattern;
    is_plain =
      (
      offsetof(DataType, angles) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SphericalRayCasterPattern__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gs_ros_interfaces__msg__SphericalRayCasterPattern(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SphericalRayCasterPattern = {
  "gs_ros_interfaces::msg",
  "SphericalRayCasterPattern",
  _SphericalRayCasterPattern__cdr_serialize,
  _SphericalRayCasterPattern__cdr_deserialize,
  _SphericalRayCasterPattern__get_serialized_size,
  _SphericalRayCasterPattern__max_serialized_size
};

static rosidl_message_type_support_t _SphericalRayCasterPattern__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SphericalRayCasterPattern,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, SphericalRayCasterPattern)() {
  return &_SphericalRayCasterPattern__type_support;
}

#if defined(__cplusplus)
}
#endif
