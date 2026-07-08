#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__DeleteEntity_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__DeleteEntity_Request__init(msg: *mut DeleteEntity_Request) -> bool;
    fn simulation_interfaces__srv__DeleteEntity_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeleteEntity_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__DeleteEntity_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeleteEntity_Request>);
    fn simulation_interfaces__srv__DeleteEntity_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeleteEntity_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DeleteEntity_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__DeleteEntity_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeleteEntity_Request {
    /// Entity identified by its unique name with a namespace,
    /// as returned by SpawnEntity or GetEntities.
    pub entity: rosidl_runtime_rs::String,

}



impl Default for DeleteEntity_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__DeleteEntity_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__DeleteEntity_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeleteEntity_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__DeleteEntity_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__DeleteEntity_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__DeleteEntity_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeleteEntity_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeleteEntity_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/DeleteEntity_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__DeleteEntity_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__DeleteEntity_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__DeleteEntity_Response__init(msg: *mut DeleteEntity_Response) -> bool;
    fn simulation_interfaces__srv__DeleteEntity_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeleteEntity_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__DeleteEntity_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeleteEntity_Response>);
    fn simulation_interfaces__srv__DeleteEntity_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeleteEntity_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DeleteEntity_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__DeleteEntity_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeleteEntity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

}



impl Default for DeleteEntity_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__DeleteEntity_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__DeleteEntity_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeleteEntity_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__DeleteEntity_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__DeleteEntity_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__DeleteEntity_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeleteEntity_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeleteEntity_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/DeleteEntity_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__DeleteEntity_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetAvailableWorlds_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetAvailableWorlds_Request__init(msg: *mut GetAvailableWorlds_Request) -> bool;
    fn simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableWorlds_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableWorlds_Request>);
    fn simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAvailableWorlds_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAvailableWorlds_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetAvailableWorlds_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableWorlds_Request {
    /// Optional field for additional sources (local or remote) to search,
    /// specified as standard URIs if possible.
    pub additional_sources: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Only get worlds with tags matching the filter. The filter is optional and matches everything by default.
    /// This feature is supported if WORLD_TAGS feature is included in output of GetSimulatorFeatures.
    pub filter: super::super::msg::rmw::TagsFilter,

    /// If true, only offline/local sources should be searched. Defaults to false.
    pub offline_only: bool,

    /// If true, the simulator will continue to search sources even if some fail.
    /// The service will return success if any source yielded worlds. Defaults to false.
    pub continue_on_error: bool,

}



impl Default for GetAvailableWorlds_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetAvailableWorlds_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetAvailableWorlds_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAvailableWorlds_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAvailableWorlds_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAvailableWorlds_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetAvailableWorlds_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetAvailableWorlds_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetAvailableWorlds_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetAvailableWorlds_Response__init(msg: *mut GetAvailableWorlds_Response) -> bool;
    fn simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableWorlds_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableWorlds_Response>);
    fn simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAvailableWorlds_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAvailableWorlds_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetAvailableWorlds_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableWorlds_Response {
    /// Standard result message. A specific result code should be used if some sources were not accessible.
    pub result: super::super::msg::rmw::Result,

    /// Available world resources.
    pub worlds: rosidl_runtime_rs::Sequence<super::super::msg::rmw::WorldResource>,

}

impl GetAvailableWorlds_Response {
    /// Some default sources could not be accessed.
    pub const DEFAULT_SOURCES_FAILED: u8 = 101;

}


impl Default for GetAvailableWorlds_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetAvailableWorlds_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetAvailableWorlds_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAvailableWorlds_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAvailableWorlds_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAvailableWorlds_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetAvailableWorlds_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetAvailableWorlds_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetCurrentWorld_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetCurrentWorld_Request__init(msg: *mut GetCurrentWorld_Request) -> bool;
    fn simulation_interfaces__srv__GetCurrentWorld_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentWorld_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetCurrentWorld_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentWorld_Request>);
    fn simulation_interfaces__srv__GetCurrentWorld_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCurrentWorld_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCurrentWorld_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetCurrentWorld_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentWorld_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetCurrentWorld_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetCurrentWorld_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetCurrentWorld_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCurrentWorld_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetCurrentWorld_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetCurrentWorld_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetCurrentWorld_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCurrentWorld_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCurrentWorld_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetCurrentWorld_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetCurrentWorld_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetCurrentWorld_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetCurrentWorld_Response__init(msg: *mut GetCurrentWorld_Response) -> bool;
    fn simulation_interfaces__srv__GetCurrentWorld_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentWorld_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetCurrentWorld_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentWorld_Response>);
    fn simulation_interfaces__srv__GetCurrentWorld_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCurrentWorld_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCurrentWorld_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetCurrentWorld_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentWorld_Response {
    /// Standard result message
    pub result: super::super::msg::rmw::Result,

    /// Information about the currently loaded world. Only valid if result is RESULT_OK.
    pub world: super::super::msg::rmw::WorldResource,

}

impl GetCurrentWorld_Response {
    /// No world is loaded at the moment.
    pub const NO_WORLD_LOADED: u8 = 101;

}


impl Default for GetCurrentWorld_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetCurrentWorld_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetCurrentWorld_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCurrentWorld_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetCurrentWorld_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetCurrentWorld_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetCurrentWorld_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCurrentWorld_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCurrentWorld_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetCurrentWorld_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetCurrentWorld_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntities_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetEntities_Request__init(msg: *mut GetEntities_Request) -> bool;
    fn simulation_interfaces__srv__GetEntities_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntities_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetEntities_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntities_Request>);
    fn simulation_interfaces__srv__GetEntities_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntities_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntities_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetEntities_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntities_Request {
    /// Optional filters for the query, including name, category, tags,
    /// and overlap filters.
    pub filters: super::super::msg::rmw::EntityFilters,

}



