// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gs_ros_interfaces:msg/ImuOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/imu_options__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gs_ros_interfaces/msg/detail/imu_options__struct.h"
#include "gs_ros_interfaces/msg/detail/imu_options__functions.h"
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
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__functions.h"  // noisy_options
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__functions.h"  // rigid_options
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__functions.h"  // ros_options
#include "rosidl_runtime_c/primitives_sequence.h"  // acc_bias, acc_cross_axis_coupling, acc_noise, acc_random_walk, debug_acc_color, debug_gyro_color, gyro_bias, gyro_cross_axis_coupling, gyro_noise, gyro_random_walk
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // acc_bias, acc_cross_axis_coupling, acc_noise, acc_random_walk, debug_acc_color, debug_gyro_color, gyro_bias, gyro_cross_axis_coupling, gyro_noise, gyro_random_walk

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
size_t get_serialized_size_gs_ros_interfaces__msg__NoisySensorOptions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gs_ros_interfaces__msg__NoisySensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, NoisySensorOptions)();
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


using _ImuOptions__ros_msg_type = gs_ros_interfaces__msg__ImuOptions;

static bool _ImuOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImuOptions__ros_msg_type * ros_message = static_cast<const _ImuOptions__ros_msg_type *>(untyped_ros_message);
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

  // Field name: noisy_options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, NoisySensorOptions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->noisy_options, cdr))
    {
      return false;
    }
  }

  // Field name: acc_resolution
  {
    cdr << ros_message->acc_resolution;
  }

  // Field name: acc_cross_axis_coupling
  {
    size_t size = ros_message->acc_cross_axis_coupling.size;
    auto array_ptr = ros_message->acc_cross_axis_coupling.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: acc_bias
  {
    size_t size = ros_message->acc_bias.size;
    auto array_ptr = ros_message->acc_bias.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: acc_noise
  {
    size_t size = ros_message->acc_noise.size;
    auto array_ptr = ros_message->acc_noise.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: acc_random_walk
  {
    size_t size = ros_message->acc_random_walk.size;
    auto array_ptr = ros_message->acc_random_walk.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_resolution
  {
    cdr << ros_message->gyro_resolution;
  }

  // Field name: gyro_cross_axis_coupling
  {
    size_t size = ros_message->gyro_cross_axis_coupling.size;
    auto array_ptr = ros_message->gyro_cross_axis_coupling.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_bias
  {
    size_t size = ros_message->gyro_bias.size;
    auto array_ptr = ros_message->gyro_bias.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_noise
  {
    size_t size = ros_message->gyro_noise.size;
    auto array_ptr = ros_message->gyro_noise.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_random_walk
  {
    size_t size = ros_message->gyro_random_walk.size;
    auto array_ptr = ros_message->gyro_random_walk.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: debug_acc_color
  {
    size_t size = ros_message->debug_acc_color.size;
    auto array_ptr = ros_message->debug_acc_color.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: debug_acc_scale
  {
    cdr << ros_message->debug_acc_scale;
  }

  // Field name: debug_gyro_color
  {
    size_t size = ros_message->debug_gyro_color.size;
    auto array_ptr = ros_message->debug_gyro_color.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: debug_gyro_scale
  {
    cdr << ros_message->debug_gyro_scale;
  }

  return true;
}

static bool _ImuOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImuOptions__ros_msg_type * ros_message = static_cast<_ImuOptions__ros_msg_type *>(untyped_ros_message);
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

  // Field name: noisy_options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, NoisySensorOptions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->noisy_options))
    {
      return false;
    }
  }

  // Field name: acc_resolution
  {
    cdr >> ros_message->acc_resolution;
  }

  // Field name: acc_cross_axis_coupling
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

    if (ros_message->acc_cross_axis_coupling.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->acc_cross_axis_coupling);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->acc_cross_axis_coupling, size)) {
      fprintf(stderr, "failed to create array for field 'acc_cross_axis_coupling'");
      return false;
    }
    auto array_ptr = ros_message->acc_cross_axis_coupling.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: acc_bias
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

    if (ros_message->acc_bias.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->acc_bias);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->acc_bias, size)) {
      fprintf(stderr, "failed to create array for field 'acc_bias'");
      return false;
    }
    auto array_ptr = ros_message->acc_bias.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: acc_noise
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

    if (ros_message->acc_noise.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->acc_noise);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->acc_noise, size)) {
      fprintf(stderr, "failed to create array for field 'acc_noise'");
      return false;
    }
    auto array_ptr = ros_message->acc_noise.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: acc_random_walk
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

    if (ros_message->acc_random_walk.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->acc_random_walk);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->acc_random_walk, size)) {
      fprintf(stderr, "failed to create array for field 'acc_random_walk'");
      return false;
    }
    auto array_ptr = ros_message->acc_random_walk.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_resolution
  {
    cdr >> ros_message->gyro_resolution;
  }

  // Field name: gyro_cross_axis_coupling
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

    if (ros_message->gyro_cross_axis_coupling.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->gyro_cross_axis_coupling);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->gyro_cross_axis_coupling, size)) {
      fprintf(stderr, "failed to create array for field 'gyro_cross_axis_coupling'");
      return false;
    }
    auto array_ptr = ros_message->gyro_cross_axis_coupling.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_bias
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

    if (ros_message->gyro_bias.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->gyro_bias);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->gyro_bias, size)) {
      fprintf(stderr, "failed to create array for field 'gyro_bias'");
      return false;
    }
    auto array_ptr = ros_message->gyro_bias.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_noise
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

    if (ros_message->gyro_noise.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->gyro_noise);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->gyro_noise, size)) {
      fprintf(stderr, "failed to create array for field 'gyro_noise'");
      return false;
    }
    auto array_ptr = ros_message->gyro_noise.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_random_walk
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

    if (ros_message->gyro_random_walk.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->gyro_random_walk);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->gyro_random_walk, size)) {
      fprintf(stderr, "failed to create array for field 'gyro_random_walk'");
      return false;
    }
    auto array_ptr = ros_message->gyro_random_walk.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: debug_acc_color
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

    if (ros_message->debug_acc_color.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->debug_acc_color);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->debug_acc_color, size)) {
      fprintf(stderr, "failed to create array for field 'debug_acc_color'");
      return false;
    }
    auto array_ptr = ros_message->debug_acc_color.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: debug_acc_scale
  {
    cdr >> ros_message->debug_acc_scale;
  }

  // Field name: debug_gyro_color
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

    if (ros_message->debug_gyro_color.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->debug_gyro_color);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->debug_gyro_color, size)) {
      fprintf(stderr, "failed to create array for field 'debug_gyro_color'");
      return false;
    }
    auto array_ptr = ros_message->debug_gyro_color.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: debug_gyro_scale
  {
    cdr >> ros_message->debug_gyro_scale;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t get_serialized_size_gs_ros_interfaces__msg__ImuOptions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImuOptions__ros_msg_type * ros_message = static_cast<const _ImuOptions__ros_msg_type *>(untyped_ros_message);
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
  // field.name noisy_options

  current_alignment += get_serialized_size_gs_ros_interfaces__msg__NoisySensorOptions(
    &(ros_message->noisy_options), current_alignment);
  // field.name acc_resolution
  {
    size_t item_size = sizeof(ros_message->acc_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_cross_axis_coupling
  {
    size_t array_size = ros_message->acc_cross_axis_coupling.size;
    auto array_ptr = ros_message->acc_cross_axis_coupling.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_bias
  {
    size_t array_size = ros_message->acc_bias.size;
    auto array_ptr = ros_message->acc_bias.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_noise
  {
    size_t array_size = ros_message->acc_noise.size;
    auto array_ptr = ros_message->acc_noise.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_random_walk
  {
    size_t array_size = ros_message->acc_random_walk.size;
    auto array_ptr = ros_message->acc_random_walk.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_resolution
  {
    size_t item_size = sizeof(ros_message->gyro_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_cross_axis_coupling
  {
    size_t array_size = ros_message->gyro_cross_axis_coupling.size;
    auto array_ptr = ros_message->gyro_cross_axis_coupling.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_bias
  {
    size_t array_size = ros_message->gyro_bias.size;
    auto array_ptr = ros_message->gyro_bias.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_noise
  {
    size_t array_size = ros_message->gyro_noise.size;
    auto array_ptr = ros_message->gyro_noise.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_random_walk
  {
    size_t array_size = ros_message->gyro_random_walk.size;
    auto array_ptr = ros_message->gyro_random_walk.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_acc_color
  {
    size_t array_size = ros_message->debug_acc_color.size;
    auto array_ptr = ros_message->debug_acc_color.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_acc_scale
  {
    size_t item_size = sizeof(ros_message->debug_acc_scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_gyro_color
  {
    size_t array_size = ros_message->debug_gyro_color.size;
    auto array_ptr = ros_message->debug_gyro_color.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_gyro_scale
  {
    size_t item_size = sizeof(ros_message->debug_gyro_scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ImuOptions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gs_ros_interfaces__msg__ImuOptions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t max_serialized_size_gs_ros_interfaces__msg__ImuOptions(
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
  // member: noisy_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_gs_ros_interfaces__msg__NoisySensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: acc_resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_cross_axis_coupling
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
  // member: acc_bias
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
  // member: acc_noise
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
  // member: acc_random_walk
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
  // member: gyro_resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_cross_axis_coupling
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
  // member: gyro_bias
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
  // member: gyro_noise
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
  // member: gyro_random_walk
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
  // member: debug_acc_color
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
  // member: debug_acc_scale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: debug_gyro_color
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
  // member: debug_gyro_scale
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
    using DataType = gs_ros_interfaces__msg__ImuOptions;
    is_plain =
      (
      offsetof(DataType, debug_gyro_scale) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ImuOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gs_ros_interfaces__msg__ImuOptions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ImuOptions = {
  "gs_ros_interfaces::msg",
  "ImuOptions",
  _ImuOptions__cdr_serialize,
  _ImuOptions__cdr_deserialize,
  _ImuOptions__get_serialized_size,
  _ImuOptions__max_serialized_size
};

static rosidl_message_type_support_t _ImuOptions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImuOptions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, ImuOptions)() {
  return &_ImuOptions__type_support;
}

#if defined(__cplusplus)
}
#endif
