#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__Bounds() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__Bounds__init(msg: *mut Bounds) -> bool;
    fn simulation_interfaces__msg__Bounds__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Bounds>, size: usize) -> bool;
    fn simulation_interfaces__msg__Bounds__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Bounds>);
    fn simulation_interfaces__msg__Bounds__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Bounds>, out_seq: *mut rosidl_runtime_rs::Sequence<Bounds>) -> bool;
}

// Corresponds to simulation_interfaces__msg__Bounds
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Bounds which are useful in several contexts, e.g. to avoid spawning with other object overlap,
/// or parking in a spot that is too small.
/// Certain goals or points might be valid for a small object, but not suitable for a large one,
/// or a differently shaped one.
/// Bounds can be also checked to ensure certain scenario conditions are met.
/// For entities, these limits are relative to entity's canonical link transform, following ROS rep-103 convention.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Bounds {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,

    /// Points defining the bounded area. Check type field to determine semantics.
    /// Valid sizes are zero (no bounds), 2 (sphere or box, depending on type field),
    /// and 3 or more (convex hull).
    pub points: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Vector3>,

}

impl Bounds {
    /// As bounds are optional in most interfaces, TYPE_EMPTY signifies empty bounds, to be understood as "unbounded".
    /// Otherwise, the fields are expected to define a valid volume.
    /// For spawning with a named pose, you should check whether the entity simulation model fits within the bounds
    /// before calling SpawnEntity, to avoid overlaps and unstable behavior.
    /// bounds type
    /// No bounds. The points vector will be empty.
    pub const TYPE_EMPTY: u8 = 0;

    /// Axis-aligned bounding box, points field should have two values,
    /// which are upper right and lower left corners of the box.
    pub const TYPE_BOX: u8 = 1;

    /// Points define a convex hull (at least 3 non-collinear points).
    pub const TYPE_CONVEX_HULL: u8 = 2;

    /// A sphere with center and radius. First element of points vector is the center.
    /// The x field of the second point of the vector is the radius (y and z are ignored).
    pub const TYPE_SPHERE: u8 = 3;

}


impl Default for Bounds {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__Bounds__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__Bounds__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Bounds {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Bounds__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Bounds__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Bounds__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Bounds {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Bounds where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/Bounds";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__Bounds() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__EntityCategory() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__EntityCategory__init(msg: *mut EntityCategory) -> bool;
    fn simulation_interfaces__msg__EntityCategory__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EntityCategory>, size: usize) -> bool;
    fn simulation_interfaces__msg__EntityCategory__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EntityCategory>);
    fn simulation_interfaces__msg__EntityCategory__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EntityCategory>, out_seq: *mut rosidl_runtime_rs::Sequence<EntityCategory>) -> bool;
}

// Corresponds to simulation_interfaces__msg__EntityCategory
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Entity major category, which often warrants a specific way to handle such entity, e.g. when handling humans
/// or mapping persistence for dynamic vs static objects.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EntityCategory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub category: u8,

}

impl EntityCategory {
    /// Generic or unspecified type.
    pub const CATEGORY_OBJECT: u8 = 0;

    /// A broad category for mobile robots, arms, drones etc.,
    /// usually with ROS 2 interfaces.
    pub const CATEGORY_ROBOT: u8 = 1;

    /// Simulated humans, e.g. pedestrians, warehouse workers.
    /// Compared to CATEGORY_DYNAMIC_OBJECT, humans are often expected to be treated
    /// exceptionally in regards to safety constraints.
    pub const CATEGORY_HUMAN: u8 = 2;

    /// Vehicles, animals, mobile obstacles, typically to present a detection and
    /// tracking challenge, such as when simulation is used to test robot perception
    /// or navigation stack.
    pub const CATEGORY_DYNAMIC_OBJECT: u8 = 4;

    /// Any object which is static, e.g. not supposed to change its pose
    /// unless by means of SetEntityState.
    pub const CATEGORY_STATIC_OBJECT: u8 = 5;

}


