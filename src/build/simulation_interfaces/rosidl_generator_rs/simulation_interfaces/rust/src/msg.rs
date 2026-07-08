#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to simulation_interfaces__msg__Bounds
/// Bounds which are useful in several contexts, e.g. to avoid spawning with other object overlap,
/// or parking in a spot that is too small.
/// Certain goals or points might be valid for a small object, but not suitable for a large one,
/// or a differently shaped one.
/// Bounds can be also checked to ensure certain scenario conditions are met.
/// For entities, these limits are relative to entity's canonical link transform, following ROS rep-103 convention.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Bounds {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,

    /// Points defining the bounded area. Check type field to determine semantics.
    /// Valid sizes are zero (no bounds), 2 (sphere or box, depending on type field),
    /// and 3 or more (convex hull).
    pub points: Vec<geometry_msgs::msg::Vector3>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Bounds::default())
  }
}

impl rosidl_runtime_rs::Message for Bounds {
  type RmwMsg = super::msg::rmw::Bounds;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        points: msg.points
          .into_iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
        points: msg.points
          .iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      points: msg.points
          .into_iter()
          .map(geometry_msgs::msg::Vector3::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to simulation_interfaces__msg__EntityCategory
/// Entity major category, which often warrants a specific way to handle such entity, e.g. when handling humans
/// or mapping persistence for dynamic vs static objects.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EntityCategory::default())
  }
}

impl rosidl_runtime_rs::Message for EntityCategory {
  type RmwMsg = super::msg::rmw::EntityCategory;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        category: msg.category,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      category: msg.category,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      category: msg.category,
    }
  }
}


// Corresponds to simulation_interfaces__msg__EntityFilters
/// A set of filters to apply to entity queries. See GetEntities, GetEntitiesStates.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EntityFilters {
    /// Optional, defaults to empty. Return entities with matching names.
    /// Entity names are matched with the filter regular expression.
    /// An empty filter will result in all entities being returned.
    /// The regular expression syntax is POSIX Extended,
    /// see https://pubs.opengroup.org/onlinepubs/9799919799/ definitions.
    /// Applies together with other filters (categories, tags).
    pub filter: std::string::String,

    /// Optional, defaults to empty, which means no category filter.
    /// Entities matching any of the categories will be returned.
    /// To get entity category, use GetEntityInfo.
    /// Applies together with other filters (filter, tags).
    /// Check ENTITY_CATEGORIES in GetSimulatorFeatures to determine if
    /// your simulator supports entity categories.
    pub categories: Vec<super::msg::EntityCategory>,

    /// Tags filter to apply. To get entity tags, use GetEntityInfo.
    /// Applies together with other filters (filter, categories).
    /// Check support for this feature (ENTITY_TAGS) in GetSimulationFeatures.
    pub tags: super::msg::TagsFilter,

    /// if bounds are not empty, the overlap filter is applied
    /// and entities overlapping with bounds will be returned.
    /// Note that not all bound types might be supported by the simulator,
    /// though at least TYPE_SPHERE needs to be supported.
    /// Check ENTITY_BOUNDS_BOX and ENTITY_BOUNDS_CONVEX in GetSimulationFeatures
    /// to determine whether your simulator supports other bound types.
    /// If service is called with filter bounds set to an unsupported type,
    /// a FEATURE_UNSUPPORTED result will be returned.
    pub bounds: super::msg::Bounds,

}



impl Default for EntityFilters {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EntityFilters::default())
  }
}

impl rosidl_runtime_rs::Message for EntityFilters {
  type RmwMsg = super::msg::rmw::EntityFilters;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filter: msg.filter.as_str().into(),
        categories: msg.categories
          .into_iter()
          .map(|elem| super::msg::EntityCategory::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        tags: super::msg::TagsFilter::into_rmw_message(std::borrow::Cow::Owned(msg.tags)).into_owned(),
        bounds: super::msg::Bounds::into_rmw_message(std::borrow::Cow::Owned(msg.bounds)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filter: msg.filter.as_str().into(),
        categories: msg.categories
          .iter()
          .map(|elem| super::msg::EntityCategory::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        tags: super::msg::TagsFilter::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tags)).into_owned(),
        bounds: super::msg::Bounds::into_rmw_message(std::borrow::Cow::Borrowed(&msg.bounds)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      filter: msg.filter.to_string(),
      categories: msg.categories
          .into_iter()
          .map(super::msg::EntityCategory::from_rmw_message)
          .collect(),
      tags: super::msg::TagsFilter::from_rmw_message(msg.tags),
      bounds: super::msg::Bounds::from_rmw_message(msg.bounds),
    }
  }
}


// Corresponds to simulation_interfaces__msg__EntityInfo
/// Entity type and additional information

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EntityInfo {
    /// Major category for the entity. Extra entity type distinction can be made through tags.
    pub category: super::msg::EntityCategory,

    /// optional: verbose, human-readable description of the entity.
    pub description: std::string::String,

    /// optional: tags which are useful for filtering and categorizing entities further.
    pub tags: Vec<std::string::String>,

}



