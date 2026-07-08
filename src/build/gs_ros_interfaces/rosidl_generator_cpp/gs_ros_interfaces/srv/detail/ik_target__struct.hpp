// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:srv/IKTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__STRUCT_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__srv__IKTarget_Request __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__srv__IKTarget_Request __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IKTarget_Request_
{
  using Type = IKTarget_Request_<ContainerAllocator>;

  explicit IKTarget_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->target_link_name = "";
      this->request_joint_limit = false;
      this->max_samples = 0l;
      this->max_solver_iterartions = 0l;
      this->damping = 0.0;
      this->pos_tol = 0.0;
      this->rot_tol = 0.0;
      this->max_step_size = 0.0;
      this->visualize = false;
      this->execute = false;
    }
  }

  explicit IKTarget_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_name(_alloc),
    target_link_name(_alloc),
    position(_alloc, _init),
    orientation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->target_link_name = "";
      this->request_joint_limit = false;
      this->max_samples = 0l;
      this->max_solver_iterartions = 0l;
      this->damping = 0.0;
      this->pos_tol = 0.0;
      this->rot_tol = 0.0;
      this->max_step_size = 0.0;
      this->visualize = false;
      this->execute = false;
    }
  }

  // field types and members
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _target_link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_link_name_type target_link_name;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _init_robot_pos_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _init_robot_pos_type init_robot_pos;
  using _request_joint_limit_type =
    bool;
  _request_joint_limit_type request_joint_limit;
  using _max_samples_type =
    int32_t;
  _max_samples_type max_samples;
  using _max_solver_iterartions_type =
    int32_t;
  _max_solver_iterartions_type max_solver_iterartions;
  using _damping_type =
    double;
  _damping_type damping;
  using _pos_tol_type =
    double;
  _pos_tol_type pos_tol;
  using _rot_tol_type =
    double;
  _rot_tol_type rot_tol;
  using _pos_mask_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _pos_mask_type pos_mask;
  using _rot_mask_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _rot_mask_type rot_mask;
  using _max_step_size_type =
    double;
  _max_step_size_type max_step_size;
  using _dofs_idx_local_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _dofs_idx_local_type dofs_idx_local;
  using _visualize_type =
    bool;
  _visualize_type visualize;
  using _execute_type =
    bool;
  _execute_type execute;

  // setters for named parameter idiom
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__target_link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_link_name = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__init_robot_pos(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->init_robot_pos = _arg;
    return *this;
  }
  Type & set__request_joint_limit(
    const bool & _arg)
  {
    this->request_joint_limit = _arg;
    return *this;
  }
  Type & set__max_samples(
    const int32_t & _arg)
  {
    this->max_samples = _arg;
    return *this;
  }
  Type & set__max_solver_iterartions(
    const int32_t & _arg)
  {
    this->max_solver_iterartions = _arg;
    return *this;
  }
  Type & set__damping(
    const double & _arg)
  {
    this->damping = _arg;
    return *this;
  }
  Type & set__pos_tol(
    const double & _arg)
  {
    this->pos_tol = _arg;
    return *this;
  }
  Type & set__rot_tol(
    const double & _arg)
  {
    this->rot_tol = _arg;
    return *this;
  }
  Type & set__pos_mask(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->pos_mask = _arg;
    return *this;
  }
  Type & set__rot_mask(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->rot_mask = _arg;
    return *this;
  }
  Type & set__max_step_size(
    const double & _arg)
  {
    this->max_step_size = _arg;
    return *this;
  }
  Type & set__dofs_idx_local(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->dofs_idx_local = _arg;
    return *this;
  }
  Type & set__visualize(
    const bool & _arg)
  {
    this->visualize = _arg;
    return *this;
  }
  Type & set__execute(
    const bool & _arg)
  {
    this->execute = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__srv__IKTarget_Request
    std::shared_ptr<gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__srv__IKTarget_Request
    std::shared_ptr<gs_ros_interfaces::srv::IKTarget_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IKTarget_Request_ & other) const
  {
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->target_link_name != other.target_link_name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->init_robot_pos != other.init_robot_pos) {
      return false;
    }
    if (this->request_joint_limit != other.request_joint_limit) {
      return false;
    }
    if (this->max_samples != other.max_samples) {
      return false;
    }
    if (this->max_solver_iterartions != other.max_solver_iterartions) {
      return false;
    }
    if (this->damping != other.damping) {
      return false;
    }
    if (this->pos_tol != other.pos_tol) {
      return false;
    }
    if (this->rot_tol != other.rot_tol) {
      return false;
    }
    if (this->pos_mask != other.pos_mask) {
      return false;
    }
    if (this->rot_mask != other.rot_mask) {
      return false;
    }
    if (this->max_step_size != other.max_step_size) {
      return false;
    }
    if (this->dofs_idx_local != other.dofs_idx_local) {
      return false;
    }
    if (this->visualize != other.visualize) {
      return false;
    }
    if (this->execute != other.execute) {
      return false;
    }
    return true;
  }
  bool operator!=(const IKTarget_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IKTarget_Request_

// alias to use template instance with default allocator
using IKTarget_Request =
  gs_ros_interfaces::srv::IKTarget_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gs_ros_interfaces


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__srv__IKTarget_Response __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__srv__IKTarget_Response __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IKTarget_Response_
{
  using Type = IKTarget_Response_<ContainerAllocator>;

  explicit IKTarget_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->solution_found = false;
      this->target_pos_error = 0.0;
      this->target_quat_error = 0.0;
      this->message = "";
    }
  }

  explicit IKTarget_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->solution_found = false;
      this->target_pos_error = 0.0;
      this->target_quat_error = 0.0;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _solution_found_type =
    bool;
  _solution_found_type solution_found;
  using _joint_angles_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_angles_type joint_angles;
  using _target_pos_error_type =
    double;
  _target_pos_error_type target_pos_error;
  using _target_quat_error_type =
    double;
  _target_quat_error_type target_quat_error;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__solution_found(
    const bool & _arg)
  {
    this->solution_found = _arg;
    return *this;
  }
  Type & set__joint_angles(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_angles = _arg;
    return *this;
  }
  Type & set__target_pos_error(
    const double & _arg)
  {
    this->target_pos_error = _arg;
    return *this;
  }
  Type & set__target_quat_error(
    const double & _arg)
  {
    this->target_quat_error = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__srv__IKTarget_Response
    std::shared_ptr<gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__srv__IKTarget_Response
    std::shared_ptr<gs_ros_interfaces::srv::IKTarget_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IKTarget_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->solution_found != other.solution_found) {
      return false;
    }
    if (this->joint_angles != other.joint_angles) {
      return false;
    }
    if (this->target_pos_error != other.target_pos_error) {
      return false;
    }
    if (this->target_quat_error != other.target_quat_error) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const IKTarget_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IKTarget_Response_

// alias to use template instance with default allocator
using IKTarget_Response =
  gs_ros_interfaces::srv::IKTarget_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{

namespace srv
{

struct IKTarget
{
  using Request = gs_ros_interfaces::srv::IKTarget_Request;
  using Response = gs_ros_interfaces::srv::IKTarget_Response;
};

}  // namespace srv

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__STRUCT_HPP_