impl Default for GetEntities_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetEntities_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetEntities_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntities_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntities_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntities_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntities_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntities_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntities_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetEntities_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntities_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntities_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetEntities_Response__init(msg: *mut GetEntities_Response) -> bool;
    fn simulation_interfaces__srv__GetEntities_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntities_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetEntities_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntities_Response>);
    fn simulation_interfaces__srv__GetEntities_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntities_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntities_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetEntities_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntities_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

    /// Unique names of all entities matching the filters.
    pub entities: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for GetEntities_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetEntities_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetEntities_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntities_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntities_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntities_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntities_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntities_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntities_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetEntities_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntities_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntitiesStates_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetEntitiesStates_Request__init(msg: *mut GetEntitiesStates_Request) -> bool;
    fn simulation_interfaces__srv__GetEntitiesStates_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntitiesStates_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetEntitiesStates_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntitiesStates_Request>);
    fn simulation_interfaces__srv__GetEntitiesStates_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntitiesStates_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntitiesStates_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetEntitiesStates_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntitiesStates_Request {
    /// Optional filters for the query, including name, category, tags,
    /// and overlap filters.
    pub filters: super::super::msg::rmw::EntityFilters,

}



impl Default for GetEntitiesStates_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetEntitiesStates_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetEntitiesStates_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntitiesStates_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntitiesStates_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntitiesStates_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntitiesStates_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntitiesStates_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntitiesStates_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetEntitiesStates_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntitiesStates_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntitiesStates_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetEntitiesStates_Response__init(msg: *mut GetEntitiesStates_Response) -> bool;
    fn simulation_interfaces__srv__GetEntitiesStates_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntitiesStates_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetEntitiesStates_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntitiesStates_Response>);
    fn simulation_interfaces__srv__GetEntitiesStates_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntitiesStates_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntitiesStates_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetEntitiesStates_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntitiesStates_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

    /// Unique names of all entities matching the filters.
    pub entities: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// States for these entities.
    pub states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::EntityState>,

}



impl Default for GetEntitiesStates_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetEntitiesStates_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetEntitiesStates_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntitiesStates_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntitiesStates_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntitiesStates_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntitiesStates_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntitiesStates_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntitiesStates_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetEntitiesStates_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntitiesStates_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityBounds_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetEntityBounds_Request__init(msg: *mut GetEntityBounds_Request) -> bool;
    fn simulation_interfaces__srv__GetEntityBounds_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntityBounds_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetEntityBounds_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntityBounds_Request>);
    fn simulation_interfaces__srv__GetEntityBounds_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntityBounds_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntityBounds_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetEntityBounds_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityBounds_Request {
    /// Entity identified by its unique name as returned by GetEntities / SpawnEntity.
    pub entity: rosidl_runtime_rs::String,

}



impl Default for GetEntityBounds_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetEntityBounds_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetEntityBounds_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntityBounds_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityBounds_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityBounds_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityBounds_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntityBounds_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntityBounds_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetEntityBounds_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityBounds_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityBounds_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetEntityBounds_Response__init(msg: *mut GetEntityBounds_Response) -> bool;
    fn simulation_interfaces__srv__GetEntityBounds_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntityBounds_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetEntityBounds_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntityBounds_Response>);
    fn simulation_interfaces__srv__GetEntityBounds_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntityBounds_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntityBounds_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetEntityBounds_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityBounds_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

    /// Entity bounds. Only valid if result.result_code is OK.
    /// Bounds with TYPE_BOX should be returned, unless there is a configuration
    /// parameter for the simulator to control the type and it is set otherwise.
    pub bounds: super::super::msg::rmw::Bounds,

}



impl Default for GetEntityBounds_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetEntityBounds_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetEntityBounds_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntityBounds_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityBounds_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityBounds_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityBounds_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntityBounds_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntityBounds_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetEntityBounds_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityBounds_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityInfo_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetEntityInfo_Request__init(msg: *mut GetEntityInfo_Request) -> bool;
    fn simulation_interfaces__srv__GetEntityInfo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntityInfo_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetEntityInfo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntityInfo_Request>);
    fn simulation_interfaces__srv__GetEntityInfo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntityInfo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntityInfo_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetEntityInfo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityInfo_Request {
    /// Entity identified by its unique name as returned by GetEntities.
    pub entity: rosidl_runtime_rs::String,

}



impl Default for GetEntityInfo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetEntityInfo_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetEntityInfo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntityInfo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityInfo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityInfo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityInfo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntityInfo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntityInfo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetEntityInfo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityInfo_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityInfo_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetEntityInfo_Response__init(msg: *mut GetEntityInfo_Response) -> bool;
    fn simulation_interfaces__srv__GetEntityInfo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntityInfo_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetEntityInfo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntityInfo_Response>);
    fn simulation_interfaces__srv__GetEntityInfo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntityInfo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntityInfo_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetEntityInfo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

    /// Only valid if result.result_code is OK.
    pub info: super::super::msg::rmw::EntityInfo,

}



