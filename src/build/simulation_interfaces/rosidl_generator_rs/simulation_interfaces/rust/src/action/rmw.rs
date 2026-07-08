
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_Goal() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__action__SimulateSteps_Goal__init(msg: *mut SimulateSteps_Goal) -> bool;
    fn simulation_interfaces__action__SimulateSteps_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_Goal>, size: usize) -> bool;
    fn simulation_interfaces__action__SimulateSteps_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_Goal>);
    fn simulation_interfaces__action__SimulateSteps_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulateSteps_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_Goal>) -> bool;
}

// Corresponds to simulation_interfaces__action__SimulateSteps_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulateSteps_Goal {
    /// Action goal: step through the simulation loop this many times.
    pub steps: u64,

}



impl Default for SimulateSteps_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__action__SimulateSteps_Goal__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__action__SimulateSteps_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulateSteps_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulateSteps_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulateSteps_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/action/SimulateSteps_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_Goal() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_Result() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__action__SimulateSteps_Result__init(msg: *mut SimulateSteps_Result) -> bool;
    fn simulation_interfaces__action__SimulateSteps_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_Result>, size: usize) -> bool;
    fn simulation_interfaces__action__SimulateSteps_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_Result>);
    fn simulation_interfaces__action__SimulateSteps_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulateSteps_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_Result>) -> bool;
}

// Corresponds to simulation_interfaces__action__SimulateSteps_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulateSteps_Result {
    /// Calling with simulation unpaused will return OPERATION_FAILED and error message.
    pub result: super::super::msg::rmw::Result,

}



impl Default for SimulateSteps_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__action__SimulateSteps_Result__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__action__SimulateSteps_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulateSteps_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulateSteps_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulateSteps_Result where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/action/SimulateSteps_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_Result() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__action__SimulateSteps_Feedback__init(msg: *mut SimulateSteps_Feedback) -> bool;
    fn simulation_interfaces__action__SimulateSteps_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_Feedback>, size: usize) -> bool;
    fn simulation_interfaces__action__SimulateSteps_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_Feedback>);
    fn simulation_interfaces__action__SimulateSteps_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulateSteps_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_Feedback>) -> bool;
}

// Corresponds to simulation_interfaces__action__SimulateSteps_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulateSteps_Feedback {
    /// number of completed steps in this action so far.
    pub completed_steps: u64,

    /// number of steps remaining to be completed in this action.
    pub remaining_steps: u64,

}



impl Default for SimulateSteps_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__action__SimulateSteps_Feedback__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__action__SimulateSteps_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulateSteps_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulateSteps_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulateSteps_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/action/SimulateSteps_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_Feedback() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__action__SimulateSteps_FeedbackMessage__init(msg: *mut SimulateSteps_FeedbackMessage) -> bool;
    fn simulation_interfaces__action__SimulateSteps_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_FeedbackMessage>, size: usize) -> bool;
    fn simulation_interfaces__action__SimulateSteps_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_FeedbackMessage>);
    fn simulation_interfaces__action__SimulateSteps_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulateSteps_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_FeedbackMessage>) -> bool;
}

// Corresponds to simulation_interfaces__action__SimulateSteps_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulateSteps_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::SimulateSteps_Feedback,

}



impl Default for SimulateSteps_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__action__SimulateSteps_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__action__SimulateSteps_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulateSteps_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulateSteps_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulateSteps_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/action/SimulateSteps_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_FeedbackMessage() }
  }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__action__SimulateSteps_SendGoal_Request__init(msg: *mut SimulateSteps_SendGoal_Request) -> bool;
    fn simulation_interfaces__action__SimulateSteps_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_SendGoal_Request>, size: usize) -> bool;
    fn simulation_interfaces__action__SimulateSteps_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_SendGoal_Request>);
    fn simulation_interfaces__action__SimulateSteps_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulateSteps_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_SendGoal_Request>) -> bool;
}

// Corresponds to simulation_interfaces__action__SimulateSteps_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulateSteps_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::SimulateSteps_Goal,

}



impl Default for SimulateSteps_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__action__SimulateSteps_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__action__SimulateSteps_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulateSteps_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulateSteps_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulateSteps_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/action/SimulateSteps_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_SendGoal_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__action__SimulateSteps_SendGoal_Response__init(msg: *mut SimulateSteps_SendGoal_Response) -> bool;
    fn simulation_interfaces__action__SimulateSteps_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_SendGoal_Response>, size: usize) -> bool;
    fn simulation_interfaces__action__SimulateSteps_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_SendGoal_Response>);
    fn simulation_interfaces__action__SimulateSteps_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulateSteps_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_SendGoal_Response>) -> bool;
}

// Corresponds to simulation_interfaces__action__SimulateSteps_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulateSteps_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SimulateSteps_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__action__SimulateSteps_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__action__SimulateSteps_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulateSteps_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulateSteps_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulateSteps_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/action/SimulateSteps_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_SendGoal_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__action__SimulateSteps_GetResult_Request__init(msg: *mut SimulateSteps_GetResult_Request) -> bool;
    fn simulation_interfaces__action__SimulateSteps_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_GetResult_Request>, size: usize) -> bool;
    fn simulation_interfaces__action__SimulateSteps_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_GetResult_Request>);
    fn simulation_interfaces__action__SimulateSteps_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulateSteps_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_GetResult_Request>) -> bool;
}

// Corresponds to simulation_interfaces__action__SimulateSteps_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulateSteps_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for SimulateSteps_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__action__SimulateSteps_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__action__SimulateSteps_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulateSteps_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulateSteps_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulateSteps_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/action/SimulateSteps_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_GetResult_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__action__SimulateSteps_GetResult_Response__init(msg: *mut SimulateSteps_GetResult_Response) -> bool;
    fn simulation_interfaces__action__SimulateSteps_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_GetResult_Response>, size: usize) -> bool;
    fn simulation_interfaces__action__SimulateSteps_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_GetResult_Response>);
    fn simulation_interfaces__action__SimulateSteps_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulateSteps_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulateSteps_GetResult_Response>) -> bool;
}

// Corresponds to simulation_interfaces__action__SimulateSteps_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulateSteps_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::SimulateSteps_Result,

}



impl Default for SimulateSteps_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__action__SimulateSteps_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__action__SimulateSteps_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulateSteps_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__action__SimulateSteps_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulateSteps_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulateSteps_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/action/SimulateSteps_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__action__SimulateSteps_GetResult_Response() }
  }
}






#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__action__SimulateSteps_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__action__SimulateSteps_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SimulateSteps_SendGoal;

impl rosidl_runtime_rs::Service for SimulateSteps_SendGoal {
    type Request = SimulateSteps_SendGoal_Request;
    type Response = SimulateSteps_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__action__SimulateSteps_SendGoal() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__action__SimulateSteps_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__action__SimulateSteps_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct SimulateSteps_GetResult;

impl rosidl_runtime_rs::Service for SimulateSteps_GetResult {
    type Request = SimulateSteps_GetResult_Request;
    type Response = SimulateSteps_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__action__SimulateSteps_GetResult() }
    }
}


