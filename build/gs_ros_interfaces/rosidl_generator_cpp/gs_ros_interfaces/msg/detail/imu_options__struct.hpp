// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/ImuOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'options'
#include "gs_ros_interfaces/msg/detail/general_sensor_options__struct.hpp"
// Member 'ros_options'
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__struct.hpp"
// Member 'rigid_options'
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__struct.hpp"
// Member 'noisy_options'
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__ImuOptions __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__ImuOptions __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuOptions_
{
  using Type = ImuOptions_<ContainerAllocator>;

  explicit ImuOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_init),
    ros_options(_init),
    rigid_options(_init),
    noisy_options(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_resolution = 0.0f;
      this->gyro_resolution = 0.0f;
      this->debug_acc_scale = 0.0f;
      this->debug_gyro_scale = 0.0f;
    }
  }

  explicit ImuOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_alloc, _init),
    ros_options(_alloc, _init),
    rigid_options(_alloc, _init),
    noisy_options(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_resolution = 0.0f;
      this->gyro_resolution = 0.0f;
      this->debug_acc_scale = 0.0f;
      this->debug_gyro_scale = 0.0f;
    }
  }

  // field types and members
  using _options_type =
    gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator>;
  _options_type options;
  using _ros_options_type =
    gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator>;
  _ros_options_type ros_options;
  using _rigid_options_type =
    gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator>;
  _rigid_options_type rigid_options;
  using _noisy_options_type =
    gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator>;
  _noisy_options_type noisy_options;
  using _acc_resolution_type =
    float;
  _acc_resolution_type acc_resolution;
  using _acc_cross_axis_coupling_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _acc_cross_axis_coupling_type acc_cross_axis_coupling;
  using _acc_bias_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _acc_bias_type acc_bias;
  using _acc_noise_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _acc_noise_type acc_noise;
  using _acc_random_walk_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _acc_random_walk_type acc_random_walk;
  using _gyro_resolution_type =
    float;
  _gyro_resolution_type gyro_resolution;
  using _gyro_cross_axis_coupling_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _gyro_cross_axis_coupling_type gyro_cross_axis_coupling;
  using _gyro_bias_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _gyro_bias_type gyro_bias;
  using _gyro_noise_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _gyro_noise_type gyro_noise;
  using _gyro_random_walk_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _gyro_random_walk_type gyro_random_walk;
  using _debug_acc_color_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _debug_acc_color_type debug_acc_color;
  using _debug_acc_scale_type =
    float;
  _debug_acc_scale_type debug_acc_scale;
  using _debug_gyro_color_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _debug_gyro_color_type debug_gyro_color;
  using _debug_gyro_scale_type =
    float;
  _debug_gyro_scale_type debug_gyro_scale;

  // setters for named parameter idiom
  Type & set__options(
    const gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator> & _arg)
  {
    this->options = _arg;
    return *this;
  }
  Type & set__ros_options(
    const gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator> & _arg)
  {
    this->ros_options = _arg;
    return *this;
  }
  Type & set__rigid_options(
    const gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator> & _arg)
  {
    this->rigid_options = _arg;
    return *this;
  }
  Type & set__noisy_options(
    const gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator> & _arg)
  {
    this->noisy_options = _arg;
    return *this;
  }
  Type & set__acc_resolution(
    const float & _arg)
  {
    this->acc_resolution = _arg;
    return *this;
  }
  Type & set__acc_cross_axis_coupling(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->acc_cross_axis_coupling = _arg;
    return *this;
  }
  Type & set__acc_bias(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->acc_bias = _arg;
    return *this;
  }
  Type & set__acc_noise(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->acc_noise = _arg;
    return *this;
  }
  Type & set__acc_random_walk(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->acc_random_walk = _arg;
    return *this;
  }
  Type & set__gyro_resolution(
    const float & _arg)
  {
    this->gyro_resolution = _arg;
    return *this;
  }
  Type & set__gyro_cross_axis_coupling(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->gyro_cross_axis_coupling = _arg;
    return *this;
  }
  Type & set__gyro_bias(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->gyro_bias = _arg;
    return *this;
  }
  Type & set__gyro_noise(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->gyro_noise = _arg;
    return *this;
  }
  Type & set__gyro_random_walk(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->gyro_random_walk = _arg;
    return *this;
  }
  Type & set__debug_acc_color(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->debug_acc_color = _arg;
    return *this;
  }
  Type & set__debug_acc_scale(
    const float & _arg)
  {
    this->debug_acc_scale = _arg;
    return *this;
  }
  Type & set__debug_gyro_color(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->debug_gyro_color = _arg;
    return *this;
  }
  Type & set__debug_gyro_scale(
    const float & _arg)
  {
    this->debug_gyro_scale = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__ImuOptions
    std::shared_ptr<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__ImuOptions
    std::shared_ptr<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuOptions_ & other) const
  {
    if (this->options != other.options) {
      return false;
    }
    if (this->ros_options != other.ros_options) {
      return false;
    }
    if (this->rigid_options != other.rigid_options) {
      return false;
    }
    if (this->noisy_options != other.noisy_options) {
      return false;
    }
    if (this->acc_resolution != other.acc_resolution) {
      return false;
    }
    if (this->acc_cross_axis_coupling != other.acc_cross_axis_coupling) {
      return false;
    }
    if (this->acc_bias != other.acc_bias) {
      return false;
    }
    if (this->acc_noise != other.acc_noise) {
      return false;
    }
    if (this->acc_random_walk != other.acc_random_walk) {
      return false;
    }
    if (this->gyro_resolution != other.gyro_resolution) {
      return false;
    }
    if (this->gyro_cross_axis_coupling != other.gyro_cross_axis_coupling) {
      return false;
    }
    if (this->gyro_bias != other.gyro_bias) {
      return false;
    }
    if (this->gyro_noise != other.gyro_noise) {
      return false;
    }
    if (this->gyro_random_walk != other.gyro_random_walk) {
      return false;
    }
    if (this->debug_acc_color != other.debug_acc_color) {
      return false;
    }
    if (this->debug_acc_scale != other.debug_acc_scale) {
      return false;
    }
    if (this->debug_gyro_color != other.debug_gyro_color) {
      return false;
    }
    if (this->debug_gyro_scale != other.debug_gyro_scale) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuOptions_

// alias to use template instance with default allocator
using ImuOptions =
  gs_ros_interfaces::msg::ImuOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__STRUCT_HPP_
