// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:msg/ContactOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/contact_options__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gs_ros_interfaces/msg/detail/contact_options__struct.hpp"

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
bool cdr_serialize(
  const gs_ros_interfaces::msg::GeneralSensorOptions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gs_ros_interfaces::msg::GeneralSensorOptions &);
size_t get_serialized_size(
  const gs_ros_interfaces::msg::GeneralSensorOptions &,
  size_t current_alignment);
size_t
max_serialized_size_GeneralSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gs_ros_interfaces::msg::RosSensorOptions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gs_ros_interfaces::msg::RosSensorOptions &);
size_t get_serialized_size(
  const gs_ros_interfaces::msg::RosSensorOptions &,
  size_t current_alignment);
size_t
max_serialized_size_RosSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gs_ros_interfaces::msg::RigidSensorOptions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gs_ros_interfaces::msg::RigidSensorOptions &);
size_t get_serialized_size(
  const gs_ros_interfaces::msg::RigidSensorOptions &,
  size_t current_alignment);
size_t
max_serialized_size_RigidSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
cdr_serialize(
  const gs_ros_interfaces::msg::ContactOptions & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.options,
    cdr);
  // Member: ros_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ros_options,
    cdr);
  // Member: rigid_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rigid_options,
    cdr);
  // Member: debug_sphere_radius
  cdr << ros_message.debug_sphere_radius;
  // Member: debug_color
  {
    cdr << ros_message.debug_color;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gs_ros_interfaces::msg::ContactOptions & ros_message)
{
  // Member: options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.options);

  // Member: ros_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ros_options);

  // Member: rigid_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rigid_options);

  // Member: debug_sphere_radius
  cdr >> ros_message.debug_sphere_radius;

  // Member: debug_color
  {
    cdr >> ros_message.debug_color;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
get_serialized_size(
  const gs_ros_interfaces::msg::ContactOptions & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: options

  current_alignment +=
    gs_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.options, current_alignment);
  // Member: ros_options

  current_alignment +=
    gs_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ros_options, current_alignment);
  // Member: rigid_options

  current_alignment +=
    gs_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rigid_options, current_alignment);
  // Member: debug_sphere_radius
  {
    size_t item_size = sizeof(ros_message.debug_sphere_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: debug_color
  {
    size_t array_size = ros_message.debug_color.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.debug_color[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
max_serialized_size_ContactOptions(
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


  // Member: options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        gs_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_GeneralSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ros_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        gs_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_RosSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rigid_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        gs_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_RigidSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: debug_sphere_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: debug_color
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
    using DataType = gs_ros_interfaces::msg::ContactOptions;
    is_plain =
      (
      offsetof(DataType, debug_color) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ContactOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gs_ros_interfaces::msg::ContactOptions *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ContactOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gs_ros_interfaces::msg::ContactOptions *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ContactOptions__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gs_ros_interfaces::msg::ContactOptions *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ContactOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ContactOptions(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ContactOptions__callbacks = {
  "gs_ros_interfaces::msg",
  "ContactOptions",
  _ContactOptions__cdr_serialize,
  _ContactOptions__cdr_deserialize,
  _ContactOptions__get_serialized_size,
  _ContactOptions__max_serialized_size
};

static rosidl_message_type_support_t _ContactOptions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ContactOptions__callbacks,
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
get_message_type_support_handle<gs_ros_interfaces::msg::ContactOptions>()
{
  return &gs_ros_interfaces::msg::typesupport_fastrtps_cpp::_ContactOptions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gs_ros_interfaces, msg, ContactOptions)() {
  return &gs_ros_interfaces::msg::typesupport_fastrtps_cpp::_ContactOptions__handle;
}

#ifdef __cplusplus
}
#endif
