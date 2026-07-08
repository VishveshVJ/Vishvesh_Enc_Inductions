// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/ContactForceOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__STRUCT_HPP_

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
# define DEPRECATED__gs_ros_interfaces__msg__ContactForceOptions __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__ContactForceOptions __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContactForceOptions_
{
  using Type = ContactForceOptions_<ContainerAllocator>;

  explicit ContactForceOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_init),
    ros_options(_init),
    rigid_options(_init),
    noisy_options(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->debug_scale = 0.0f;
    }
  }

  explicit ContactForceOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_alloc, _init),
    ros_options(_alloc, _init),
    rigid_options(_alloc, _init),
    noisy_options(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->debug_scale = 0.0f;
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
  using _min_force_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _min_force_type min_force;
  using _max_force_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _max_force_type max_force;
  using _debug_color_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _debug_color_type debug_color;
  using _debug_scale_type =
    float;
  _debug_scale_type debug_scale;

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
  Type & set__min_force(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->min_force = _arg;
    return *this;
  }
  Type & set__max_force(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->max_force = _arg;
    return *this;
  }
  Type & set__debug_color(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->debug_color = _arg;
    return *this;
  }
  Type & set__debug_scale(
    const float & _arg)
  {
    this->debug_scale = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__ContactForceOptions
    std::shared_ptr<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__ContactForceOptions
    std::shared_ptr<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContactForceOptions_ & other) const
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
    if (this->min_force != other.min_force) {
      return false;
    }
    if (this->max_force != other.max_force) {
      return false;
    }
    if (this->debug_color != other.debug_color) {
      return false;
    }
    if (this->debug_scale != other.debug_scale) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContactForceOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContactForceOptions_

// alias to use template instance with default allocator
using ContactForceOptions =
  gs_ros_interfaces::msg::ContactForceOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__STRUCT_HPP_