impl Default for GetEntityInfo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetEntityInfo_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetEntityInfo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntityInfo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityInfo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityInfo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityInfo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntityInfo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntityInfo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetEntityInfo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityInfo_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityState_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetEntityState_Request__init(msg: *mut GetEntityState_Request) -> bool;
    fn simulation_interfaces__srv__GetEntityState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntityState_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetEntityState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntityState_Request>);
    fn simulation_interfaces__srv__GetEntityState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntityState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntityState_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetEntityState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityState_Request {
    /// Entity identified by its unique name as returned by GetEntities / SpawnEntity.
    pub entity: rosidl_runtime_rs::String,

}



impl Default for GetEntityState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetEntityState_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetEntityState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntityState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntityState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntityState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetEntityState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityState_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityState_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetEntityState_Response__init(msg: *mut GetEntityState_Response) -> bool;
    fn simulation_interfaces__srv__GetEntityState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEntityState_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetEntityState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEntityState_Response>);
    fn simulation_interfaces__srv__GetEntityState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEntityState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEntityState_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetEntityState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

    /// Entity ground truth state. Valid when result.result = OK.
    pub state: super::super::msg::rmw::EntityState,

}



impl Default for GetEntityState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetEntityState_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetEntityState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEntityState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetEntityState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEntityState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEntityState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetEntityState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetEntityState_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetNamedPoseBounds_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetNamedPoseBounds_Request__init(msg: *mut GetNamedPoseBounds_Request) -> bool;
    fn simulation_interfaces__srv__GetNamedPoseBounds_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoseBounds_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetNamedPoseBounds_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoseBounds_Request>);
    fn simulation_interfaces__srv__GetNamedPoseBounds_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNamedPoseBounds_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoseBounds_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetNamedPoseBounds_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNamedPoseBounds_Request {
    /// unique name (as returned from GetNamedPoses).
    pub name: rosidl_runtime_rs::String,

}



impl Default for GetNamedPoseBounds_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetNamedPoseBounds_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetNamedPoseBounds_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNamedPoseBounds_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoseBounds_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoseBounds_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoseBounds_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNamedPoseBounds_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNamedPoseBounds_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetNamedPoseBounds_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetNamedPoseBounds_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetNamedPoseBounds_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetNamedPoseBounds_Response__init(msg: *mut GetNamedPoseBounds_Response) -> bool;
    fn simulation_interfaces__srv__GetNamedPoseBounds_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoseBounds_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetNamedPoseBounds_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoseBounds_Response>);
    fn simulation_interfaces__srv__GetNamedPoseBounds_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNamedPoseBounds_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoseBounds_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetNamedPoseBounds_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNamedPoseBounds_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

    /// bounds for the named pose.
    pub bounds: super::super::msg::rmw::Bounds,

}



impl Default for GetNamedPoseBounds_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetNamedPoseBounds_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetNamedPoseBounds_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNamedPoseBounds_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoseBounds_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoseBounds_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoseBounds_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNamedPoseBounds_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNamedPoseBounds_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetNamedPoseBounds_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetNamedPoseBounds_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetNamedPoses_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetNamedPoses_Request__init(msg: *mut GetNamedPoses_Request) -> bool;
    fn simulation_interfaces__srv__GetNamedPoses_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoses_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetNamedPoses_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoses_Request>);
    fn simulation_interfaces__srv__GetNamedPoses_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNamedPoses_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoses_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetNamedPoses_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNamedPoses_Request {
    /// Tags filter to apply. Only named poses with matching tags field
    /// will be returned. Can be empty (see TagsFilter).
    pub tags: super::super::msg::rmw::TagsFilter,

}



impl Default for GetNamedPoses_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetNamedPoses_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetNamedPoses_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNamedPoses_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoses_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoses_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoses_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNamedPoses_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNamedPoses_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetNamedPoses_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetNamedPoses_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetNamedPoses_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetNamedPoses_Response__init(msg: *mut GetNamedPoses_Response) -> bool;
    fn simulation_interfaces__srv__GetNamedPoses_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoses_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetNamedPoses_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoses_Response>);
    fn simulation_interfaces__srv__GetNamedPoses_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNamedPoses_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNamedPoses_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetNamedPoses_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNamedPoses_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

    /// A list of predefined poses, which may be empty.
    pub poses: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NamedPose>,

}



impl Default for GetNamedPoses_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetNamedPoses_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetNamedPoses_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNamedPoses_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoses_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoses_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetNamedPoses_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNamedPoses_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNamedPoses_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetNamedPoses_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetNamedPoses_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSimulationState_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetSimulationState_Request__init(msg: *mut GetSimulationState_Request) -> bool;
    fn simulation_interfaces__srv__GetSimulationState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSimulationState_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetSimulationState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSimulationState_Request>);
    fn simulation_interfaces__srv__GetSimulationState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSimulationState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSimulationState_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetSimulationState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSimulationState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetSimulationState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetSimulationState_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetSimulationState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSimulationState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulationState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulationState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulationState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSimulationState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSimulationState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetSimulationState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSimulationState_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSimulationState_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetSimulationState_Response__init(msg: *mut GetSimulationState_Response) -> bool;
    fn simulation_interfaces__srv__GetSimulationState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSimulationState_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetSimulationState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSimulationState_Response>);
    fn simulation_interfaces__srv__GetSimulationState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSimulationState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSimulationState_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetSimulationState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSimulationState_Response {
    /// Current state of the simulation.
    pub state: super::super::msg::rmw::SimulationState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

}



