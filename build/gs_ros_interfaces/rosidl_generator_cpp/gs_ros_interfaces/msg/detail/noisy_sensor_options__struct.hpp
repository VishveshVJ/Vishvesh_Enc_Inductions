// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/NoisySensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__NoisySensorOptions __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__NoisySensorOptions __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NoisySensorOptions_
{
  using Type = NoisySensorOptions_<ContainerAllocator>;

  explicit NoisySensorOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->jitter = 0.0f;
      this->interpolate = false;
    }
  }

  explicit NoisySensorOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->jitter = 0.0f;
      this->interpolate = false;
    }
  }

  // field types and members
  using _resolution_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _resolution_type resolution;
  using _bias_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _bias_type bias;
  using _noise_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _noise_type noise;
  using _random_walk_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _random_walk_type random_walk;
  using _jitter_type =
    float;
  _jitter_type jitter;
  using _interpolate_type =
    bool;
  _interpolate_type interpolate;

  // setters for named parameter idiom
  Type & set__resolution(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__bias(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->bias = _arg;
    return *this;
  }
  Type & set__noise(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->noise = _arg;
    return *this;
  }
  Type & set__random_walk(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->random_walk = _arg;
    return *this;
  }
  Type & set__jitter(
    const float & _arg)
  {
    this->jitter = _arg;
    return *this;
  }
  Type & set__interpolate(
    const bool & _arg)
  {
    this->interpolate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__NoisySensorOptions
    std::shared_ptr<gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__NoisySensorOptions
    std::shared_ptr<gs_ros_interfaces::msg::NoisySensorOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NoisySensorOptions_ & other) const
  {
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->bias != other.bias) {
      return false;
    }
    if (this->noise != other.noise) {
      return false;
    }
    if (this->random_walk != other.random_walk) {
      return false;
    }
    if (this->jitter != other.jitter) {
      return false;
    }
    if (this->interpolate != other.interpolate) {
      return false;
    }
    return true;
  }
  bool operator!=(const NoisySensorOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NoisySensorOptions_

// alias to use template instance with default allocator
using NoisySensorOptions =
  gs_ros_interfaces::msg::NoisySensorOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__STRUCT_HPP_
