// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gs_ros_interfaces:msg/DepthCameraRayCasterPattern.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__struct.h"
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // res
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // res

// forward declare type support functions


using _DepthCameraRayCasterPattern__ros_msg_type = gs_ros_interfaces__msg__DepthCameraRayCasterPattern;

static bool _DepthCameraRayCasterPattern__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DepthCameraRayCasterPattern__ros_msg_type * ros_message = static_cast<const _DepthCameraRayCasterPattern__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    size_t size = ros_message->res.size;
    auto array_ptr = ros_message->res.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fx
  {
    cdr << ros_message->fx;
  }

  // Field name: fy
  {
    cdr << ros_message->fy;
  }

  // Field name: cx
  {
    cdr << ros_message->cx;
  }

  // Field name: cy
  {
    cdr << ros_message->cy;
  }

  // Field name: fov_horizontal
  {
    cdr << ros_message->fov_horizontal;
  }

  // Field name: fov_vertical
  {
    cdr << ros_message->fov_vertical;
  }

  return true;
}

static bool _DepthCameraRayCasterPattern__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DepthCameraRayCasterPattern__ros_msg_type * ros_message = static_cast<_DepthCameraRayCasterPattern__ros_msg_type *>(untyped_ros_message);
  // Field name: res
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

    if (ros_message->res.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->res);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->res, size)) {
      fprintf(stderr, "failed to create array for field 'res'");
      return false;
    }
    auto array_ptr = ros_message->res.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: fx
  {
    cdr >> ros_message->fx;
  }

  // Field name: fy
  {
    cdr >> ros_message->fy;
  }

  // Field name: cx
  {
    cdr >> ros_message->cx;
  }

  // Field name: cy
  {
    cdr >> ros_message->cy;
  }

  // Field name: fov_horizontal
  {
    cdr >> ros_message->fov_horizontal;
  }

  // Field name: fov_vertical
  {
    cdr >> ros_message->fov_vertical;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t get_serialized_size_gs_ros_interfaces__msg__DepthCameraRayCasterPattern(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DepthCameraRayCasterPattern__ros_msg_type * ros_message = static_cast<const _DepthCameraRayCasterPattern__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name res
  {
    size_t array_size = ros_message->res.size;
    auto array_ptr = ros_message->res.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fx
  {
    size_t item_size = sizeof(ros_message->fx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fy
  {
    size_t item_size = sizeof(ros_message->fy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cx
  {
    size_t item_size = sizeof(ros_message->cx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cy
  {
    size_t item_size = sizeof(ros_message->cy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fov_horizontal
  {
    size_t item_size = sizeof(ros_message->fov_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fov_vertical
  {
    size_t item_size = sizeof(ros_message->fov_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DepthCameraRayCasterPattern__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gs_ros_interfaces__msg__DepthCameraRayCasterPattern(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t max_serialized_size_gs_ros_interfaces__msg__DepthCameraRayCasterPattern(
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

  // member: res
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
  // member: fx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fov_horizontal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fov_vertical
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gs_ros_interfaces__msg__DepthCameraRayCasterPattern;
    is_plain =
      (
      offsetof(DataType, fov_vertical) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DepthCameraRayCasterPattern__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gs_ros_interfaces__msg__DepthCameraRayCasterPattern(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DepthCameraRayCasterPattern = {
  "gs_ros_interfaces::msg",
  "DepthCameraRayCasterPattern",
  _DepthCameraRayCasterPattern__cdr_serialize,
  _DepthCameraRayCasterPattern__cdr_deserialize,
  _DepthCameraRayCasterPattern__get_serialized_size,
  _DepthCameraRayCasterPattern__max_serialized_size
};

static rosidl_message_type_support_t _DepthCameraRayCasterPattern__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DepthCameraRayCasterPattern,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, DepthCameraRayCasterPattern)() {
  return &_DepthCameraRayCasterPattern__type_support;
}

#if defined(__cplusplus)
}
#endif