impl Default for GetSimulationState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetSimulationState_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetSimulationState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSimulationState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulationState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulationState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulationState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSimulationState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSimulationState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetSimulationState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSimulationState_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSimulatorFeatures_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetSimulatorFeatures_Request__init(msg: *mut GetSimulatorFeatures_Request) -> bool;
    fn simulation_interfaces__srv__GetSimulatorFeatures_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSimulatorFeatures_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetSimulatorFeatures_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSimulatorFeatures_Request>);
    fn simulation_interfaces__srv__GetSimulatorFeatures_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSimulatorFeatures_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSimulatorFeatures_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetSimulatorFeatures_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSimulatorFeatures_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetSimulatorFeatures_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetSimulatorFeatures_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetSimulatorFeatures_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSimulatorFeatures_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulatorFeatures_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulatorFeatures_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulatorFeatures_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSimulatorFeatures_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSimulatorFeatures_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetSimulatorFeatures_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSimulatorFeatures_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSimulatorFeatures_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetSimulatorFeatures_Response__init(msg: *mut GetSimulatorFeatures_Response) -> bool;
    fn simulation_interfaces__srv__GetSimulatorFeatures_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSimulatorFeatures_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetSimulatorFeatures_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSimulatorFeatures_Response>);
    fn simulation_interfaces__srv__GetSimulatorFeatures_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSimulatorFeatures_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSimulatorFeatures_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetSimulatorFeatures_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSimulatorFeatures_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub features: super::super::msg::rmw::SimulatorFeatures,

}



impl Default for GetSimulatorFeatures_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetSimulatorFeatures_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetSimulatorFeatures_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSimulatorFeatures_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulatorFeatures_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulatorFeatures_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSimulatorFeatures_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSimulatorFeatures_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSimulatorFeatures_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetSimulatorFeatures_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSimulatorFeatures_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSpawnables_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetSpawnables_Request__init(msg: *mut GetSpawnables_Request) -> bool;
    fn simulation_interfaces__srv__GetSpawnables_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSpawnables_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetSpawnables_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSpawnables_Request>);
    fn simulation_interfaces__srv__GetSpawnables_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSpawnables_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSpawnables_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetSpawnables_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSpawnables_Request {
    /// Optional field for additional sources (local or remote) to search.
    /// By default, each simulator has visibility of spawnables through
    /// some mechanisms, e.g. a set of paths, registered assets etc.
    /// Since the simulator cannot possibly look everywhere,
    /// this field allows the user to specify additional sources.
    /// Unrecognized values are listed as such in the result.error_message,
    /// but do not hinder success of the response.
    /// Sources may include subcategories and be simulator-specific.
    pub sources: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for GetSpawnables_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetSpawnables_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetSpawnables_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSpawnables_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSpawnables_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSpawnables_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSpawnables_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSpawnables_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSpawnables_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetSpawnables_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSpawnables_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSpawnables_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__GetSpawnables_Response__init(msg: *mut GetSpawnables_Response) -> bool;
    fn simulation_interfaces__srv__GetSpawnables_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSpawnables_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__GetSpawnables_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSpawnables_Response>);
    fn simulation_interfaces__srv__GetSpawnables_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSpawnables_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSpawnables_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__GetSpawnables_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSpawnables_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

    /// Spawnable objects with URI and additional information.
    pub spawnables: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Spawnable>,

}



impl Default for GetSpawnables_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__GetSpawnables_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__GetSpawnables_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSpawnables_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSpawnables_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSpawnables_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__GetSpawnables_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSpawnables_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSpawnables_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/GetSpawnables_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__GetSpawnables_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__LoadWorld_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__LoadWorld_Request__init(msg: *mut LoadWorld_Request) -> bool;
    fn simulation_interfaces__srv__LoadWorld_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadWorld_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__LoadWorld_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadWorld_Request>);
    fn simulation_interfaces__srv__LoadWorld_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadWorld_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadWorld_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__LoadWorld_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadWorld_Request {
    /// Resource such as SDF, USD, MJCF, or other simulator-native format world file or,
    /// Simulation world passed as a string.
    pub world_resource: super::super::msg::rmw::Resource,

    /// Fail on unsupported elements (such as SDFormat sub-tags). By default, such elements are ignored.
    pub fail_on_unsupported_element: bool,

    /// Ignore missing or unsupported assets. By default, missing or unsupported assets result in failure.
    pub ignore_missing_or_unsupported_assets: bool,

}



impl Default for LoadWorld_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__LoadWorld_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__LoadWorld_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadWorld_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__LoadWorld_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__LoadWorld_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__LoadWorld_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadWorld_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadWorld_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/LoadWorld_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__LoadWorld_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__LoadWorld_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__LoadWorld_Response__init(msg: *mut LoadWorld_Response) -> bool;
    fn simulation_interfaces__srv__LoadWorld_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadWorld_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__LoadWorld_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadWorld_Response>);
    fn simulation_interfaces__srv__LoadWorld_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadWorld_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadWorld_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__LoadWorld_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadWorld_Response {
    /// Standard result message
    pub result: super::super::msg::rmw::Result,

    /// Information about the loaded world. Only valid if result is RESULT_OK.
    pub world: super::super::msg::rmw::WorldResource,

}

impl LoadWorld_Response {
    /// Format for uri or resource string is unsupported.
    pub const UNSUPPORTED_FORMAT: u8 = 101;

    /// Both uri and resource string are empty.
    pub const NO_RESOURCE: u8 = 102;

    /// Resource file or string failed to parse.
    pub const RESOURCE_PARSE_ERROR: u8 = 103;

