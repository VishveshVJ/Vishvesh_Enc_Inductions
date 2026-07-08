#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__Contact() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__Contact__init(msg: *mut Contact) -> bool;
    fn gs_ros_interfaces__msg__Contact__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Contact>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__Contact__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Contact>);
    fn gs_ros_interfaces__msg__Contact__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Contact>, out_seq: *mut rosidl_runtime_rs::Sequence<Contact>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__Contact
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Binary contact state for a link

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Contact {

    // This member is not documented.
    #[allow(missing_docs)]
    pub link_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub in_contact: bool,

}



impl Default for Contact {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__Contact__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__Contact__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Contact {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__Contact__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__Contact__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__Contact__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Contact {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Contact where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/Contact";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__Contact() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__ContactForce() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__ContactForce__init(msg: *mut ContactForce) -> bool;
    fn gs_ros_interfaces__msg__ContactForce__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ContactForce>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__ContactForce__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ContactForce>);
    fn gs_ros_interfaces__msg__ContactForce__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ContactForce>, out_seq: *mut rosidl_runtime_rs::Sequence<ContactForce>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__ContactForce
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Measured contact force on a link

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ContactForce {

    // This member is not documented.
    #[allow(missing_docs)]
    pub link_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_force: geometry_msgs::msg::rmw::Vector3,

}



impl Default for ContactForce {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__ContactForce__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__ContactForce__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ContactForce {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ContactForce__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ContactForce__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ContactForce__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ContactForce {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ContactForce where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/ContactForce";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__ContactForce() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__RobotOptions() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__RobotOptions__init(msg: *mut RobotOptions) -> bool;
    fn gs_ros_interfaces__msg__RobotOptions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotOptions>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__RobotOptions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotOptions>);
    fn gs_ros_interfaces__msg__RobotOptions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotOptions>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotOptions>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__RobotOptions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Configuration for robot-specific ROS interfacing

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_states_topic: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_states_topic_frequency: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_commands_topic: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_commands_topic_frequency: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints_control_topic: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints_control_topic_frequency: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_properties: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointProperty>,

}



impl Default for RobotOptions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__RobotOptions__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__RobotOptions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotOptions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__RobotOptions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__RobotOptions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__RobotOptions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotOptions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotOptions where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/RobotOptions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__RobotOptions() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__JointProperty() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__JointProperty__init(msg: *mut JointProperty) -> bool;
    fn gs_ros_interfaces__msg__JointProperty__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointProperty>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__JointProperty__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointProperty>);
    fn gs_ros_interfaces__msg__JointProperty__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointProperty>, out_seq: *mut rosidl_runtime_rs::Sequence<JointProperty>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__JointProperty
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Physics and control properties for a robot joint

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointProperty {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// Proportional gain
    pub kp: f32,

    /// Velocity gain
    pub kv: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stiffness: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub damping: f32,

    /// [min_force, max_force]
    pub force_range: rosidl_runtime_rs::Sequence<f32>,

    /// Control mode: position, velocity, or effort
    pub command: rosidl_runtime_rs::String,

}



impl Default for JointProperty {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__JointProperty__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__JointProperty__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointProperty {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__JointProperty__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__JointProperty__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__JointProperty__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointProperty {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointProperty where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/JointProperty";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__JointProperty() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__RigidSensorOptions() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__RigidSensorOptions__init(msg: *mut RigidSensorOptions) -> bool;
    fn gs_ros_interfaces__msg__RigidSensorOptions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RigidSensorOptions>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__RigidSensorOptions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RigidSensorOptions>);
    fn gs_ros_interfaces__msg__RigidSensorOptions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RigidSensorOptions>, out_seq: *mut rosidl_runtime_rs::Sequence<RigidSensorOptions>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__RigidSensorOptions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Attachment properties for a sensor on a rigid body

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RigidSensorOptions {
    /// Name of the link to attach to
    pub link: rosidl_runtime_rs::String,

    /// Position offset [x, y, z]
    pub pos_offset: [f64; 3],

    /// Rotation offset [roll, pitch, yaw]
    pub euler_offset: [f64; 3],

}



impl Default for RigidSensorOptions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__RigidSensorOptions__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__RigidSensorOptions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RigidSensorOptions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__RigidSensorOptions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__RigidSensorOptions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__RigidSensorOptions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RigidSensorOptions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RigidSensorOptions where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/RigidSensorOptions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__RigidSensorOptions() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__NoisySensorOptions() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__NoisySensorOptions__init(msg: *mut NoisySensorOptions) -> bool;
    fn gs_ros_interfaces__msg__NoisySensorOptions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NoisySensorOptions>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__NoisySensorOptions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NoisySensorOptions>);
    fn gs_ros_interfaces__msg__NoisySensorOptions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NoisySensorOptions>, out_seq: *mut rosidl_runtime_rs::Sequence<NoisySensorOptions>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__NoisySensorOptions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Common noise parameters for sensors

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NoisySensorOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bias: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noise: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub random_walk: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub jitter: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub interpolate: bool,

}



impl Default for NoisySensorOptions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__NoisySensorOptions__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__NoisySensorOptions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NoisySensorOptions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__NoisySensorOptions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__NoisySensorOptions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__NoisySensorOptions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NoisySensorOptions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NoisySensorOptions where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/NoisySensorOptions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__NoisySensorOptions() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__GeneralSensorOptions() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__GeneralSensorOptions__init(msg: *mut GeneralSensorOptions) -> bool;
    fn gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GeneralSensorOptions>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GeneralSensorOptions>);
    fn gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GeneralSensorOptions>, out_seq: *mut rosidl_runtime_rs::Sequence<GeneralSensorOptions>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__GeneralSensorOptions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Common sensor properties

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GeneralSensorOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// e.g., cam, lidar, imu
    pub sensor_type: rosidl_runtime_rs::String,

