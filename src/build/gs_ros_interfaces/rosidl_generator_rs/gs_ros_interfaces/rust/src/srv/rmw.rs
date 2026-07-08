#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetEntityPose_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__SetEntityPose_Request__init(msg: *mut SetEntityPose_Request) -> bool;
    fn gs_ros_interfaces__srv__SetEntityPose_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetEntityPose_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__SetEntityPose_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetEntityPose_Request>);
    fn gs_ros_interfaces__srv__SetEntityPose_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetEntityPose_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetEntityPose_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__SetEntityPose_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for SetEntityPose_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__SetEntityPose_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__SetEntityPose_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetEntityPose_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetEntityPose_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetEntityPose_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetEntityPose_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetEntityPose_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetEntityPose_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/SetEntityPose_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetEntityPose_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetEntityPose_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__SetEntityPose_Response__init(msg: *mut SetEntityPose_Response) -> bool;
    fn gs_ros_interfaces__srv__SetEntityPose_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetEntityPose_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__SetEntityPose_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetEntityPose_Response>);
    fn gs_ros_interfaces__srv__SetEntityPose_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetEntityPose_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetEntityPose_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__SetEntityPose_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetEntityPose_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__SetEntityPose_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__SetEntityPose_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetEntityPose_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetEntityPose_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetEntityPose_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetEntityPose_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetEntityPose_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetEntityPose_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/SetEntityPose_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetEntityPose_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetEntityPose_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__GetEntityPose_Request__init(msg: *mut GetEntityPose_Request) -> bool;
    fn gs_ros_interfaces__srv__GetEntityPose_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntityPose_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__GetEntityPose_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntityPose_Request>);
    fn gs_ros_interfaces__srv__GetEntityPose_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntityPose_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntityPose_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__GetEntityPose_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_name: rosidl_runtime_rs::String,

}



impl Default for GetEntityPose_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__GetEntityPose_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__GetEntityPose_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntityPose_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetEntityPose_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetEntityPose_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetEntityPose_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntityPose_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntityPose_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/GetEntityPose_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetEntityPose_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetEntityPose_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__GetEntityPose_Response__init(msg: *mut GetEntityPose_Response) -> bool;
    fn gs_ros_interfaces__srv__GetEntityPose_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntityPose_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__GetEntityPose_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntityPose_Response>);
    fn gs_ros_interfaces__srv__GetEntityPose_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntityPose_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntityPose_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__GetEntityPose_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetEntityPose_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__GetEntityPose_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__GetEntityPose_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntityPose_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetEntityPose_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetEntityPose_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetEntityPose_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntityPose_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntityPose_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/GetEntityPose_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetEntityPose_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__PathPlanTarget_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__PathPlanTarget_Request__init(msg: *mut PathPlanTarget_Request) -> bool;
    fn gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathPlanTarget_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathPlanTarget_Request>);
    fn gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathPlanTarget_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PathPlanTarget_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__PathPlanTarget_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathPlanTarget_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attached_intity: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_link_name: rosidl_runtime_rs::String,

    /// Goal joint angles
    pub goal_state: rosidl_runtime_rs::Sequence<f64>,

    /// Starting joint angles
    pub start_state: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_nodes: i32,

    /// Path resolution
    pub resolution: f64,

    /// Planning timeout in seconds
    pub timeout: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_retries: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub smooth_path: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_waypoints: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ignore_collision: bool,

    /// Planner type (e.g., RRT)
    pub planner: rosidl_runtime_rs::String,

    /// End-effector link
    pub ee_link_name: rosidl_runtime_rs::String,

    /// Show path in GUI
    pub visualize: bool,

    /// Execute path on robot
    pub execute: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_pos: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tolerance: f64,

}