    /// At least one of resource assets (such as meshes) was not found.
    pub const MISSING_ASSETS: u8 = 104;

    /// At least one of resource assets (such as meshes) is not supported.
    pub const UNSUPPORTED_ASSETS: u8 = 105;

    /// At least one of world definition elements such as format tags is unsupported.
    pub const UNSUPPORTED_ELEMENTS: u8 = 106;

}


impl Default for LoadWorld_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__LoadWorld_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__LoadWorld_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadWorld_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__LoadWorld_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__LoadWorld_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__LoadWorld_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadWorld_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadWorld_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/LoadWorld_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__LoadWorld_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__ResetSimulation_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__ResetSimulation_Request__init(msg: *mut ResetSimulation_Request) -> bool;
    fn simulation_interfaces__srv__ResetSimulation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__ResetSimulation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Request>);
    fn simulation_interfaces__srv__ResetSimulation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetSimulation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__ResetSimulation_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetSimulation_Request {
    /// Scope of the reset. Note that simulators might only support some scopes.
    /// This is a bit field which may be checked for each scope e.g. scope & SCOPE_TIME.
    pub scope: u8,

}

impl ResetSimulation_Request {
    /// same as SCOPE_ALL.
    pub const SCOPE_DEFAULT: u8 = 0;

    /// Reset simulation time to start.
    pub const SCOPE_TIME: u8 = 1;

    /// Reset state such as poses and velocities. This may include state randomization
    /// if such feature is available and turned on.
    pub const SCOPE_STATE: u8 = 2;

    /// De-spawns all spawned entities.
    pub const SCOPE_SPAWNED: u8 = 4;

    /// Fully resets simulation to the start, as if it was closed and launched again.
    pub const SCOPE_ALL: u8 = 255;

}


impl Default for ResetSimulation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__ResetSimulation_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__ResetSimulation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetSimulation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__ResetSimulation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__ResetSimulation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__ResetSimulation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetSimulation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetSimulation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/ResetSimulation_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__ResetSimulation_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__ResetSimulation_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__ResetSimulation_Response__init(msg: *mut ResetSimulation_Response) -> bool;
    fn simulation_interfaces__srv__ResetSimulation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__ResetSimulation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Response>);
    fn simulation_interfaces__srv__ResetSimulation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetSimulation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__ResetSimulation_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetSimulation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

}



impl Default for ResetSimulation_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__ResetSimulation_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__ResetSimulation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetSimulation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__ResetSimulation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__ResetSimulation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__ResetSimulation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetSimulation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetSimulation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/ResetSimulation_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__ResetSimulation_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetEntityInfo_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__SetEntityInfo_Request__init(msg: *mut SetEntityInfo_Request) -> bool;
    fn simulation_interfaces__srv__SetEntityInfo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetEntityInfo_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__SetEntityInfo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetEntityInfo_Request>);
    fn simulation_interfaces__srv__SetEntityInfo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetEntityInfo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetEntityInfo_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__SetEntityInfo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityInfo_Request {
    /// Entity identified by its unique name as returned by GetEntities.
    pub entity: rosidl_runtime_rs::String,

    /// EntityInfo to set to the entity, which will override its current values.
    pub info: super::super::msg::rmw::EntityInfo,

}



impl Default for SetEntityInfo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__SetEntityInfo_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__SetEntityInfo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetEntityInfo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityInfo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityInfo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityInfo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetEntityInfo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetEntityInfo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/SetEntityInfo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetEntityInfo_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetEntityInfo_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__SetEntityInfo_Response__init(msg: *mut SetEntityInfo_Response) -> bool;
    fn simulation_interfaces__srv__SetEntityInfo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetEntityInfo_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__SetEntityInfo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetEntityInfo_Response>);
    fn simulation_interfaces__srv__SetEntityInfo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetEntityInfo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetEntityInfo_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__SetEntityInfo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

}



impl Default for SetEntityInfo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__SetEntityInfo_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__SetEntityInfo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetEntityInfo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityInfo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityInfo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityInfo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetEntityInfo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetEntityInfo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/SetEntityInfo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetEntityInfo_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetEntityState_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__SetEntityState_Request__init(msg: *mut SetEntityState_Request) -> bool;
    fn simulation_interfaces__srv__SetEntityState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetEntityState_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__SetEntityState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetEntityState_Request>);
    fn simulation_interfaces__srv__SetEntityState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetEntityState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetEntityState_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__SetEntityState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityState_Request {
    /// Entity identified by its unique name as returned by GetEntities / SpawnEntity.
    pub entity: rosidl_runtime_rs::String,

    /// New state to set immediately. The timestamp in header is ignored.
    /// If non-zero twist or acceleration is requested for static object, the service call
    /// fails and RESULT_OPERATION_FAILED is returned.
    /// Note that the acceleration field may be ignored by simulators.
    pub state: super::super::msg::rmw::EntityState,

    /// Flags to choose whether pose, twist or acceleration should be set or ignored.
    pub set_pose: bool,

    /// These can be used to choose which EntityState properties to set.
    pub set_twist: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub set_acceleration: bool,

}



impl Default for SetEntityState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__SetEntityState_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__SetEntityState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetEntityState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetEntityState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetEntityState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/SetEntityState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetEntityState_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetEntityState_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__SetEntityState_Response__init(msg: *mut SetEntityState_Response) -> bool;
    fn simulation_interfaces__srv__SetEntityState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetEntityState_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__SetEntityState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetEntityState_Response>);
    fn simulation_interfaces__srv__SetEntityState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetEntityState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetEntityState_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__SetEntityState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

}

