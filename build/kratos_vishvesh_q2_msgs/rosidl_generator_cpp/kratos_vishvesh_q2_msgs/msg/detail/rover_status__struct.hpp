// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kratos_vishvesh_q2_msgs:msg/RoverStatus.idl
// generated code does not contain a copyright notice

#ifndef KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__STRUCT_HPP_
#define KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kratos_vishvesh_q2_msgs__msg__RoverStatus __attribute__((deprecated))
#else
# define DEPRECATED__kratos_vishvesh_q2_msgs__msg__RoverStatus __declspec(deprecated)
#endif

namespace kratos_vishvesh_q2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverStatus_
{
  using Type = RoverStatus_<ContainerAllocator>;

  explicit RoverStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_percentage = 0.0f;
      this->velocity = 0.0f;
      this->emergency_stop = false;
      this->mode = "";
    }
  }

  explicit RoverStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_percentage = 0.0f;
      this->velocity = 0.0f;
      this->emergency_stop = false;
      this->mode = "";
    }
  }

  // field types and members
  using _battery_percentage_type =
    float;
  _battery_percentage_type battery_percentage;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__battery_percentage(
    const float & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__emergency_stop(
    const bool & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kratos_vishvesh_q2_msgs__msg__RoverStatus
    std::shared_ptr<kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kratos_vishvesh_q2_msgs__msg__RoverStatus
    std::shared_ptr<kratos_vishvesh_q2_msgs::msg::RoverStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverStatus_ & other) const
  {
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverStatus_

// alias to use template instance with default allocator
using RoverStatus =
  kratos_vishvesh_q2_msgs::msg::RoverStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kratos_vishvesh_q2_msgs

#endif  // KRATOS_VISHVESH_Q2_MSGS__MSG__DETAIL__ROVER_STATUS__STRUCT_HPP_