impl Default for PathPlanTarget_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__PathPlanTarget_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__PathPlanTarget_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathPlanTarget_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathPlanTarget_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathPlanTarget_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/PathPlanTarget_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__PathPlanTarget_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__PathPlanTarget_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__PathPlanTarget_Response__init(msg: *mut PathPlanTarget_Response) -> bool;
    fn gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathPlanTarget_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathPlanTarget_Response>);
    fn gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathPlanTarget_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PathPlanTarget_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__PathPlanTarget_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathPlanTarget_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub plan_found: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// Flattened path [w1_j1, w1_j2, ..., wN_jM]
    pub path: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for PathPlanTarget_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__PathPlanTarget_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__PathPlanTarget_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathPlanTarget_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathPlanTarget_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathPlanTarget_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/PathPlanTarget_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__PathPlanTarget_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__IKTarget_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__IKTarget_Request__init(msg: *mut IKTarget_Request) -> bool;
    fn gs_ros_interfaces__srv__IKTarget_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IKTarget_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__IKTarget_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IKTarget_Request>);
    fn gs_ros_interfaces__srv__IKTarget_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IKTarget_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IKTarget_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__IKTarget_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IKTarget_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_link_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation: geometry_msgs::msg::rmw::Quaternion,

    /// Starting joint positions
    pub init_robot_pos: rosidl_runtime_rs::Sequence<f64>,

    /// Respect joint limits
    pub request_joint_limit: bool,

    /// random restarts
    pub max_samples: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_solver_iterartions: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub damping: f64,

    /// Position tolerance
    pub pos_tol: f64,

    /// Rotation tolerance
    pub rot_tol: f64,

    /// [x, y, z] mask
    pub pos_mask: rosidl_runtime_rs::Sequence<bool>,

    /// [roll, pitch, yaw] mask
    pub rot_mask: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_step_size: f64,

    /// DOFs to optimize
    pub dofs_idx_local: rosidl_runtime_rs::Sequence<i32>,

    /// Show ghost robot in GUI
    pub visualize: bool,

    /// Apply solution to robot
    pub execute: bool,

}



impl Default for IKTarget_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__IKTarget_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__IKTarget_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IKTarget_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__IKTarget_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__IKTarget_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__IKTarget_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IKTarget_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IKTarget_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/IKTarget_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__IKTarget_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__IKTarget_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__IKTarget_Response__init(msg: *mut IKTarget_Response) -> bool;
    fn gs_ros_interfaces__srv__IKTarget_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IKTarget_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__IKTarget_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IKTarget_Response>);
    fn gs_ros_interfaces__srv__IKTarget_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IKTarget_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IKTarget_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__IKTarget_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IKTarget_Response {
    /// Service call status
    pub success: bool,

    /// If solver converged
    pub solution_found: bool,

    /// Resulting DOF positions
    pub joint_angles: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_pos_error: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_quat_error: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for IKTarget_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__IKTarget_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__IKTarget_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IKTarget_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__IKTarget_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__IKTarget_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__IKTarget_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IKTarget_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IKTarget_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/IKTarget_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__IKTarget_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__FKTarget_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__FKTarget_Request__init(msg: *mut FKTarget_Request) -> bool;
    fn gs_ros_interfaces__srv__FKTarget_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FKTarget_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__FKTarget_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FKTarget_Request>);
    fn gs_ros_interfaces__srv__FKTarget_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FKTarget_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FKTarget_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__FKTarget_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FKTarget_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,

    /// Joint positions to calculate FK for
    pub qpos: rosidl_runtime_rs::Sequence<f64>,

    /// Optional: specific DOFs
    pub dof_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Links to calculate poses for
    pub link_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for FKTarget_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__FKTarget_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__FKTarget_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FKTarget_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__FKTarget_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__FKTarget_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__FKTarget_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FKTarget_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FKTarget_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/FKTarget_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__FKTarget_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__FKTarget_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__FKTarget_Response__init(msg: *mut FKTarget_Response) -> bool;
    fn gs_ros_interfaces__srv__FKTarget_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FKTarget_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__FKTarget_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FKTarget_Response>);
    fn gs_ros_interfaces__srv__FKTarget_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FKTarget_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FKTarget_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__FKTarget_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FKTarget_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_pos: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_quat: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Quaternion>,

}