    /// Simulated sensor delay
    pub delay: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub update_ground_truth_only: bool,

    /// Enable visualization in sim
    pub draw_debug: bool,

}



impl Default for GeneralSensorOptions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__GeneralSensorOptions__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__GeneralSensorOptions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GeneralSensorOptions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GeneralSensorOptions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GeneralSensorOptions where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/GeneralSensorOptions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__GeneralSensorOptions() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__RosSensorOptions() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__RosSensorOptions__init(msg: *mut RosSensorOptions) -> bool;
    fn gs_ros_interfaces__msg__RosSensorOptions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RosSensorOptions>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__RosSensorOptions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RosSensorOptions>);
    fn gs_ros_interfaces__msg__RosSensorOptions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RosSensorOptions>, out_seq: *mut rosidl_runtime_rs::Sequence<RosSensorOptions>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__RosSensorOptions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ROS-specific sensor configuration

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RosSensorOptions {
    /// TF frame name
    pub frame_id: rosidl_runtime_rs::String,

    /// Publishing frequency
    pub frequency: f32,

    /// ROS topic name
    pub topic: rosidl_runtime_rs::String,

    /// keep_last or keep_all
    pub qos_history: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qos_depth: i32,

    /// reliable or best_effort
    pub qos_reliability: rosidl_runtime_rs::String,

    /// volatile or transient_local
    pub qos_durability: rosidl_runtime_rs::String,

}



impl Default for RosSensorOptions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__RosSensorOptions__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__RosSensorOptions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RosSensorOptions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__RosSensorOptions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__RosSensorOptions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__RosSensorOptions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RosSensorOptions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RosSensorOptions where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/RosSensorOptions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__RosSensorOptions() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__CameraOptions() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__CameraOptions__init(msg: *mut CameraOptions) -> bool;
    fn gs_ros_interfaces__msg__CameraOptions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraOptions>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__CameraOptions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraOptions>);
    fn gs_ros_interfaces__msg__CameraOptions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraOptions>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraOptions>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__CameraOptions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Configuration options for a camera sensor

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::super::msg::rmw::GeneralSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_options: super::super::msg::rmw::RosSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rigid_options: super::super::msg::rmw::RigidSensorOptions,

    /// e.g., ["rgb", "depth"]
    pub camera_types: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// [width, height]
    pub res: rosidl_runtime_rs::Sequence<i32>,

    /// Field of view in degrees
    pub fov: f32,

    /// Near clipping plane
    pub near: f32,

    /// Far clipping plane
    pub far: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aperture: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub denoise: bool,

    /// Samples per pixel
    pub spp: i32,

    /// e.g., "pinhole"
    pub model: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub focus_dist: f32,

    /// Visibility in simulation GUI
    pub gui: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub add_noise: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noise_mean: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noise_std: f32,

}



