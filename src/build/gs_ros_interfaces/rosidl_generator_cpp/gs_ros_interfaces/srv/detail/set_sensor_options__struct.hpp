// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:srv/SetSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__SET_SENSOR_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__SET_SENSOR_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cameras'
#include "gs_ros_interfaces/msg/detail/camera_options__struct.hpp"
// Member 'lidars'
#include "gs_ros_interfaces/msg/detail/lidar_options__struct.hpp"
// Member 'imus'
#include "gs_ros_interfaces/msg/detail/imu_options__struct.hpp"
// Member 'contacts'
#include "gs_ros_interfaces/msg/detail/contact_options__struct.hpp"
// Member 'contact_forces'
#include "gs_ros_interfaces/msg/detail/contact_force_options__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__srv__SetSensorOptions_Request __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__srv__SetSensorOptions_Request __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSensorOptions_Request_
{
  using Type = SetSensorOptions_Request_<ContainerAllocator>;

  explicit SetSensorOptions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity = "";
    }
  }

  explicit SetSensorOptions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity = "";
    }
  }

  // field types and members
  using _entity_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_type entity;
  using _cameras_type =
    std::vector<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator>>>;
  _cameras_type cameras;
  using _lidars_type =
    std::vector<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator>>>;
  _lidars_type lidars;
  using _imus_type =
    std::vector<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator>>>;
  _imus_type imus;
  using _contacts_type =
    std::vector<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator>>>;
  _contacts_type contacts;
  using _contact_forces_type =
    std::vector<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator>>>;
  _contact_forces_type contact_forces;

  // setters for named parameter idiom
  Type & set__entity(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity = _arg;
    return *this;
  }
  Type & set__cameras(
    const std::vector<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator>>> & _arg)
  {
    this->cameras = _arg;
    return *this;
  }
  Type & set__lidars(
    const std::vector<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator>>> & _arg)
  {
    this->lidars = _arg;
    return *this;
  }
  Type & set__imus(
    const std::vector<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::ImuOptions_<ContainerAllocator>>> & _arg)
  {
    this->imus = _arg;
    return *this;
  }
  Type & set__contacts(
    const std::vector<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::ContactOptions_<ContainerAllocator>>> & _arg)
  {
    this->contacts = _arg;
    return *this;
  }
  Type & set__contact_forces(
    const std::vector<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::ContactForceOptions_<ContainerAllocator>>> & _arg)
  {
    this->contact_forces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__srv__SetSensorOptions_Request
    std::shared_ptr<gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__srv__SetSensorOptions_Request
    std::shared_ptr<gs_ros_interfaces::srv::SetSensorOptions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSensorOptions_Request_ & other) const
  {
    if (this->entity != other.entity) {
      return false;
    }
    if (this->cameras != other.cameras) {
      return false;
    }
    if (this->lidars != other.lidars) {
      return false;
    }
    if (this->imus != other.imus) {
      return false;
    }
    if (this->contacts != other.contacts) {
      return false;
    }
    if (this->contact_forces != other.contact_forces) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSensorOptions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSensorOptions_Request_

// alias to use template instance with default allocator
using SetSensorOptions_Request =
  gs_ros_interfaces::srv::SetSensorOptions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gs_ros_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__srv__SetSensorOptions_Response __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__srv__SetSensorOptions_Response __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSensorOptions_Response_
{
  using Type = SetSensorOptions_Response_<ContainerAllocator>;

  explicit SetSensorOptions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit SetSensorOptions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__srv__SetSensorOptions_Response
    std::shared_ptr<gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__srv__SetSensorOptions_Response
    std::shared_ptr<gs_ros_interfaces::srv::SetSensorOptions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSensorOptions_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSensorOptions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSensorOptions_Response_

// alias to use template instance with default allocator
using SetSensorOptions_Response =
  gs_ros_interfaces::srv::SetSensorOptions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{

namespace srv
{

struct SetSensorOptions
{
  using Request = gs_ros_interfaces::srv::SetSensorOptions_Request;
  using Response = gs_ros_interfaces::srv::SetSensorOptions_Response;
};

}  // namespace srv

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__SET_SENSOR_OPTIONS__STRUCT_HPP_