impl Default for FKTarget_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__FKTarget_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__FKTarget_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FKTarget_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__FKTarget_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__FKTarget_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__FKTarget_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FKTarget_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FKTarget_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/FKTarget_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__FKTarget_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SuctionSwitch_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__SuctionSwitch_Request__init(msg: *mut SuctionSwitch_Request) -> bool;
    fn gs_ros_interfaces__srv__SuctionSwitch_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SuctionSwitch_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__SuctionSwitch_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SuctionSwitch_Request>);
    fn gs_ros_interfaces__srv__SuctionSwitch_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SuctionSwitch_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SuctionSwitch_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__SuctionSwitch_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SuctionSwitch_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_one: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_one: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_two: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_two: rosidl_runtime_rs::String,

    /// True to enable, False to disable
    pub command: bool,

}



impl Default for SuctionSwitch_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__SuctionSwitch_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__SuctionSwitch_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SuctionSwitch_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SuctionSwitch_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SuctionSwitch_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SuctionSwitch_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SuctionSwitch_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SuctionSwitch_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/SuctionSwitch_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SuctionSwitch_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SuctionSwitch_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__SuctionSwitch_Response__init(msg: *mut SuctionSwitch_Response) -> bool;
    fn gs_ros_interfaces__srv__SuctionSwitch_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SuctionSwitch_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__SuctionSwitch_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SuctionSwitch_Response>);
    fn gs_ros_interfaces__srv__SuctionSwitch_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SuctionSwitch_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SuctionSwitch_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__SuctionSwitch_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SuctionSwitch_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SuctionSwitch_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__SuctionSwitch_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__SuctionSwitch_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SuctionSwitch_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SuctionSwitch_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SuctionSwitch_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SuctionSwitch_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SuctionSwitch_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SuctionSwitch_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/SuctionSwitch_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SuctionSwitch_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__JoinEntities_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__JoinEntities_Request__init(msg: *mut JoinEntities_Request) -> bool;
    fn gs_ros_interfaces__srv__JoinEntities_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JoinEntities_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__JoinEntities_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JoinEntities_Request>);
    fn gs_ros_interfaces__srv__JoinEntities_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JoinEntities_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<JoinEntities_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__JoinEntities_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JoinEntities_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_one: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_one: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_one_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_two: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_two: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_two_type: rosidl_runtime_rs::String,

}



impl Default for JoinEntities_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__JoinEntities_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__JoinEntities_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JoinEntities_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__JoinEntities_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__JoinEntities_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__JoinEntities_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JoinEntities_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JoinEntities_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/JoinEntities_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__JoinEntities_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__JoinEntities_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__JoinEntities_Response__init(msg: *mut JoinEntities_Response) -> bool;
    fn gs_ros_interfaces__srv__JoinEntities_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JoinEntities_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__JoinEntities_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JoinEntities_Response>);
    fn gs_ros_interfaces__srv__JoinEntities_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JoinEntities_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<JoinEntities_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__JoinEntities_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JoinEntities_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for JoinEntities_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__JoinEntities_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__JoinEntities_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JoinEntities_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__JoinEntities_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__JoinEntities_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__JoinEntities_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JoinEntities_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JoinEntities_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/JoinEntities_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__JoinEntities_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__StartRecording_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__StartRecording_Request__init(msg: *mut StartRecording_Request) -> bool;
    fn gs_ros_interfaces__srv__StartRecording_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartRecording_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__StartRecording_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartRecording_Request>);
    fn gs_ros_interfaces__srv__StartRecording_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartRecording_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StartRecording_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__StartRecording_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRecording_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

}



impl Default for StartRecording_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__StartRecording_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__StartRecording_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartRecording_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StartRecording_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StartRecording_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StartRecording_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartRecording_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartRecording_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/StartRecording_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__StartRecording_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__StartRecording_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__StartRecording_Response__init(msg: *mut StartRecording_Response) -> bool;
    fn gs_ros_interfaces__srv__StartRecording_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartRecording_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__StartRecording_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartRecording_Response>);
    fn gs_ros_interfaces__srv__StartRecording_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartRecording_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StartRecording_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__StartRecording_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRecording_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for StartRecording_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__StartRecording_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__StartRecording_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartRecording_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StartRecording_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StartRecording_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StartRecording_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartRecording_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartRecording_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/StartRecording_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__StartRecording_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__PauseRecording_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__PauseRecording_Request__init(msg: *mut PauseRecording_Request) -> bool;
    fn gs_ros_interfaces__srv__PauseRecording_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PauseRecording_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__PauseRecording_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PauseRecording_Request>);
    fn gs_ros_interfaces__srv__PauseRecording_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PauseRecording_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PauseRecording_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__PauseRecording_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PauseRecording_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

}



