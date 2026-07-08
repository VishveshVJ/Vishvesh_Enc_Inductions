// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gs_ros_interfaces:msg/ContactOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/contact_options__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gs_ros_interfaces/msg/detail/contact_options__struct.h"
#include "gs_ros_interfaces/msg/detail/contact_options__functions.h"
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

#include "gs_ros_interfaces/msg/detail/general_sensor_options__functions.h"  // options
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__functions.h"  // rigid_options
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__functions.h"  // ros_options
#include "rosidl_runtime_c/primitives_sequence.h"  // debug_color
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // debug_color

// forward declare type support functions
size_t get_serialized_size_gs_ros_interfaces__msg__GeneralSensorOptions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gs_ros_interfaces__msg__GeneralSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, GeneralSensorOptions)();
size_t get_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RigidSensorOptions)();
size_t get_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RosSensorOptions)();


using _ContactOptions__ros_msg_type = gs_ros_interfaces__msg__ContactOptions;

static bool _ContactOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ContactOptions__ros_msg_type * ros_message = static_cast<const _ContactOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, GeneralSensorOptions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->options, cdr))
    {
      return false;
    }
  }

  // Field name: ros_options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RosSensorOptions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ros_options, cdr))
    {
      return false;
    }
  }

  // Field name: rigid_options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RigidSensorOptions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rigid_options, cdr))
    {
      return false;
    }
  }

  // Field name: debug_sphere_radius
  {
    cdr << ros_message->debug_sphere_radius;
  }

  // Field name: debug_color
  {
    size_t size = ros_message->debug_color.size;
    auto array_ptr = ros_message->debug_color.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ContactOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ContactOptions__ros_msg_type * ros_message = static_cast<_ContactOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, GeneralSensorOptions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->options))
    {
      return false;
    }
  }

  // Field name: ros_options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RosSensorOptions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ros_options))
    {
      return false;
    }
  }

  // Field name: rigid_options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RigidSensorOptions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rigid_options))
    {
      return false;
    }
  }

  // Field name: debug_sphere_radius
  {
    cdr >> ros_message->debug_sphere_radius;
  }

  // Field name: debug_color
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

    if (ros_message->debug_color.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->debug_color);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->debug_color, size)) {
      fprintf(stderr, "failed to create array for field 'debug_color'");
      return false;
    }
    auto array_ptr = ros_message->debug_color.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t get_serialized_size_gs_ros_interfaces__msg__ContactOptions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ContactOptions__ros_msg_type * ros_message = static_cast<const _ContactOptions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name options

  current_alignment += get_serialized_size_gs_ros_interfaces__msg__GeneralSensorOptions(
    &(ros_message->options), current_alignment);
  // field.name ros_options

  current_alignment += get_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
    &(ros_message->ros_options), current_alignment);
  // field.name rigid_options

  current_alignment += get_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
    &(ros_message->rigid_options), current_alignment);
  // field.name debug_sphere_radius
  {
    size_t item_size = sizeof(ros_message->debug_sphere_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_color
  {
    size_t array_size = ros_message->debug_color.size;
    auto array_ptr = ros_message->debug_color.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ContactOptions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gs_ros_interfaces__msg__ContactOptions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t max_serialized_size_gs_ros_interfaces__msg__ContactOptions(
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

  // member: options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_gs_ros_interfaces__msg__GeneralSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ros_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rigid_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: debug_sphere_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: debug_color
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
    using DataType = gs_ros_interfaces__msg__ContactOptions;
    is_plain =
      (
      offsetof(DataType, debug_color) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ContactOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gs_ros_interfaces__msg__ContactOptions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ContactOptions = {
  "gs_ros_interfaces::msg",
  "ContactOptions",
  _ContactOptions__cdr_serialize,
  _ContactOptions__cdr_deserialize,
  _ContactOptions__get_serialized_size,
  _ContactOptions__max_serialized_size
};

static rosidl_message_type_support_t _ContactOptions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ContactOptions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, ContactOptions)() {
  return &_ContactOptions__type_support;
}

#if defined(__cplusplus)
}
#endif
