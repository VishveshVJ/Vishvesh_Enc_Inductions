// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/ContactOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_OPTIONS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__ContactOptions __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__ContactOptions __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContactOptions_
{
  using Type = ContactOptions_<ContainerAllocator>;

  explicit ContactOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_init),
    ros_options(_init),
    rigid_options(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->debug_sphere_radius = 0.0f;
    }
  }

  explicit ContactOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_alloc, _init),
    ros_options(_alloc, _init),
    rigid_options(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->debug_sphere_radius = 0.0f;
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
  using _debug_sphere_radius_type =
    float;
  _debug_sphere_radius_type debug_sphere_radius;
  using _debug_color_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _debug_color_type debug_color;

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
  Type & set__debug_sphere_radius(
    const float & _arg)
  {
    this->debug_sphere_radius = _arg;
    return *this;
  }
  Type & set__debug_color(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->debug_color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__ContactOptions
    std::shared_ptr<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__ContactOptions
    std::shared_ptr<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContactOptions_ & other) const
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
    if (this->debug_sphere_radius != other.debug_sphere_radius) {
      return false;
    }
    if (this->debug_color != other.debug_color) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContactOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContactOptions_

// alias to use template instance with default allocator
using ContactOptions =
  gs_ros_interfaces::msg::ContactOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_OPTIONS__STRUCT_HPP_