impl Default for PauseRecording_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__PauseRecording_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__PauseRecording_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PauseRecording_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PauseRecording_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PauseRecording_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PauseRecording_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PauseRecording_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PauseRecording_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/PauseRecording_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__PauseRecording_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__PauseRecording_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__PauseRecording_Response__init(msg: *mut PauseRecording_Response) -> bool;
    fn gs_ros_interfaces__srv__PauseRecording_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PauseRecording_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__PauseRecording_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PauseRecording_Response>);
    fn gs_ros_interfaces__srv__PauseRecording_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PauseRecording_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PauseRecording_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__PauseRecording_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PauseRecording_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for PauseRecording_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__PauseRecording_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__PauseRecording_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PauseRecording_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PauseRecording_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PauseRecording_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__PauseRecording_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PauseRecording_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PauseRecording_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/PauseRecording_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__PauseRecording_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__StopRecording_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__StopRecording_Request__init(msg: *mut StopRecording_Request) -> bool;
    fn gs_ros_interfaces__srv__StopRecording_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopRecording_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__StopRecording_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopRecording_Request>);
    fn gs_ros_interfaces__srv__StopRecording_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopRecording_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StopRecording_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__StopRecording_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopRecording_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub file_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fps: f64,

}



impl Default for StopRecording_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__StopRecording_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__StopRecording_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopRecording_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StopRecording_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StopRecording_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StopRecording_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopRecording_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopRecording_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/StopRecording_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__StopRecording_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__StopRecording_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__StopRecording_Response__init(msg: *mut StopRecording_Response) -> bool;
    fn gs_ros_interfaces__srv__StopRecording_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopRecording_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__StopRecording_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopRecording_Response>);
    fn gs_ros_interfaces__srv__StopRecording_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopRecording_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StopRecording_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__StopRecording_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopRecording_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for StopRecording_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__StopRecording_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__StopRecording_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopRecording_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StopRecording_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StopRecording_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__StopRecording_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopRecording_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopRecording_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/StopRecording_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__StopRecording_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetPhysicsAttributes_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__SetPhysicsAttributes_Request__init(msg: *mut SetPhysicsAttributes_Request) -> bool;
    fn gs_ros_interfaces__srv__SetPhysicsAttributes_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPhysicsAttributes_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__SetPhysicsAttributes_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPhysicsAttributes_Request>);
    fn gs_ros_interfaces__srv__SetPhysicsAttributes_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPhysicsAttributes_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPhysicsAttributes_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__SetPhysicsAttributes_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPhysicsAttributes_Request {
    /// e.g., kp, kv, mass, damping
    pub attribute: rosidl_runtime_rs::String,

    /// Parent entity names
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Joint or link names
    pub dof_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// New values
    pub value: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SetPhysicsAttributes_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__SetPhysicsAttributes_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__SetPhysicsAttributes_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPhysicsAttributes_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetPhysicsAttributes_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetPhysicsAttributes_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetPhysicsAttributes_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPhysicsAttributes_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPhysicsAttributes_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/SetPhysicsAttributes_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetPhysicsAttributes_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetPhysicsAttributes_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__SetPhysicsAttributes_Response__init(msg: *mut SetPhysicsAttributes_Response) -> bool;
    fn gs_ros_interfaces__srv__SetPhysicsAttributes_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPhysicsAttributes_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__SetPhysicsAttributes_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPhysicsAttributes_Response>);
    fn gs_ros_interfaces__srv__SetPhysicsAttributes_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPhysicsAttributes_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPhysicsAttributes_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__SetPhysicsAttributes_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPhysicsAttributes_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetPhysicsAttributes_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__SetPhysicsAttributes_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__SetPhysicsAttributes_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPhysicsAttributes_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetPhysicsAttributes_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetPhysicsAttributes_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetPhysicsAttributes_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPhysicsAttributes_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPhysicsAttributes_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/SetPhysicsAttributes_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetPhysicsAttributes_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__BuildSimulator_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__BuildSimulator_Request__init(msg: *mut BuildSimulator_Request) -> bool;
    fn gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BuildSimulator_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BuildSimulator_Request>);
    fn gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BuildSimulator_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<BuildSimulator_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__BuildSimulator_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BuildSimulator_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for BuildSimulator_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__BuildSimulator_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__BuildSimulator_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BuildSimulator_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BuildSimulator_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BuildSimulator_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/BuildSimulator_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__BuildSimulator_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__BuildSimulator_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__BuildSimulator_Response__init(msg: *mut BuildSimulator_Response) -> bool;
    fn gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BuildSimulator_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BuildSimulator_Response>);
    fn gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BuildSimulator_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<BuildSimulator_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__BuildSimulator_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BuildSimulator_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: simulation_interfaces::msg::rmw::Result,

}