impl Default for CameraOptions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__CameraOptions__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__CameraOptions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraOptions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__CameraOptions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__CameraOptions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__CameraOptions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraOptions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraOptions where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/CameraOptions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__CameraOptions() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__LidarOptions() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__LidarOptions__init(msg: *mut LidarOptions) -> bool;
    fn gs_ros_interfaces__msg__LidarOptions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LidarOptions>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__LidarOptions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LidarOptions>);
    fn gs_ros_interfaces__msg__LidarOptions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LidarOptions>, out_seq: *mut rosidl_runtime_rs::Sequence<LidarOptions>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__LidarOptions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Configuration for Lidar sensors (spherical, grid, sectional)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LidarOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::super::msg::rmw::GeneralSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_options: super::super::msg::rmw::RosSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rigid_options: super::super::msg::rmw::RigidSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub grid_pattern_options: super::super::msg::rmw::GridRayCasterPattern,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spherical_pattern_options: super::super::msg::rmw::SphericalRayCasterPattern,


    // This member is not documented.
    #[allow(missing_docs)]
    pub depth_camera_pattern_options: super::super::msg::rmw::DepthCameraRayCasterPattern,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min_range: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_range: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub no_hit_value: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub return_points_in_world_frame: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub draw_point_radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ray_start_color: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ray_hit_color: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub add_noise: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noise_mean: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noise_std: f32,

}



impl Default for LidarOptions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__LidarOptions__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__LidarOptions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LidarOptions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__LidarOptions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__LidarOptions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__LidarOptions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LidarOptions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LidarOptions where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/LidarOptions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__LidarOptions() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__ImuOptions() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__ImuOptions__init(msg: *mut ImuOptions) -> bool;
    fn gs_ros_interfaces__msg__ImuOptions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ImuOptions>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__ImuOptions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ImuOptions>);
    fn gs_ros_interfaces__msg__ImuOptions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ImuOptions>, out_seq: *mut rosidl_runtime_rs::Sequence<ImuOptions>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__ImuOptions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Configuration for an IMU sensor

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ImuOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::super::msg::rmw::GeneralSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_options: super::super::msg::rmw::RosSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rigid_options: super::super::msg::rmw::RigidSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noisy_options: super::super::msg::rmw::NoisySensorOptions,

    /// Accelerometer parameters
    pub acc_resolution: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_cross_axis_coupling: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_bias: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_noise: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_random_walk: rosidl_runtime_rs::Sequence<f32>,

    /// Gyroscope parameters
    pub gyro_resolution: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_cross_axis_coupling: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_bias: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_noise: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_random_walk: rosidl_runtime_rs::Sequence<f32>,

    /// Debug visualization
    pub debug_acc_color: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_acc_scale: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_gyro_color: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_gyro_scale: f32,

}



impl Default for ImuOptions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__ImuOptions__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__ImuOptions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ImuOptions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ImuOptions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ImuOptions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ImuOptions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ImuOptions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ImuOptions where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/ImuOptions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__ImuOptions() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__ContactOptions() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__ContactOptions__init(msg: *mut ContactOptions) -> bool;
    fn gs_ros_interfaces__msg__ContactOptions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ContactOptions>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__ContactOptions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ContactOptions>);
    fn gs_ros_interfaces__msg__ContactOptions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ContactOptions>, out_seq: *mut rosidl_runtime_rs::Sequence<ContactOptions>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__ContactOptions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Configuration for a binary contact sensor

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ContactOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::super::msg::rmw::GeneralSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_options: super::super::msg::rmw::RosSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rigid_options: super::super::msg::rmw::RigidSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_sphere_radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_color: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for ContactOptions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__ContactOptions__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__ContactOptions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ContactOptions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ContactOptions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ContactOptions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ContactOptions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ContactOptions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ContactOptions where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/ContactOptions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__ContactOptions() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__ContactForceOptions() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__ContactForceOptions__init(msg: *mut ContactForceOptions) -> bool;
    fn gs_ros_interfaces__msg__ContactForceOptions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ContactForceOptions>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__ContactForceOptions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ContactForceOptions>);
    fn gs_ros_interfaces__msg__ContactForceOptions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ContactForceOptions>, out_seq: *mut rosidl_runtime_rs::Sequence<ContactForceOptions>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__ContactForceOptions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Configuration for a contact force sensor

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ContactForceOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::super::msg::rmw::GeneralSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_options: super::super::msg::rmw::RosSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rigid_options: super::super::msg::rmw::RigidSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noisy_options: super::super::msg::rmw::NoisySensorOptions,

    /// Lower bounds for force measurement
    pub min_force: rosidl_runtime_rs::Sequence<f32>,

    /// Upper bounds for force measurement
    pub max_force: rosidl_runtime_rs::Sequence<f32>,

    /// visualization color [r, g, b, a]
    pub debug_color: rosidl_runtime_rs::Sequence<f32>,

    /// Scale of debug vectors
    pub debug_scale: f32,

}