impl Default for EntityCategory {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__EntityCategory__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__EntityCategory__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EntityCategory {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityCategory__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityCategory__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityCategory__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EntityCategory {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EntityCategory where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/EntityCategory";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__EntityCategory() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__EntityFilters() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__EntityFilters__init(msg: *mut EntityFilters) -> bool;
    fn simulation_interfaces__msg__EntityFilters__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EntityFilters>, size: usize) -> bool;
    fn simulation_interfaces__msg__EntityFilters__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EntityFilters>);
    fn simulation_interfaces__msg__EntityFilters__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EntityFilters>, out_seq: *mut rosidl_runtime_rs::Sequence<EntityFilters>) -> bool;
}

// Corresponds to simulation_interfaces__msg__EntityFilters
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// A set of filters to apply to entity queries. See GetEntities, GetEntitiesStates.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EntityFilters {
    /// Optional, defaults to empty. Return entities with matching names.
    /// Entity names are matched with the filter regular expression.
    /// An empty filter will result in all entities being returned.
    /// The regular expression syntax is POSIX Extended,
    /// see https://pubs.opengroup.org/onlinepubs/9799919799/ definitions.
    /// Applies together with other filters (categories, tags).
    pub filter: rosidl_runtime_rs::String,

    /// Optional, defaults to empty, which means no category filter.
    /// Entities matching any of the categories will be returned.
    /// To get entity category, use GetEntityInfo.
    /// Applies together with other filters (filter, tags).
    /// Check ENTITY_CATEGORIES in GetSimulatorFeatures to determine if
    /// your simulator supports entity categories.
    pub categories: rosidl_runtime_rs::Sequence<super::super::msg::rmw::EntityCategory>,

    /// Tags filter to apply. To get entity tags, use GetEntityInfo.
    /// Applies together with other filters (filter, categories).
    /// Check support for this feature (ENTITY_TAGS) in GetSimulationFeatures.
    pub tags: super::super::msg::rmw::TagsFilter,

    /// if bounds are not empty, the overlap filter is applied
    /// and entities overlapping with bounds will be returned.
    /// Note that not all bound types might be supported by the simulator,
    /// though at least TYPE_SPHERE needs to be supported.
    /// Check ENTITY_BOUNDS_BOX and ENTITY_BOUNDS_CONVEX in GetSimulationFeatures
    /// to determine whether your simulator supports other bound types.
    /// If service is called with filter bounds set to an unsupported type,
    /// a FEATURE_UNSUPPORTED result will be returned.
    pub bounds: super::super::msg::rmw::Bounds,

}



impl Default for EntityFilters {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__EntityFilters__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__EntityFilters__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EntityFilters {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityFilters__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityFilters__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityFilters__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EntityFilters {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EntityFilters where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/EntityFilters";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__EntityFilters() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__EntityInfo() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__EntityInfo__init(msg: *mut EntityInfo) -> bool;
    fn simulation_interfaces__msg__EntityInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EntityInfo>, size: usize) -> bool;
    fn simulation_interfaces__msg__EntityInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EntityInfo>);
    fn simulation_interfaces__msg__EntityInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EntityInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<EntityInfo>) -> bool;
}

// Corresponds to simulation_interfaces__msg__EntityInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Entity type and additional information

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EntityInfo {
    /// Major category for the entity. Extra entity type distinction can be made through tags.
    pub category: super::super::msg::rmw::EntityCategory,

    /// optional: verbose, human-readable description of the entity.
    pub description: rosidl_runtime_rs::String,

    /// optional: tags which are useful for filtering and categorizing entities further.
    pub tags: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for EntityInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__EntityInfo__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__EntityInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EntityInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EntityInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EntityInfo where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/EntityInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__EntityInfo() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__EntityState() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__EntityState__init(msg: *mut EntityState) -> bool;
    fn simulation_interfaces__msg__EntityState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EntityState>, size: usize) -> bool;
    fn simulation_interfaces__msg__EntityState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EntityState>);
    fn simulation_interfaces__msg__EntityState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EntityState>, out_seq: *mut rosidl_runtime_rs::Sequence<EntityState>) -> bool;
}