impl Default for BuildSimulator_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__BuildSimulator_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__BuildSimulator_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BuildSimulator_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BuildSimulator_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BuildSimulator_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/BuildSimulator_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__BuildSimulator_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetRobotOptions_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__GetRobotOptions_Request__init(msg: *mut GetRobotOptions_Request) -> bool;
    fn gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRobotOptions_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRobotOptions_Request>);
    fn gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRobotOptions_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRobotOptions_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__GetRobotOptions_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotOptions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity: rosidl_runtime_rs::String,

}



impl Default for GetRobotOptions_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__GetRobotOptions_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__GetRobotOptions_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRobotOptions_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRobotOptions_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRobotOptions_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/GetRobotOptions_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetRobotOptions_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetRobotOptions_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__GetRobotOptions_Response__init(msg: *mut GetRobotOptions_Response) -> bool;
    fn gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRobotOptions_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRobotOptions_Response>);
    fn gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRobotOptions_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRobotOptions_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__GetRobotOptions_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotOptions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::super::msg::rmw::RobotOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: simulation_interfaces::msg::rmw::Result,

}



impl Default for GetRobotOptions_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__GetRobotOptions_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__GetRobotOptions_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRobotOptions_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRobotOptions_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRobotOptions_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/GetRobotOptions_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetRobotOptions_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetRobotOptions_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__SetRobotOptions_Request__init(msg: *mut SetRobotOptions_Request) -> bool;
    fn gs_ros_interfaces__srv__SetRobotOptions_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetRobotOptions_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__SetRobotOptions_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetRobotOptions_Request>);
    fn gs_ros_interfaces__srv__SetRobotOptions_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetRobotOptions_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetRobotOptions_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__SetRobotOptions_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotOptions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::super::msg::rmw::RobotOptions,

}



impl Default for SetRobotOptions_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__SetRobotOptions_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__SetRobotOptions_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetRobotOptions_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetRobotOptions_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetRobotOptions_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetRobotOptions_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetRobotOptions_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetRobotOptions_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/SetRobotOptions_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetRobotOptions_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetRobotOptions_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__SetRobotOptions_Response__init(msg: *mut SetRobotOptions_Response) -> bool;
    fn gs_ros_interfaces__srv__SetRobotOptions_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetRobotOptions_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__SetRobotOptions_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetRobotOptions_Response>);
    fn gs_ros_interfaces__srv__SetRobotOptions_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetRobotOptions_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetRobotOptions_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__SetRobotOptions_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotOptions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: simulation_interfaces::msg::rmw::Result,

}



