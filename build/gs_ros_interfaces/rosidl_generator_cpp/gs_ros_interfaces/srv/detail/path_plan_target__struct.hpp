// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:srv/PathPlanTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__STRUCT_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pos'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__srv__PathPlanTarget_Request __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__srv__PathPlanTarget_Request __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PathPlanTarget_Request_
{
  using Type = PathPlanTarget_Request_<ContainerAllocator>;

  explicit PathPlanTarget_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->attached_intity = "";
      this->target_link_name = "";
      this->max_nodes = 0l;
      this->resolution = 0.0;
      this->timeout = 0.0;
      this->max_retries = 0l;
      this->smooth_path = false;
      this->num_waypoints = 0l;
      this->ignore_collision = false;
      this->planner = "";
      this->ee_link_name = "";
      this->visualize = false;
      this->execute = false;
      this->tolerance = 0.0;
    }
  }

  explicit PathPlanTarget_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_name(_alloc),
    attached_intity(_alloc),
    target_link_name(_alloc),
    planner(_alloc),
    ee_link_name(_alloc),
    target_pos(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->attached_intity = "";
      this->target_link_name = "";
      this->max_nodes = 0l;
      this->resolution = 0.0;
      this->timeout = 0.0;
      this->max_retries = 0l;
      this->smooth_path = false;
      this->num_waypoints = 0l;
      this->ignore_collision = false;
      this->planner = "";
      this->ee_link_name = "";
      this->visualize = false;
      this->execute = false;
      this->tolerance = 0.0;
    }
  }

  // field types and members
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _attached_intity_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _attached_intity_type attached_intity;
  using _target_link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_link_name_type target_link_name;
  using _goal_state_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal_state_type goal_state;
  using _start_state_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _start_state_type start_state;
  using _max_nodes_type =
    int32_t;
  _max_nodes_type max_nodes;
  using _resolution_type =
    double;
  _resolution_type resolution;
  using _timeout_type =
    double;
  _timeout_type timeout;
  using _max_retries_type =
    int32_t;
  _max_retries_type max_retries;
  using _smooth_path_type =
    bool;
  _smooth_path_type smooth_path;
  using _num_waypoints_type =
    int32_t;
  _num_waypoints_type num_waypoints;
  using _ignore_collision_type =
    bool;
  _ignore_collision_type ignore_collision;
  using _planner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planner_type planner;
  using _ee_link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ee_link_name_type ee_link_name;
  using _visualize_type =
    bool;
  _visualize_type visualize;
  using _execute_type =
    bool;
  _execute_type execute;
  using _target_pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _target_pos_type target_pos;
  using _tolerance_type =
    double;
  _tolerance_type tolerance;

  // setters for named parameter idiom
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__attached_intity(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->attached_intity = _arg;
    return *this;
  }
  Type & set__target_link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_link_name = _arg;
    return *this;
  }
  Type & set__goal_state(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal_state = _arg;
    return *this;
  }
  Type & set__start_state(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->start_state = _arg;
    return *this;
  }
  Type & set__max_nodes(
    const int32_t & _arg)
  {
    this->max_nodes = _arg;
    return *this;
  }
  Type & set__resolution(
    const double & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__timeout(
    const double & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__max_retries(
    const int32_t & _arg)
  {
    this->max_retries = _arg;
    return *this;
  }
  Type & set__smooth_path(
    const bool & _arg)
  {
    this->smooth_path = _arg;
    return *this;
  }
  Type & set__num_waypoints(
    const int32_t & _arg)
  {
    this->num_waypoints = _arg;
    return *this;
  }
  Type & set__ignore_collision(
    const bool & _arg)
  {
    this->ignore_collision = _arg;
    return *this;
  }
  Type & set__planner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planner = _arg;
    return *this;
  }
  Type & set__ee_link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ee_link_name = _arg;
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
  Type & set__target_pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->target_pos = _arg;
    return *this;
  }
  Type & set__tolerance(
    const double & _arg)
  {
    this->tolerance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__srv__PathPlanTarget_Request
    std::shared_ptr<gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__srv__PathPlanTarget_Request
    std::shared_ptr<gs_ros_interfaces::srv::PathPlanTarget_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPlanTarget_Request_ & other) const
  {
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->attached_intity != other.attached_intity) {
      return false;
    }
    if (this->target_link_name != other.target_link_name) {
      return false;
    }
    if (this->goal_state != other.goal_state) {
      return false;
    }
    if (this->start_state != other.start_state) {
      return false;
    }
    if (this->max_nodes != other.max_nodes) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->max_retries != other.max_retries) {
      return false;
    }
    if (this->smooth_path != other.smooth_path) {
      return false;
    }
    if (this->num_waypoints != other.num_waypoints) {
      return false;
    }
    if (this->ignore_collision != other.ignore_collision) {
      return false;
    }
    if (this->planner != other.planner) {
      return false;
    }
    if (this->ee_link_name != other.ee_link_name) {
      return false;
    }
    if (this->visualize != other.visualize) {
      return false;
    }
    if (this->execute != other.execute) {
      return false;
    }
    if (this->target_pos != other.target_pos) {
      return false;
    }
    if (this->tolerance != other.tolerance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPlanTarget_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPlanTarget_Request_

// alias to use template instance with default allocator
using PathPlanTarget_Request =
  gs_ros_interfaces::srv::PathPlanTarget_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gs_ros_interfaces


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__srv__PathPlanTarget_Response __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__srv__PathPlanTarget_Response __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PathPlanTarget_Response_
{
  using Type = PathPlanTarget_Response_<ContainerAllocator>;

  explicit PathPlanTarget_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->plan_found = false;
      this->message = "";
    }
  }

  explicit PathPlanTarget_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->plan_found = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _plan_found_type =
    bool;
  _plan_found_type plan_found;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _path_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__plan_found(
    const bool & _arg)
  {
    this->plan_found = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__path(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__srv__PathPlanTarget_Response
    std::shared_ptr<gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__srv__PathPlanTarget_Response
    std::shared_ptr<gs_ros_interfaces::srv::PathPlanTarget_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPlanTarget_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->plan_found != other.plan_found) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPlanTarget_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPlanTarget_Response_

// alias to use template instance with default allocator
using PathPlanTarget_Response =
  gs_ros_interfaces::srv::PathPlanTarget_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{

namespace srv
{

struct PathPlanTarget
{
  using Request = gs_ros_interfaces::srv::PathPlanTarget_Request;
  using Response = gs_ros_interfaces::srv::PathPlanTarget_Response;
};

}  // namespace srv

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__STRUCT_HPP_