// Corresponds to simulation_interfaces__msg__EntityState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Entity current pose, twist and acceleration

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EntityState {
    /// Reference frame and timestamp for pose and twist. Empty frame defaults to world.
    pub header: std_msgs::msg::rmw::Header,

    /// Pose in reference frame, ground truth.
    pub pose: geometry_msgs::msg::rmw::Pose,

    /// Ground truth linear and angular velocities
    /// observed in the frame specified by header.frame_id
    /// See https://github.com/ros2/common_interfaces/pull/240 for conventions.
    pub twist: geometry_msgs::msg::rmw::Twist,

    /// Linear and angular acceleration ground truth, following the same convention.
    pub acceleration: geometry_msgs::msg::rmw::Accel,

}



impl Default for EntityState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__EntityState__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__EntityState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EntityState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__EntityState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EntityState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EntityState where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/EntityState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__EntityState() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__NamedPose() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__NamedPose__init(msg: *mut NamedPose) -> bool;
    fn simulation_interfaces__msg__NamedPose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NamedPose>, size: usize) -> bool;
    fn simulation_interfaces__msg__NamedPose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NamedPose>);
    fn simulation_interfaces__msg__NamedPose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NamedPose>, out_seq: *mut rosidl_runtime_rs::Sequence<NamedPose>) -> bool;
}

// Corresponds to simulation_interfaces__msg__NamedPose
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// A named pose defined in the simulation for certain purposes such as spawning.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NamedPose {
    /// Unique name.
    pub name: rosidl_runtime_rs::String,

    /// Description for the user, e.g. "near the charging station".
    pub description: rosidl_runtime_rs::String,

    /// Optional tags which can be used to determine the named pose
    /// purpose, for example: "spawn", "parking", "navigation_goal",
    /// as well as fitting entity types e.g. "drone", "turtlebot3".
    pub tags: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Pose relative to world, which can be used with SpawnEntity.srv.
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for NamedPose {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__NamedPose__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__NamedPose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NamedPose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__NamedPose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__NamedPose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__NamedPose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NamedPose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NamedPose where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/NamedPose";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__NamedPose() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__Resource() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__Resource__init(msg: *mut Resource) -> bool;
    fn simulation_interfaces__msg__Resource__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Resource>, size: usize) -> bool;
    fn simulation_interfaces__msg__Resource__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Resource>);
    fn simulation_interfaces__msg__Resource__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Resource>, out_seq: *mut rosidl_runtime_rs::Sequence<Resource>) -> bool;
}

// Corresponds to simulation_interfaces__msg__Resource
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message is used to specify a resource, either by a URI or by its string content.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Resource {
    /// If uri field is empty, resource_string must not be empty.
    pub uri: rosidl_runtime_rs::String,

    /// An entity definition file passed as a string, only used if uri is empty.
    /// If uri field is not empty, resource_string field will be ignored.
    /// Simulators may support spawning from a file generated on the fly (e.g. XACRO).
    pub resource_string: rosidl_runtime_rs::String,

}



impl Default for Resource {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__Resource__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__Resource__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Resource {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Resource__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Resource__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Resource__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Resource {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Resource where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/Resource";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__Resource() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__Result() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__Result__init(msg: *mut Result) -> bool;
    fn simulation_interfaces__msg__Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Result>, size: usize) -> bool;
    fn simulation_interfaces__msg__Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Result>);
    fn simulation_interfaces__msg__Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Result>) -> bool;
}

// Corresponds to simulation_interfaces__msg__Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Result code and message for service calls.
/// Note that additional results for specific services can defined within them using values above 100.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Result {
    /// Result to be checked on return from service interface call
    pub result: u8,

    /// Additional error description when useful.
    pub error_message: rosidl_runtime_rs::String,

}

impl Result {
    /// Feature is not supported by the simulator, check GetSimulatorFeatures.
    /// While feature support can sometimes be deduced from presence of corresponding
    /// service / action interface, in other cases it is about supporting certain
    /// call parameters, formats and options within interface call.
    pub const RESULT_FEATURE_UNSUPPORTED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RESULT_OK: u8 = 1;

    /// No match for input (such as when entity name does not exist).
    pub const RESULT_NOT_FOUND: u8 = 2;