impl SetEntityState_Response {
    /// Additional result.result_code values for this service. Check result.error_message for further details.
    /// initial_pose is invalid, such as when the quaternion is invalid or position
    /// exceeds simulator world bounds.
    pub const INVALID_POSE: u8 = 101;

}


impl Default for SetEntityState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__SetEntityState_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__SetEntityState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetEntityState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetEntityState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetEntityState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetEntityState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/SetEntityState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetEntityState_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetSimulationState_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__SetSimulationState_Request__init(msg: *mut SetSimulationState_Request) -> bool;
    fn simulation_interfaces__srv__SetSimulationState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSimulationState_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__SetSimulationState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSimulationState_Request>);
    fn simulation_interfaces__srv__SetSimulationState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSimulationState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSimulationState_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__SetSimulationState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSimulationState_Request {
    /// Target state to set for the simulation.
    pub state: super::super::msg::rmw::SimulationState,

}



impl Default for SetSimulationState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__SetSimulationState_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__SetSimulationState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSimulationState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetSimulationState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetSimulationState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetSimulationState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSimulationState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSimulationState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/SetSimulationState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetSimulationState_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetSimulationState_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__SetSimulationState_Response__init(msg: *mut SetSimulationState_Response) -> bool;
    fn simulation_interfaces__srv__SetSimulationState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSimulationState_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__SetSimulationState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSimulationState_Response>);
    fn simulation_interfaces__srv__SetSimulationState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSimulationState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSimulationState_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__SetSimulationState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSimulationState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

}

impl SetSimulationState_Response {
    /// Additional result type for this call, which means simulation was already in
    /// the target state (e.g. was already stopped when STATE_STOPPED was requested).
    pub const ALREADY_IN_TARGET_STATE: u8 = 101;

    /// The simulator failed to transition to the target state. This might happen
    /// especially with the transition to STATE_PLAYING from STATE_STOPPED.
    /// See result.error_message for details.
    pub const STATE_TRANSITION_ERROR: u8 = 102;

    /// Incorrect transition (pausing when in stopped state).
    pub const INCORRECT_TRANSITION: u8 = 103;

}


impl Default for SetSimulationState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__SetSimulationState_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__SetSimulationState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSimulationState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetSimulationState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetSimulationState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SetSimulationState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSimulationState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSimulationState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/SetSimulationState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SetSimulationState_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SpawnEntity_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__SpawnEntity_Request__init(msg: *mut SpawnEntity_Request) -> bool;
    fn simulation_interfaces__srv__SpawnEntity_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpawnEntity_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__SpawnEntity_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpawnEntity_Request>);
    fn simulation_interfaces__srv__SpawnEntity_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpawnEntity_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SpawnEntity_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__SpawnEntity_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnEntity_Request {
    /// A name to give to the spawned entity.
    /// If empty, a name field in the uri file or resource_string will be used,
    /// if supported and not empty (e.g. "name" field in SDFormat, URDF).
    /// If the name is still empty or not unique (as determined by the simulator),
    /// the service returns a generated name in the entity_name response field if the
    /// allow_renaming field is set to true. Otherwise, the service call fails and an
    /// error is returned.
    pub name: rosidl_runtime_rs::String,

    /// Determines whether the spawning succeeds with a non-unique name.
    /// If it is set to true, the user should always check entity_name response field
    /// and use it for any further interactions.
    pub allow_renaming: bool,

    /// Resource such as SDFormat, URDF, USD or MJCF file, a native prefab, etc.
    /// Valid URIs can be determined by calling GetSpawnables first.
    /// Check simulator format support via the spawn_formats field in GetSimulatorFeatures.
    /// Using resource_string is supported if GetSimulatorFeatures includes
    /// the SPAWNING_RESOURCE_STRING feature.
    pub entity_resource: super::super::msg::rmw::Resource,

    /// Spawn the entity with all its interfaces under this namespace.
    pub entity_namespace: rosidl_runtime_rs::String,

    /// Initial entity pose.
    /// The header contains a reference frame, which defaults to global "world" frame.
    /// This frame must be known to the simulator, e.g. of an object spawned earlier.
    /// The timestamp field in the header is ignored.
    pub initial_pose: geometry_msgs::msg::rmw::PoseStamped,

}



impl Default for SpawnEntity_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__SpawnEntity_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__SpawnEntity_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpawnEntity_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SpawnEntity_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SpawnEntity_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SpawnEntity_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpawnEntity_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpawnEntity_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/SpawnEntity_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SpawnEntity_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SpawnEntity_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__SpawnEntity_Response__init(msg: *mut SpawnEntity_Response) -> bool;
    fn simulation_interfaces__srv__SpawnEntity_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpawnEntity_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__SpawnEntity_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpawnEntity_Response>);
    fn simulation_interfaces__srv__SpawnEntity_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpawnEntity_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SpawnEntity_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__SpawnEntity_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnEntity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::Result,

    /// Spawned entity full name, guaranteed to be unique in the simulation.
    /// If allow_renaming is true, it may differ from the request name field.
    pub entity_name: rosidl_runtime_rs::String,

}

impl SpawnEntity_Response {
    /// Additional result.result_code values for this service. Check result.error_message for further details.
    /// Given name is already taken by entity and allow_renaming is false.
    pub const NAME_NOT_UNIQUE: u8 = 101;

    /// Given name is invalid in the simulator (e.g. does not meet naming
    /// requirements such as allowed characters). This is also returned if name is
    /// empty and allow_renaming is false.
    pub const NAME_INVALID: u8 = 102;

