#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "kratos_vishvesh_q2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kratos_vishvesh_q2_msgs__msg__RoverStatus() -> *const std::ffi::c_void;
}

#[link(name = "kratos_vishvesh_q2_msgs__rosidl_generator_c")]
extern "C" {
    fn kratos_vishvesh_q2_msgs__msg__RoverStatus__init(msg: *mut RoverStatus) -> bool;
    fn kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RoverStatus>, size: usize) -> bool;
    fn kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RoverStatus>);
    fn kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RoverStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RoverStatus>) -> bool;
}

// Corresponds to kratos_vishvesh_q2_msgs__msg__RoverStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percentage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emergency_stop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: rosidl_runtime_rs::String,

}



impl Default for RoverStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kratos_vishvesh_q2_msgs__msg__RoverStatus__init(&mut msg as *mut _) {
        panic!("Call to kratos_vishvesh_q2_msgs__msg__RoverStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RoverStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RoverStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RoverStatus where Self: Sized {
  const TYPE_NAME: &'static str = "kratos_vishvesh_q2_msgs/msg/RoverStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kratos_vishvesh_q2_msgs__msg__RoverStatus() }
  }
}