impl Default for SetRobotOptions_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__SetRobotOptions_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__SetRobotOptions_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetRobotOptions_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetRobotOptions_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetRobotOptions_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetRobotOptions_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetRobotOptions_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetRobotOptions_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/SetRobotOptions_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetRobotOptions_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetSensorOptions_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__GetSensorOptions_Request__init(msg: *mut GetSensorOptions_Request) -> bool;
    fn gs_ros_interfaces__srv__GetSensorOptions_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSensorOptions_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__GetSensorOptions_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSensorOptions_Request>);
    fn gs_ros_interfaces__srv__GetSensorOptions_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSensorOptions_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSensorOptions_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__GetSensorOptions_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSensorOptions_Request {
    /// Entity name or regex pattern
    pub entity: rosidl_runtime_rs::String,

    /// Optional: specific sensor names
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Optional: specific sensor types (e.g. cam, lidar)
    pub sensor_types: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for GetSensorOptions_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__GetSensorOptions_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__GetSensorOptions_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSensorOptions_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetSensorOptions_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetSensorOptions_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetSensorOptions_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSensorOptions_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSensorOptions_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/GetSensorOptions_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetSensorOptions_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetSensorOptions_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__GetSensorOptions_Response__init(msg: *mut GetSensorOptions_Response) -> bool;
    fn gs_ros_interfaces__srv__GetSensorOptions_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSensorOptions_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__GetSensorOptions_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSensorOptions_Response>);
    fn gs_ros_interfaces__srv__GetSensorOptions_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSensorOptions_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSensorOptions_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__GetSensorOptions_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSensorOptions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cameras: rosidl_runtime_rs::Sequence<super::super::msg::rmw::CameraOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lidars: rosidl_runtime_rs::Sequence<super::super::msg::rmw::LidarOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imus: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ImuOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contacts: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ContactOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_forces: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ContactForceOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: simulation_interfaces::msg::rmw::Result,

}



impl Default for GetSensorOptions_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__GetSensorOptions_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__GetSensorOptions_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSensorOptions_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetSensorOptions_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetSensorOptions_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__GetSensorOptions_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSensorOptions_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSensorOptions_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/GetSensorOptions_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__GetSensorOptions_Response() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetSensorOptions_Request() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__SetSensorOptions_Request__init(msg: *mut SetSensorOptions_Request) -> bool;
    fn gs_ros_interfaces__srv__SetSensorOptions_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSensorOptions_Request>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__SetSensorOptions_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSensorOptions_Request>);
    fn gs_ros_interfaces__srv__SetSensorOptions_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSensorOptions_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSensorOptions_Request>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__SetSensorOptions_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSensorOptions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cameras: rosidl_runtime_rs::Sequence<super::super::msg::rmw::CameraOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lidars: rosidl_runtime_rs::Sequence<super::super::msg::rmw::LidarOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imus: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ImuOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contacts: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ContactOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_forces: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ContactForceOptions>,

}



impl Default for SetSensorOptions_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__SetSensorOptions_Request__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__SetSensorOptions_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSensorOptions_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetSensorOptions_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetSensorOptions_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetSensorOptions_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSensorOptions_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSensorOptions_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/SetSensorOptions_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetSensorOptions_Request() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetSensorOptions_Response() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__srv__SetSensorOptions_Response__init(msg: *mut SetSensorOptions_Response) -> bool;
    fn gs_ros_interfaces__srv__SetSensorOptions_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSensorOptions_Response>, size: usize) -> bool;
    fn gs_ros_interfaces__srv__SetSensorOptions_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSensorOptions_Response>);
    fn gs_ros_interfaces__srv__SetSensorOptions_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSensorOptions_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSensorOptions_Response>) -> bool;
}

// Corresponds to gs_ros_interfaces__srv__SetSensorOptions_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSensorOptions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: simulation_interfaces::msg::rmw::Result,

}



impl Default for SetSensorOptions_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__srv__SetSensorOptions_Response__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__srv__SetSensorOptions_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSensorOptions_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetSensorOptions_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetSensorOptions_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__srv__SetSensorOptions_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSensorOptions_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSensorOptions_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/srv/SetSensorOptions_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__srv__SetSensorOptions_Response() }
  }
}






#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__SetEntityPose() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__SetEntityPose
#[allow(missing_docs, non_camel_case_types)]
pub struct SetEntityPose;