    /// Format for uri or resource string is unsupported. Check supported formats
    /// through GetSimulatorFeatures service, in spawn_formats field.
    pub const UNSUPPORTED_FORMAT: u8 = 103;

    /// Both uri and resource string are empty.
    pub const NO_RESOURCE: u8 = 104;

    /// Namespace does not meet namespace naming standards.
    pub const NAMESPACE_INVALID: u8 = 105;

    /// Resource file or string failed to parse.
    pub const RESOURCE_PARSE_ERROR: u8 = 106;

    /// At least one of resource assets (such as meshes) was not found.
    pub const MISSING_ASSETS: u8 = 107;

    /// At least one of resource assets (such as meshes) is not supported.
    pub const UNSUPPORTED_ASSETS: u8 = 108;

    /// initial_pose is invalid, such as when the quaternion is invalid or position
    /// exceeds simulator world bounds.
    pub const INVALID_POSE: u8 = 109;

}


impl Default for SpawnEntity_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__SpawnEntity_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__SpawnEntity_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpawnEntity_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SpawnEntity_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SpawnEntity_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__SpawnEntity_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpawnEntity_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpawnEntity_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/SpawnEntity_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__SpawnEntity_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__StepSimulation_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__StepSimulation_Request__init(msg: *mut StepSimulation_Request) -> bool;
    fn simulation_interfaces__srv__StepSimulation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StepSimulation_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__StepSimulation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StepSimulation_Request>);
    fn simulation_interfaces__srv__StepSimulation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StepSimulation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StepSimulation_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__StepSimulation_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StepSimulation_Request {
    /// Step through the simulation loop this many times.
    pub steps: u64,

}



impl Default for StepSimulation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__StepSimulation_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__StepSimulation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StepSimulation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__StepSimulation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__StepSimulation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__StepSimulation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StepSimulation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StepSimulation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/StepSimulation_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__StepSimulation_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__StepSimulation_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__StepSimulation_Response__init(msg: *mut StepSimulation_Response) -> bool;
    fn simulation_interfaces__srv__StepSimulation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StepSimulation_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__StepSimulation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StepSimulation_Response>);
    fn simulation_interfaces__srv__StepSimulation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StepSimulation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StepSimulation_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__StepSimulation_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StepSimulation_Response {
    /// Calling with simulation not paused will return RESULT_OPERATION_FAILED and error message.
    pub result: super::super::msg::rmw::Result,

}



impl Default for StepSimulation_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__StepSimulation_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__StepSimulation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StepSimulation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__StepSimulation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__StepSimulation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__StepSimulation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StepSimulation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StepSimulation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/StepSimulation_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__StepSimulation_Response() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__UnloadWorld_Request() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__UnloadWorld_Request__init(msg: *mut UnloadWorld_Request) -> bool;
    fn simulation_interfaces__srv__UnloadWorld_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UnloadWorld_Request>, size: usize) -> bool;
    fn simulation_interfaces__srv__UnloadWorld_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UnloadWorld_Request>);
    fn simulation_interfaces__srv__UnloadWorld_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UnloadWorld_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<UnloadWorld_Request>) -> bool;
}

// Corresponds to simulation_interfaces__srv__UnloadWorld_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnloadWorld_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for UnloadWorld_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__UnloadWorld_Request__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__UnloadWorld_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UnloadWorld_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__UnloadWorld_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__UnloadWorld_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__UnloadWorld_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UnloadWorld_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UnloadWorld_Request where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/UnloadWorld_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__UnloadWorld_Request() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__UnloadWorld_Response() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__srv__UnloadWorld_Response__init(msg: *mut UnloadWorld_Response) -> bool;
    fn simulation_interfaces__srv__UnloadWorld_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UnloadWorld_Response>, size: usize) -> bool;
    fn simulation_interfaces__srv__UnloadWorld_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UnloadWorld_Response>);
    fn simulation_interfaces__srv__UnloadWorld_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UnloadWorld_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<UnloadWorld_Response>) -> bool;
}

// Corresponds to simulation_interfaces__srv__UnloadWorld_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnloadWorld_Response {
    /// Standard result message
    pub result: super::super::msg::rmw::Result,

}

impl UnloadWorld_Response {
    /// No world is loaded at the moment.
    pub const NO_WORLD_LOADED: u8 = 101;

}


impl Default for UnloadWorld_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__srv__UnloadWorld_Response__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__srv__UnloadWorld_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UnloadWorld_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__UnloadWorld_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__UnloadWorld_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__srv__UnloadWorld_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UnloadWorld_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UnloadWorld_Response where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/srv/UnloadWorld_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__srv__UnloadWorld_Response() }
  }
}






#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__DeleteEntity() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__DeleteEntity
#[allow(missing_docs, non_camel_case_types)]
pub struct DeleteEntity;

