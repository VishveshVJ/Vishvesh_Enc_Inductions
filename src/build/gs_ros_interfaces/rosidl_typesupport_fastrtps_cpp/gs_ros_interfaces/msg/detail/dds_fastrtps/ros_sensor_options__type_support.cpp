// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:msg/RosSensorOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace gs_ros_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
cdr_serialize(
  const gs_ros_interfaces::msg::RosSensorOptions & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: frame_id
  cdr << ros_message.frame_id;
  // Member: frequency
  cdr << ros_message.frequency;
  // Member: topic
  cdr << ros_message.topic;
  // Member: qos_history
  cdr << ros_message.qos_history;
  // Member: qos_depth
  cdr << ros_message.qos_depth;
  // Member: qos_reliability
  cdr << ros_message.qos_reliability;
  // Member: qos_durability
  cdr << ros_message.qos_durability;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gs_ros_interfaces::msg::RosSensorOptions & ros_message)
{
  // Member: frame_id
  cdr >> ros_message.frame_id;

  // Member: frequency
  cdr >> ros_message.frequency;

  // Member: topic
  cdr >> ros_message.topic;

  // Member: qos_history
  cdr >> ros_message.qos_history;

  // Member: qos_depth
  cdr >> ros_message.qos_depth;

  // Member: qos_reliability
  cdr >> ros_message.qos_reliability;

  // Member: qos_durability
  cdr >> ros_message.qos_durability;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
get_serialized_size(
  const gs_ros_interfaces::msg::RosSensorOptions & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: frame_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.frame_id.size() + 1);
  // Member: frequency
  {
    size_t item_size = sizeof(ros_message.frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.topic.size() + 1);
  // Member: qos_history
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.qos_history.size() + 1);
  // Member: qos_depth
  {
    size_t item_size = sizeof(ros_message.qos_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: qos_reliability
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.qos_reliability.size() + 1);
  // Member: qos_durability
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.qos_durability.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
max_serialized_size_RosSensorOptions(
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


  // Member: frame_id
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

  // Member: frequency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: topic
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

  // Member: qos_history
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

  // Member: qos_depth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: qos_reliability
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

  // Member: qos_durability
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
    using DataType = gs_ros_interfaces::msg::RosSensorOptions;
    is_plain =
      (
      offsetof(DataType, qos_durability) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RosSensorOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gs_ros_interfaces::msg::RosSensorOptions *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RosSensorOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gs_ros_interfaces::msg::RosSensorOptions *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RosSensorOptions__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gs_ros_interfaces::msg::RosSensorOptions *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RosSensorOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RosSensorOptions(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RosSensorOptions__callbacks = {
  "gs_ros_interfaces::msg",
  "RosSensorOptions",
  _RosSensorOptions__cdr_serialize,
  _RosSensorOptions__cdr_deserialize,
  _RosSensorOptions__get_serialized_size,
  _RosSensorOptions__max_serialized_size
};

static rosidl_message_type_support_t _RosSensorOptions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RosSensorOptions__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gs_ros_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<gs_ros_interfaces::msg::RosSensorOptions>()
{
  return &gs_ros_interfaces::msg::typesupport_fastrtps_cpp::_RosSensorOptions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gs_ros_interfaces, msg, RosSensorOptions)() {
  return &gs_ros_interfaces::msg::typesupport_fastrtps_cpp::_RosSensorOptions__handle;
}

#ifdef __cplusplus
}
#endif