impl Default for EntityInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EntityInfo::default())
  }
}

impl rosidl_runtime_rs::Message for EntityInfo {
  type RmwMsg = super::msg::rmw::EntityInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        category: super::msg::EntityCategory::into_rmw_message(std::borrow::Cow::Owned(msg.category)).into_owned(),
        description: msg.description.as_str().into(),
        tags: msg.tags
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        category: super::msg::EntityCategory::into_rmw_message(std::borrow::Cow::Borrowed(&msg.category)).into_owned(),
        description: msg.description.as_str().into(),
        tags: msg.tags
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      category: super::msg::EntityCategory::from_rmw_message(msg.category),
      description: msg.description.to_string(),
      tags: msg.tags
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to simulation_interfaces__msg__EntityState
/// Entity current pose, twist and acceleration

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EntityState {
    /// Reference frame and timestamp for pose and twist. Empty frame defaults to world.
    pub header: std_msgs::msg::Header,

    /// Pose in reference frame, ground truth.
    pub pose: geometry_msgs::msg::Pose,

    /// Ground truth linear and angular velocities
    /// observed in the frame specified by header.frame_id
    /// See https://github.com/ros2/common_interfaces/pull/240 for conventions.
    pub twist: geometry_msgs::msg::Twist,

    /// Linear and angular acceleration ground truth, following the same convention.
    pub acceleration: geometry_msgs::msg::Accel,

}



impl Default for EntityState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EntityState::default())
  }
}

impl rosidl_runtime_rs::Message for EntityState {
  type RmwMsg = super::msg::rmw::EntityState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
        acceleration: geometry_msgs::msg::Accel::into_rmw_message(std::borrow::Cow::Owned(msg.acceleration)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
        acceleration: geometry_msgs::msg::Accel::into_rmw_message(std::borrow::Cow::Borrowed(&msg.acceleration)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      twist: geometry_msgs::msg::Twist::from_rmw_message(msg.twist),
      acceleration: geometry_msgs::msg::Accel::from_rmw_message(msg.acceleration),
    }
  }
}


// Corresponds to simulation_interfaces__msg__NamedPose
/// A named pose defined in the simulation for certain purposes such as spawning.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NamedPose {
    /// Unique name.
    pub name: std::string::String,

    /// Description for the user, e.g. "near the charging station".
    pub description: std::string::String,

    /// Optional tags which can be used to determine the named pose
    /// purpose, for example: "spawn", "parking", "navigation_goal",
    /// as well as fitting entity types e.g. "drone", "turtlebot3".
    pub tags: Vec<std::string::String>,

    /// Pose relative to world, which can be used with SpawnEntity.srv.
    pub pose: geometry_msgs::msg::Pose,

}



impl Default for NamedPose {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NamedPose::default())
  }
}

impl rosidl_runtime_rs::Message for NamedPose {
  type RmwMsg = super::msg::rmw::NamedPose;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        description: msg.description.as_str().into(),
        tags: msg.tags
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        description: msg.description.as_str().into(),
        tags: msg.tags
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      description: msg.description.to_string(),
      tags: msg.tags
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to simulation_interfaces__msg__Resource
/// This message is used to specify a resource, either by a URI or by its string content.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Resource {
    /// If uri field is empty, resource_string must not be empty.
    pub uri: std::string::String,

    /// An entity definition file passed as a string, only used if uri is empty.
    /// If uri field is not empty, resource_string field will be ignored.
    /// Simulators may support spawning from a file generated on the fly (e.g. XACRO).
    pub resource_string: std::string::String,

}



impl Default for Resource {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Resource::default())
  }
}

impl rosidl_runtime_rs::Message for Resource {
  type RmwMsg = super::msg::rmw::Resource;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        uri: msg.uri.as_str().into(),
        resource_string: msg.resource_string.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        uri: msg.uri.as_str().into(),
        resource_string: msg.resource_string.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      uri: msg.uri.to_string(),
      resource_string: msg.resource_string.to_string(),
    }
  }
}


// Corresponds to simulation_interfaces__msg__Result
/// Result code and message for service calls.
/// Note that additional results for specific services can defined within them using values above 100.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Result {
    /// Result to be checked on return from service interface call
    pub result: u8,

    /// Additional error description when useful.
    pub error_message: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Result::default())
  }
}

impl rosidl_runtime_rs::Message for Result {
  type RmwMsg = super::msg::rmw::Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
        error_message: msg.error_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
        error_message: msg.error_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
      error_message: msg.error_message.to_string(),
    }
  }
}


// Corresponds to simulation_interfaces__msg__SimulationState
/// Simulation states used in SetSimulationState and returned in GetSimulationState

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SimulationState::default())
  }
}

impl rosidl_runtime_rs::Message for SimulationState {
  type RmwMsg = super::msg::rmw::SimulationState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state,
    }
  }
}