    /// Simulator is in an incorrect state for this interface call, e.g. a service
    /// requires paused state but the simulator is not paused.
    pub const RESULT_INCORRECT_STATE: u8 = 3;

    /// Request could not be completed successfully even though feature is supported
    /// and the input is correct; check error_message for details.
    /// Implementation rule: check extended codes for called service
    ///  (e.g. SpawnEntity) to provide a return code which is more specific.
    pub const RESULT_OPERATION_FAILED: u8 = 4;

}


impl Default for Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__Result__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Result where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__Result() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__SimulationState() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__SimulationState__init(msg: *mut SimulationState) -> bool;
    fn simulation_interfaces__msg__SimulationState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulationState>, size: usize) -> bool;
    fn simulation_interfaces__msg__SimulationState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulationState>);
    fn simulation_interfaces__msg__SimulationState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulationState>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulationState>) -> bool;
}

// Corresponds to simulation_interfaces__msg__SimulationState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Simulation states used in SetSimulationState and returned in GetSimulationState

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulationState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,

}

impl SimulationState {
    /// Simulation is stopped, which is equivalent to pausing and resetting with ALL_PAUSED.
    /// This is typically the default state when simulator is launched.
    /// Stopped simulation can be played. It can also be paused, which means
    /// starting simulation in a paused state immediately,
    /// without any time steps for physics or simulated clock ticks.
    pub const STATE_STOPPED: u8 = 0;

    /// Simulation is playing, can be either paused or stopped.
    pub const STATE_PLAYING: u8 = 1;

    /// Simulation is paused, can be either stopped (which will reset it) or played.
    pub const STATE_PAUSED: u8 = 2;

    /// Closing the simulator application. Switching from STATE_PLAYING or STATE_PAUSED
    /// states is expected to stop the simulation first, and then exit.
    /// Simulation interfaces will become unavailable after quitting.
    /// Running simulation application is outside of the simulation interfaces as
    /// there is no service to handle the call when the simulator is not up.
    pub const STATE_QUITTING: u8 = 3;

    /// Simulation world is currently unloaded.
    /// The simulation is inactive and cannot be started, stopped, or paused.
    pub const STATE_NO_WORLD: u8 = 4;

    /// Simulation world is currently loading.
    /// The simulation is inactive while world is loading and cannot be started, stopped, or paused.
    pub const STATE_LOADING_WORLD: u8 = 5;

}


impl Default for SimulationState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__SimulationState__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__SimulationState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulationState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__SimulationState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__SimulationState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__SimulationState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulationState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulationState where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/SimulationState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__SimulationState() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__SimulatorFeatures() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__SimulatorFeatures__init(msg: *mut SimulatorFeatures) -> bool;
    fn simulation_interfaces__msg__SimulatorFeatures__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulatorFeatures>, size: usize) -> bool;
    fn simulation_interfaces__msg__SimulatorFeatures__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulatorFeatures>);
    fn simulation_interfaces__msg__SimulatorFeatures__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulatorFeatures>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulatorFeatures>) -> bool;
}

// Corresponds to simulation_interfaces__msg__SimulatorFeatures
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Features supported by the simulator.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulatorFeatures {
    /// A list of simulation features as specified by the list above.
    pub features: rosidl_runtime_rs::Sequence<u16>,

    /// A list of additional supported formats for spawning, which might be empty. Values may include
    ///  * sdf (SDFormat)
    ///  * urdf (Unified Robot Description Format)
    ///  * usd (Universal Scene Description)
    ///  * mjcf (MuJoCo's XML format)
    /// or whatever simulator-native formats that are supported.
    pub spawn_formats: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Optional: extra information for the caller, which could point to
    /// documentation, version compatibility and other useful meta information.
    pub custom_info: rosidl_runtime_rs::String,

}

impl SimulatorFeatures {
    /// Supports spawn interface (SpawnEntity).
    pub const SPAWNING: u8 = 0;

    /// Supports deleting entities (DeleteEntity).
    pub const DELETING: u8 = 1;

    /// Supports predefined named poses (GetNamedPoses).
    pub const NAMED_POSES: u8 = 2;