impl rosidl_runtime_rs::Service for DeleteEntity {
    type Request = DeleteEntity_Request;
    type Response = DeleteEntity_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__DeleteEntity() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetAvailableWorlds() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetAvailableWorlds
#[allow(missing_docs, non_camel_case_types)]
pub struct GetAvailableWorlds;

impl rosidl_runtime_rs::Service for GetAvailableWorlds {
    type Request = GetAvailableWorlds_Request;
    type Response = GetAvailableWorlds_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetAvailableWorlds() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetCurrentWorld() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetCurrentWorld
#[allow(missing_docs, non_camel_case_types)]
pub struct GetCurrentWorld;

impl rosidl_runtime_rs::Service for GetCurrentWorld {
    type Request = GetCurrentWorld_Request;
    type Response = GetCurrentWorld_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetCurrentWorld() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetEntities() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetEntities
#[allow(missing_docs, non_camel_case_types)]
pub struct GetEntities;

impl rosidl_runtime_rs::Service for GetEntities {
    type Request = GetEntities_Request;
    type Response = GetEntities_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetEntities() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetEntitiesStates() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetEntitiesStates
#[allow(missing_docs, non_camel_case_types)]
pub struct GetEntitiesStates;

impl rosidl_runtime_rs::Service for GetEntitiesStates {
    type Request = GetEntitiesStates_Request;
    type Response = GetEntitiesStates_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetEntitiesStates() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetEntityBounds() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetEntityBounds
#[allow(missing_docs, non_camel_case_types)]
pub struct GetEntityBounds;

impl rosidl_runtime_rs::Service for GetEntityBounds {
    type Request = GetEntityBounds_Request;
    type Response = GetEntityBounds_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetEntityBounds() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetEntityInfo() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetEntityInfo
#[allow(missing_docs, non_camel_case_types)]
pub struct GetEntityInfo;

impl rosidl_runtime_rs::Service for GetEntityInfo {
    type Request = GetEntityInfo_Request;
    type Response = GetEntityInfo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetEntityInfo() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetEntityState() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetEntityState
#[allow(missing_docs, non_camel_case_types)]
pub struct GetEntityState;

impl rosidl_runtime_rs::Service for GetEntityState {
    type Request = GetEntityState_Request;
    type Response = GetEntityState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetEntityState() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetNamedPoseBounds() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetNamedPoseBounds
#[allow(missing_docs, non_camel_case_types)]
pub struct GetNamedPoseBounds;

impl rosidl_runtime_rs::Service for GetNamedPoseBounds {
    type Request = GetNamedPoseBounds_Request;
    type Response = GetNamedPoseBounds_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetNamedPoseBounds() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetNamedPoses() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetNamedPoses
#[allow(missing_docs, non_camel_case_types)]
pub struct GetNamedPoses;

impl rosidl_runtime_rs::Service for GetNamedPoses {
    type Request = GetNamedPoses_Request;
    type Response = GetNamedPoses_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetNamedPoses() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetSimulationState() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetSimulationState
#[allow(missing_docs, non_camel_case_types)]
pub struct GetSimulationState;

impl rosidl_runtime_rs::Service for GetSimulationState {
    type Request = GetSimulationState_Request;
    type Response = GetSimulationState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetSimulationState() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetSimulatorFeatures() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetSimulatorFeatures
#[allow(missing_docs, non_camel_case_types)]
pub struct GetSimulatorFeatures;

impl rosidl_runtime_rs::Service for GetSimulatorFeatures {
    type Request = GetSimulatorFeatures_Request;
    type Response = GetSimulatorFeatures_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetSimulatorFeatures() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetSpawnables() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__GetSpawnables
#[allow(missing_docs, non_camel_case_types)]
pub struct GetSpawnables;

impl rosidl_runtime_rs::Service for GetSpawnables {
    type Request = GetSpawnables_Request;
    type Response = GetSpawnables_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__GetSpawnables() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__LoadWorld() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__LoadWorld
#[allow(missing_docs, non_camel_case_types)]
pub struct LoadWorld;

impl rosidl_runtime_rs::Service for LoadWorld {
    type Request = LoadWorld_Request;
    type Response = LoadWorld_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__LoadWorld() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__ResetSimulation() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__ResetSimulation
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetSimulation;

impl rosidl_runtime_rs::Service for ResetSimulation {
    type Request = ResetSimulation_Request;
    type Response = ResetSimulation_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__ResetSimulation() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__SetEntityInfo() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__SetEntityInfo
#[allow(missing_docs, non_camel_case_types)]
pub struct SetEntityInfo;

impl rosidl_runtime_rs::Service for SetEntityInfo {
    type Request = SetEntityInfo_Request;
    type Response = SetEntityInfo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__SetEntityInfo() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__SetEntityState() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__SetEntityState
#[allow(missing_docs, non_camel_case_types)]
pub struct SetEntityState;

impl rosidl_runtime_rs::Service for SetEntityState {
    type Request = SetEntityState_Request;
    type Response = SetEntityState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__SetEntityState() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__SetSimulationState() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__SetSimulationState
#[allow(missing_docs, non_camel_case_types)]
pub struct SetSimulationState;

impl rosidl_runtime_rs::Service for SetSimulationState {
    type Request = SetSimulationState_Request;
    type Response = SetSimulationState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__SetSimulationState() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__SpawnEntity() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__SpawnEntity
#[allow(missing_docs, non_camel_case_types)]
pub struct SpawnEntity;

impl rosidl_runtime_rs::Service for SpawnEntity {
    type Request = SpawnEntity_Request;
    type Response = SpawnEntity_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__SpawnEntity() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__StepSimulation() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__StepSimulation
#[allow(missing_docs, non_camel_case_types)]
pub struct StepSimulation;

impl rosidl_runtime_rs::Service for StepSimulation {
    type Request = StepSimulation_Request;
    type Response = StepSimulation_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__StepSimulation() }
    }
}




#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__UnloadWorld() -> *const std::ffi::c_void;
}

// Corresponds to simulation_interfaces__srv__UnloadWorld
#[allow(missing_docs, non_camel_case_types)]
pub struct UnloadWorld;

impl rosidl_runtime_rs::Service for UnloadWorld {
    type Request = UnloadWorld_Request;
    type Response = UnloadWorld_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__simulation_interfaces__srv__UnloadWorld() }
    }
}