// Corresponds to simulation_interfaces__msg__SimulatorFeatures
/// Features supported by the simulator.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulatorFeatures {
    /// A list of simulation features as specified by the list above.
    pub features: Vec<u16>,

    /// A list of additional supported formats for spawning, which might be empty. Values may include
    ///  * sdf (SDFormat)
    ///  * urdf (Unified Robot Description Format)
    ///  * usd (Universal Scene Description)
    ///  * mjcf (MuJoCo's XML format)
    /// or whatever simulator-native formats that are supported.
    pub spawn_formats: Vec<std::string::String>,

    /// Optional: extra information for the caller, which could point to
    /// documentation, version compatibility and other useful meta information.
    pub custom_info: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SimulatorFeatures::default())
  }
}

impl rosidl_runtime_rs::Message for SimulatorFeatures {
  type RmwMsg = super::msg::rmw::SimulatorFeatures;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        features: msg.features.into(),
        spawn_formats: msg.spawn_formats
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        custom_info: msg.custom_info.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        features: msg.features.as_slice().into(),
        spawn_formats: msg.spawn_formats
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        custom_info: msg.custom_info.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      features: msg.features
          .into_iter()
          .collect(),
      spawn_formats: msg.spawn_formats
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      custom_info: msg.custom_info.to_string(),
    }
  }
}


// Corresponds to simulation_interfaces__msg__Spawnable
/// Robot or other object which can be spawned in simulation runtime.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Spawnable {
    /// The resource (e.g. URDF, SDF) for the model to be spawned.
    pub entity_resource: super::msg::Resource,

    /// Optional description for the user, e.g. "robot X with sensors A,B,C".
    pub description: std::string::String,

    /// Optional spawn area bounds which fully encompass this object.
    pub spawn_bounds: super::msg::Bounds,

}



impl Default for Spawnable {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Spawnable::default())
  }
}

impl rosidl_runtime_rs::Message for Spawnable {
  type RmwMsg = super::msg::rmw::Spawnable;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity_resource: super::msg::Resource::into_rmw_message(std::borrow::Cow::Owned(msg.entity_resource)).into_owned(),
        description: msg.description.as_str().into(),
        spawn_bounds: super::msg::Bounds::into_rmw_message(std::borrow::Cow::Owned(msg.spawn_bounds)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity_resource: super::msg::Resource::into_rmw_message(std::borrow::Cow::Borrowed(&msg.entity_resource)).into_owned(),
        description: msg.description.as_str().into(),
        spawn_bounds: super::msg::Bounds::into_rmw_message(std::borrow::Cow::Borrowed(&msg.spawn_bounds)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity_resource: super::msg::Resource::from_rmw_message(msg.entity_resource),
      description: msg.description.to_string(),
      spawn_bounds: super::msg::Bounds::from_rmw_message(msg.spawn_bounds),
    }
  }
}


// Corresponds to simulation_interfaces__msg__TagsFilter
/// An utility message type for specification of tag-based filtering

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagsFilter {
    /// Optional, defaults to empty, which means no tags filter.
    /// Results matching any or all of tags will be returned, depending
    /// on tags_filter_mode.
    pub tags: Vec<std::string::String>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TagsFilter::default())
  }
}

impl rosidl_runtime_rs::Message for TagsFilter {
  type RmwMsg = super::msg::rmw::TagsFilter;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tags: msg.tags
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        filter_mode: msg.filter_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tags: msg.tags
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      filter_mode: msg.filter_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tags: msg.tags
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      filter_mode: msg.filter_mode,
    }
  }
}


// Corresponds to simulation_interfaces__msg__WorldResource
/// World is a virtual environment in which the simulation happens.
/// Worlds are also known as scenes or levels in some simulators.
/// Depending on the world format, loading of a world might be associated with changes
/// in certain parameters, including physics settings such as gravity.
/// World resources may be defined in standard or simulation-specific formats,
/// and, depending on the simulator, loaded from local or remote repositories.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorldResource {
    /// World name, which is not necessarily unique.
    pub name: std::string::String,

    /// The resource for the world to be loaded.
    pub world_resource: super::msg::Resource,

    /// Optional custom description of the world
    pub description: std::string::String,

    /// Optional tags describing the world (e.g., "indoor", "outdoor", "warehouse")
    pub tags: Vec<std::string::String>,

}



impl Default for WorldResource {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WorldResource::default())
  }
}

impl rosidl_runtime_rs::Message for WorldResource {
  type RmwMsg = super::msg::rmw::WorldResource;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        world_resource: super::msg::Resource::into_rmw_message(std::borrow::Cow::Owned(msg.world_resource)).into_owned(),
        description: msg.description.as_str().into(),
        tags: msg.tags
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        world_resource: super::msg::Resource::into_rmw_message(std::borrow::Cow::Borrowed(&msg.world_resource)).into_owned(),
        description: msg.description.as_str().into(),
        tags: msg.tags
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      world_resource: super::msg::Resource::from_rmw_message(msg.world_resource),
      description: msg.description.to_string(),
      tags: msg.tags
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