impl Default for ContactForceOptions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__ContactForceOptions__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__ContactForceOptions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ContactForceOptions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ContactForceOptions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ContactForceOptions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__ContactForceOptions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ContactForceOptions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ContactForceOptions where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/ContactForceOptions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__ContactForceOptions() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__GridRayCasterPattern() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__GridRayCasterPattern__init(msg: *mut GridRayCasterPattern) -> bool;
    fn gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GridRayCasterPattern>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GridRayCasterPattern>);
    fn gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GridRayCasterPattern>, out_seq: *mut rosidl_runtime_rs::Sequence<GridRayCasterPattern>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__GridRayCasterPattern
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GridRayCasterPattern {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub size: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub direction: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for GridRayCasterPattern {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__GridRayCasterPattern__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__GridRayCasterPattern__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GridRayCasterPattern {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GridRayCasterPattern {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GridRayCasterPattern where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/GridRayCasterPattern";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__GridRayCasterPattern() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__SphericalRayCasterPattern() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__SphericalRayCasterPattern__init(msg: *mut SphericalRayCasterPattern) -> bool;
    fn gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SphericalRayCasterPattern>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SphericalRayCasterPattern>);
    fn gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SphericalRayCasterPattern>, out_seq: *mut rosidl_runtime_rs::Sequence<SphericalRayCasterPattern>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__SphericalRayCasterPattern
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SphericalRayCasterPattern {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fov: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub n_points: rosidl_runtime_rs::Sequence<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_resolution: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angles: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for SphericalRayCasterPattern {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__SphericalRayCasterPattern__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__SphericalRayCasterPattern__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SphericalRayCasterPattern {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SphericalRayCasterPattern {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SphericalRayCasterPattern where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/SphericalRayCasterPattern";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__SphericalRayCasterPattern() }
  }
}


#[link(name = "gs_ros_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__DepthCameraRayCasterPattern() -> *const std::ffi::c_void;
}

#[link(name = "gs_ros_interfaces__rosidl_generator_c")]
extern "C" {
    fn gs_ros_interfaces__msg__DepthCameraRayCasterPattern__init(msg: *mut DepthCameraRayCasterPattern) -> bool;
    fn gs_ros_interfaces__msg__DepthCameraRayCasterPattern__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DepthCameraRayCasterPattern>, size: usize) -> bool;
    fn gs_ros_interfaces__msg__DepthCameraRayCasterPattern__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DepthCameraRayCasterPattern>);
    fn gs_ros_interfaces__msg__DepthCameraRayCasterPattern__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DepthCameraRayCasterPattern>, out_seq: *mut rosidl_runtime_rs::Sequence<DepthCameraRayCasterPattern>) -> bool;
}

// Corresponds to gs_ros_interfaces__msg__DepthCameraRayCasterPattern
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DepthCameraRayCasterPattern {

    // This member is not documented.
    #[allow(missing_docs)]
    pub res: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fx: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fy: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cx: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cy: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fov_horizontal: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fov_vertical: f32,

}



impl Default for DepthCameraRayCasterPattern {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gs_ros_interfaces__msg__DepthCameraRayCasterPattern__init(&mut msg as *mut _) {
        panic!("Call to gs_ros_interfaces__msg__DepthCameraRayCasterPattern__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DepthCameraRayCasterPattern {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__DepthCameraRayCasterPattern__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__DepthCameraRayCasterPattern__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gs_ros_interfaces__msg__DepthCameraRayCasterPattern__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DepthCameraRayCasterPattern {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DepthCameraRayCasterPattern where Self: Sized {
  const TYPE_NAME: &'static str = "gs_ros_interfaces/msg/DepthCameraRayCasterPattern";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gs_ros_interfaces__msg__DepthCameraRayCasterPattern() }
  }
}


