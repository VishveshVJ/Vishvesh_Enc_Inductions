// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gs_ros_interfaces:msg/RobotOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/robot_options__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gs_ros_interfaces/msg/detail/robot_options__struct.h"
#include "gs_ros_interfaces/msg/detail/robot_options__functions.h"
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

#include "gs_ros_interfaces/msg/detail/joint_property__functions.h"  // joint_properties
#include "rosidl_runtime_c/string.h"  // joint_commands_topic, joint_states_topic, joints_control_topic
#include "rosidl_runtime_c/string_functions.h"  // joint_commands_topic, joint_states_topic, joints_control_topic

// forward declare type support functions
size_t get_serialized_size_gs_ros_interfaces__msg__JointProperty(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gs_ros_interfaces__msg__JointProperty(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, JointProperty)();


using _RobotOptions__ros_msg_type = gs_ros_interfaces__msg__RobotOptions;

static bool _RobotOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotOptions__ros_msg_type * ros_message = static_cast<const _RobotOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_states_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->joint_states_topic;
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

  // Field name: joint_states_topic_frequency
  {
    cdr << ros_message->joint_states_topic_frequency;
  }

  // Field name: joint_commands_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->joint_commands_topic;
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

  // Field name: joint_commands_topic_frequency
  {
    cdr << ros_message->joint_commands_topic_frequency;
  }

  // Field name: joints_control_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->joints_control_topic;
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

  // Field name: joints_control_topic_frequency
  {
    cdr << ros_message->joints_control_topic_frequency;
  }

  // Field name: joint_properties
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, JointProperty
      )()->data);
    size_t size = ros_message->joint_properties.size;
    auto array_ptr = ros_message->joint_properties.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _RobotOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotOptions__ros_msg_type * ros_message = static_cast<_RobotOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_states_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->joint_states_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->joint_states_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->joint_states_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'joint_states_topic'\n");
      return false;
    }
  }

  // Field name: joint_states_topic_frequency
  {
    cdr >> ros_message->joint_states_topic_frequency;
  }

  // Field name: joint_commands_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->joint_commands_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->joint_commands_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->joint_commands_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'joint_commands_topic'\n");
      return false;
    }
  }

  // Field name: joint_commands_topic_frequency
  {
    cdr >> ros_message->joint_commands_topic_frequency;
  }

  // Field name: joints_control_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->joints_control_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->joints_control_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->joints_control_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'joints_control_topic'\n");
      return false;
    }
  }

  // Field name: joints_control_topic_frequency
  {
    cdr >> ros_message->joints_control_topic_frequency;
  }

  // Field name: joint_properties
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, JointProperty
      )()->data);
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

    if (ros_message->joint_properties.data) {
      gs_ros_interfaces__msg__JointProperty__Sequence__fini(&ros_message->joint_properties);
    }
    if (!gs_ros_interfaces__msg__JointProperty__Sequence__init(&ros_message->joint_properties, size)) {
      fprintf(stderr, "failed to create array for field 'joint_properties'");
      return false;
    }
    auto array_ptr = ros_message->joint_properties.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t get_serialized_size_gs_ros_interfaces__msg__RobotOptions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotOptions__ros_msg_type * ros_message = static_cast<const _RobotOptions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_states_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joint_states_topic.size + 1);
  // field.name joint_states_topic_frequency
  {
    size_t item_size = sizeof(ros_message->joint_states_topic_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_commands_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joint_commands_topic.size + 1);
  // field.name joint_commands_topic_frequency
  {
    size_t item_size = sizeof(ros_message->joint_commands_topic_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joints_control_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joints_control_topic.size + 1);
  // field.name joints_control_topic_frequency
  {
    size_t item_size = sizeof(ros_message->joints_control_topic_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_properties
  {
    size_t array_size = ros_message->joint_properties.size;
    auto array_ptr = ros_message->joint_properties.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_gs_ros_interfaces__msg__JointProperty(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotOptions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gs_ros_interfaces__msg__RobotOptions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t max_serialized_size_gs_ros_interfaces__msg__RobotOptions(
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

  // member: joint_states_topic
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
  // member: joint_states_topic_frequency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_commands_topic
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
  // member: joint_commands_topic_frequency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joints_control_topic
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
  // member: joints_control_topic_frequency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_properties
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_gs_ros_interfaces__msg__JointProperty(
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
    using DataType = gs_ros_interfaces__msg__RobotOptions;
    is_plain =
      (
      offsetof(DataType, joint_properties) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobotOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gs_ros_interfaces__msg__RobotOptions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotOptions = {
  "gs_ros_interfaces::msg",
  "RobotOptions",
  _RobotOptions__cdr_serialize,
  _RobotOptions__cdr_deserialize,
  _RobotOptions__get_serialized_size,
  _RobotOptions__max_serialized_size
};

static rosidl_message_type_support_t _RobotOptions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotOptions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RobotOptions)() {
  return &_RobotOptions__type_support;
}

#if defined(__cplusplus)
}
#endif