    /// Supports pose bounds (GetNamedPoseBounds).
    pub const POSE_BOUNDS: u8 = 3;

    /// Supports entity tags in interfaces using EntityFilters, such as GetEntities.
    pub const ENTITY_TAGS: u8 = 4;

    /// Supports entity bounds (GetEntityBounds).
    pub const ENTITY_BOUNDS: u8 = 5;

    /// Supports entity filtering with bounds with TYPE_BOX.
    pub const ENTITY_BOUNDS_BOX: u8 = 6;

    /// Supports entity filtering with Bounds TYPE_CONVEX_HULL.
    pub const ENTITY_BOUNDS_CONVEX: u8 = 7;

    /// Supports entity categories, such as in use with EntityFilters or SetEntityInfo.
    pub const ENTITY_CATEGORIES: u8 = 8;

    /// Supports SpawnEntity resource_string field.
    pub const SPAWNING_RESOURCE_STRING: u8 = 9;

    /// Supports GetEntityState interface.
    pub const ENTITY_STATE_GETTING: u8 = 10;

    /// Supports SetEntityState interface.
    pub const ENTITY_STATE_SETTING: u8 = 11;

    /// Supports GetEntityInfo interface.
    pub const ENTITY_INFO_GETTING: u8 = 12;

    /// Supports SetEntityInfo interface.
    pub const ENTITY_INFO_SETTING: u8 = 13;

    /// Supports GetSpawnables interface.
    pub const SPAWNABLES: u8 = 14;

    /// Supports one or more ways to reset the simulation through ResetSimulation.
    pub const SIMULATION_RESET: u8 = 20;

    /// Supports SCOPE_TIME flag for resetting.
    pub const SIMULATION_RESET_TIME: u8 = 21;

    /// Supports SCOPE_STATE flag for resetting.
    pub const SIMULATION_RESET_STATE: u8 = 22;

    /// Supports SCOPE_SPAWNED flag for resetting.
    pub const SIMULATION_RESET_SPAWNED: u8 = 23;

    /// Supports GetSimulationState interface.
    pub const SIMULATION_STATE_GETTING: u8 = 24;

    /// Supports SetSimulationState interface. Check SIMULATION_STATE_PAUSE feature
    /// for setting STATE_PAUSED.
    pub const SIMULATION_STATE_SETTING: u8 = 25;

    /// Supports the STATE_PAUSED SimulationState in SetSimulationState interface.
    pub const SIMULATION_STATE_PAUSE: u8 = 26;

    /// Supports single stepping through simulation with StepSimulation interface.
    pub const STEP_SIMULATION_SINGLE: u8 = 31;

    /// Supports multi-stepping through simulation, either through StepSimulation.
    /// service or through SimulateSteps action.
    pub const STEP_SIMULATION_MULTIPLE: u8 = 32;

    /// Supports SimulateSteps action interface.
    pub const STEP_SIMULATION_ACTION: u8 = 33;

    /// Supports LoadWorld interface
    pub const WORLD_LOADING: u8 = 40;

    /// Supports LoadWorld resource_string field
    pub const WORLD_RESOURCE_STRING: u8 = 41;

    /// Supports world tags and tag filtering
    pub const WORLD_TAGS: u8 = 42;

    /// Supports UnloadWorld interface
    pub const WORLD_UNLOADING: u8 = 43;

    /// Supports GetCurrentWorld interface
    pub const WORLD_INFO_GETTING: u8 = 44;

    /// Supports GetAvailableWorlds interface
    pub const AVAILABLE_WORLDS: u8 = 45;

}


impl Default for SimulatorFeatures {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__SimulatorFeatures__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__SimulatorFeatures__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulatorFeatures {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__SimulatorFeatures__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__SimulatorFeatures__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__SimulatorFeatures__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulatorFeatures {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulatorFeatures where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/SimulatorFeatures";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__SimulatorFeatures() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__Spawnable() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__Spawnable__init(msg: *mut Spawnable) -> bool;
    fn simulation_interfaces__msg__Spawnable__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Spawnable>, size: usize) -> bool;
    fn simulation_interfaces__msg__Spawnable__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Spawnable>);
    fn simulation_interfaces__msg__Spawnable__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Spawnable>, out_seq: *mut rosidl_runtime_rs::Sequence<Spawnable>) -> bool;
}