impl rosidl_runtime_rs::Service for SetEntityPose {
    type Request = SetEntityPose_Request;
    type Response = SetEntityPose_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__SetEntityPose() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__GetEntityPose() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__GetEntityPose
#[allow(missing_docs, non_camel_case_types)]
pub struct GetEntityPose;

impl rosidl_runtime_rs::Service for GetEntityPose {
    type Request = GetEntityPose_Request;
    type Response = GetEntityPose_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__GetEntityPose() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__PathPlanTarget() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__PathPlanTarget
#[allow(missing_docs, non_camel_case_types)]
pub struct PathPlanTarget;

impl rosidl_runtime_rs::Service for PathPlanTarget {
    type Request = PathPlanTarget_Request;
    type Response = PathPlanTarget_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__PathPlanTarget() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__IKTarget() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__IKTarget
#[allow(missing_docs, non_camel_case_types)]
pub struct IKTarget;

impl rosidl_runtime_rs::Service for IKTarget {
    type Request = IKTarget_Request;
    type Response = IKTarget_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__IKTarget() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__FKTarget() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__FKTarget
#[allow(missing_docs, non_camel_case_types)]
pub struct FKTarget;

impl rosidl_runtime_rs::Service for FKTarget {
    type Request = FKTarget_Request;
    type Response = FKTarget_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__FKTarget() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__SuctionSwitch() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__SuctionSwitch
#[allow(missing_docs, non_camel_case_types)]
pub struct SuctionSwitch;

impl rosidl_runtime_rs::Service for SuctionSwitch {
    type Request = SuctionSwitch_Request;
    type Response = SuctionSwitch_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__SuctionSwitch() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__JoinEntities() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__JoinEntities
#[allow(missing_docs, non_camel_case_types)]
pub struct JoinEntities;

impl rosidl_runtime_rs::Service for JoinEntities {
    type Request = JoinEntities_Request;
    type Response = JoinEntities_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__JoinEntities() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__StartRecording() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__StartRecording
#[allow(missing_docs, non_camel_case_types)]
pub struct StartRecording;

impl rosidl_runtime_rs::Service for StartRecording {
    type Request = StartRecording_Request;
    type Response = StartRecording_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__StartRecording() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__PauseRecording() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__PauseRecording
#[allow(missing_docs, non_camel_case_types)]
pub struct PauseRecording;

impl rosidl_runtime_rs::Service for PauseRecording {
    type Request = PauseRecording_Request;
    type Response = PauseRecording_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__PauseRecording() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__StopRecording() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__StopRecording
#[allow(missing_docs, non_camel_case_types)]
pub struct StopRecording;

impl rosidl_runtime_rs::Service for StopRecording {
    type Request = StopRecording_Request;
    type Response = StopRecording_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__StopRecording() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__SetPhysicsAttributes() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__SetPhysicsAttributes
#[allow(missing_docs, non_camel_case_types)]
pub struct SetPhysicsAttributes;

impl rosidl_runtime_rs::Service for SetPhysicsAttributes {
    type Request = SetPhysicsAttributes_Request;
    type Response = SetPhysicsAttributes_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__SetPhysicsAttributes() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__BuildSimulator() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__BuildSimulator
#[allow(missing_docs, non_camel_case_types)]
pub struct BuildSimulator;

impl rosidl_runtime_rs::Service for BuildSimulator {
    type Request = BuildSimulator_Request;
    type Response = BuildSimulator_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__BuildSimulator() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__GetRobotOptions() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__GetRobotOptions
#[allow(missing_docs, non_camel_case_types)]
pub struct GetRobotOptions;

impl rosidl_runtime_rs::Service for GetRobotOptions {
    type Request = GetRobotOptions_Request;
    type Response = GetRobotOptions_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__GetRobotOptions() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__SetRobotOptions() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__SetRobotOptions
#[allow(missing_docs, non_camel_case_types)]
pub struct SetRobotOptions;

impl rosidl_runtime_rs::Service for SetRobotOptions {
    type Request = SetRobotOptions_Request;
    type Response = SetRobotOptions_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__SetRobotOptions() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__GetSensorOptions() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__GetSensorOptions
#[allow(missing_docs, non_camel_case_types)]
pub struct GetSensorOptions;

impl rosidl_runtime_rs::Service for GetSensorOptions {
    type Request = GetSensorOptions_Request;
    type Response = GetSensorOptions_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__GetSensorOptions() }
    }
}




#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__SetSensorOptions() -> *const std::ffi::c_void;
}

// Corresponds to gs_ros_interfaces__srv__SetSensorOptions
#[allow(missing_docs, non_camel_case_types)]
pub struct SetSensorOptions;

impl rosidl_runtime_rs::Service for SetSensorOptions {
    type Request = SetSensorOptions_Request;
    type Response = SetSensorOptions_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gs_ros_interfaces__srv__SetSensorOptions() }
    }
}