// Corresponds to simulation_interfaces__msg__Spawnable
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Robot or other object which can be spawned in simulation runtime.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Spawnable {
    /// The resource (e.g. URDF, SDF) for the model to be spawned.
    pub entity_resource: super::super::msg::rmw::Resource,

    /// Optional description for the user, e.g. "robot X with sensors A,B,C".
    pub description: rosidl_runtime_rs::String,

    /// Optional spawn area bounds which fully encompass this object.
    pub spawn_bounds: super::super::msg::rmw::Bounds,

}



impl Default for Spawnable {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__Spawnable__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__Spawnable__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Spawnable {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Spawnable__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Spawnable__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__Spawnable__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Spawnable {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Spawnable where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/Spawnable";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__Spawnable() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__TagsFilter() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__TagsFilter__init(msg: *mut TagsFilter) -> bool;
    fn simulation_interfaces__msg__TagsFilter__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagsFilter>, size: usize) -> bool;
    fn simulation_interfaces__msg__TagsFilter__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagsFilter>);
    fn simulation_interfaces__msg__TagsFilter__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagsFilter>, out_seq: *mut rosidl_runtime_rs::Sequence<TagsFilter>) -> bool;
}

// Corresponds to simulation_interfaces__msg__TagsFilter
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// An utility message type for specification of tag-based filtering

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagsFilter {
    /// Optional, defaults to empty, which means no tags filter.
    /// Results matching any or all of tags will be returned, depending
    /// on tags_filter_mode.
    pub tags: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Set to control filter application for tags.
    pub filter_mode: u8,

}

impl TagsFilter {
    /// Filter with OR mode (any tag can match).
    pub const FILTER_MODE_ANY: u8 = 0;

    /// Filter with AND mode (all tags need to match).
    pub const FILTER_MODE_ALL: u8 = 1;

}


impl Default for TagsFilter {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__TagsFilter__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__TagsFilter__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagsFilter {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__TagsFilter__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__TagsFilter__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__TagsFilter__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagsFilter {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagsFilter where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/TagsFilter";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__TagsFilter() }
  }
}


#[link(name = "simulation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__WorldResource() -> *const std::ffi::c_void;
}

#[link(name = "simulation_interfaces__rosidl_generator_c")]
extern "C" {
    fn simulation_interfaces__msg__WorldResource__init(msg: *mut WorldResource) -> bool;
    fn simulation_interfaces__msg__WorldResource__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WorldResource>, size: usize) -> bool;
    fn simulation_interfaces__msg__WorldResource__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WorldResource>);
    fn simulation_interfaces__msg__WorldResource__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WorldResource>, out_seq: *mut rosidl_runtime_rs::Sequence<WorldResource>) -> bool;
}

// Corresponds to simulation_interfaces__msg__WorldResource
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// World is a virtual environment in which the simulation happens.
/// Worlds are also known as scenes or levels in some simulators.
/// Depending on the world format, loading of a world might be associated with changes
/// in certain parameters, including physics settings such as gravity.
/// World resources may be defined in standard or simulation-specific formats,
/// and, depending on the simulator, loaded from local or remote repositories.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorldResource {
    /// World name, which is not necessarily unique.
    pub name: rosidl_runtime_rs::String,

    /// The resource for the world to be loaded.
    pub world_resource: super::super::msg::rmw::Resource,

    /// Optional custom description of the world
    pub description: rosidl_runtime_rs::String,

    /// Optional tags describing the world (e.g., "indoor", "outdoor", "warehouse")
    pub tags: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for WorldResource {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simulation_interfaces__msg__WorldResource__init(&mut msg as *mut _) {
        panic!("Call to simulation_interfaces__msg__WorldResource__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WorldResource {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__WorldResource__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__WorldResource__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simulation_interfaces__msg__WorldResource__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WorldResource {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WorldResource where Self: Sized {
  const TYPE_NAME: &'static str = "simulation_interfaces/msg/WorldResource";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simulation_interfaces__msg__WorldResource() }
  }
}


