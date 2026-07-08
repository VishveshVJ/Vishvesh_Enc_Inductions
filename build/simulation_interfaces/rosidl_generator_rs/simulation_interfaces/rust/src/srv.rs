#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to simulation_interfaces__srv__DeleteEntity_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeleteEntity_Request {
    /// Entity identified by its unique name with a namespace,
    /// as returned by SpawnEntity or GetEntities.
    pub entity: std::string::String,

}



impl Default for DeleteEntity_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DeleteEntity_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DeleteEntity_Request {
  type RmwMsg = super::srv::rmw::DeleteEntity_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity: msg.entity.to_string(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__DeleteEntity_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeleteEntity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

}



impl Default for DeleteEntity_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DeleteEntity_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DeleteEntity_Response {
  type RmwMsg = super::srv::rmw::DeleteEntity_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetAvailableWorlds_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableWorlds_Request {
    /// Optional field for additional sources (local or remote) to search,
    /// specified as standard URIs if possible.
    pub additional_sources: Vec<std::string::String>,

    /// Only get worlds with tags matching the filter. The filter is optional and matches everything by default.
    /// This feature is supported if WORLD_TAGS feature is included in output of GetSimulatorFeatures.
    pub filter: super::msg::TagsFilter,

    /// If true, only offline/local sources should be searched. Defaults to false.
    pub offline_only: bool,

    /// If true, the simulator will continue to search sources even if some fail.
    /// The service will return success if any source yielded worlds. Defaults to false.
    pub continue_on_error: bool,

}



impl Default for GetAvailableWorlds_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetAvailableWorlds_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetAvailableWorlds_Request {
  type RmwMsg = super::srv::rmw::GetAvailableWorlds_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        additional_sources: msg.additional_sources
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        filter: super::msg::TagsFilter::into_rmw_message(std::borrow::Cow::Owned(msg.filter)).into_owned(),
        offline_only: msg.offline_only,
        continue_on_error: msg.continue_on_error,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        additional_sources: msg.additional_sources
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        filter: super::msg::TagsFilter::into_rmw_message(std::borrow::Cow::Borrowed(&msg.filter)).into_owned(),
      offline_only: msg.offline_only,
      continue_on_error: msg.continue_on_error,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      additional_sources: msg.additional_sources
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      filter: super::msg::TagsFilter::from_rmw_message(msg.filter),
      offline_only: msg.offline_only,
      continue_on_error: msg.continue_on_error,
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetAvailableWorlds_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableWorlds_Response {
    /// Standard result message. A specific result code should be used if some sources were not accessible.
    pub result: super::msg::Result,

    /// Available world resources.
    pub worlds: Vec<super::msg::WorldResource>,

}

impl GetAvailableWorlds_Response {
    /// Some default sources could not be accessed.
    pub const DEFAULT_SOURCES_FAILED: u8 = 101;

}


impl Default for GetAvailableWorlds_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetAvailableWorlds_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetAvailableWorlds_Response {
  type RmwMsg = super::srv::rmw::GetAvailableWorlds_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        worlds: msg.worlds
          .into_iter()
          .map(|elem| super::msg::WorldResource::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        worlds: msg.worlds
          .iter()
          .map(|elem| super::msg::WorldResource::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      worlds: msg.worlds
          .into_iter()
          .map(super::msg::WorldResource::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetCurrentWorld_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentWorld_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetCurrentWorld_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCurrentWorld_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetCurrentWorld_Request {
  type RmwMsg = super::srv::rmw::GetCurrentWorld_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetCurrentWorld_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentWorld_Response {
    /// Standard result message
    pub result: super::msg::Result,

    /// Information about the currently loaded world. Only valid if result is RESULT_OK.
    pub world: super::msg::WorldResource,

}

impl GetCurrentWorld_Response {
    /// No world is loaded at the moment.
    pub const NO_WORLD_LOADED: u8 = 101;

}


impl Default for GetCurrentWorld_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCurrentWorld_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetCurrentWorld_Response {
  type RmwMsg = super::srv::rmw::GetCurrentWorld_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        world: super::msg::WorldResource::into_rmw_message(std::borrow::Cow::Owned(msg.world)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        world: super::msg::WorldResource::into_rmw_message(std::borrow::Cow::Borrowed(&msg.world)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      world: super::msg::WorldResource::from_rmw_message(msg.world),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetEntities_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntities_Request {
    /// Optional filters for the query, including name, category, tags,
    /// and overlap filters.
    pub filters: super::msg::EntityFilters,

}



impl Default for GetEntities_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntities_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntities_Request {
  type RmwMsg = super::srv::rmw::GetEntities_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filters: super::msg::EntityFilters::into_rmw_message(std::borrow::Cow::Owned(msg.filters)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filters: super::msg::EntityFilters::into_rmw_message(std::borrow::Cow::Borrowed(&msg.filters)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      filters: super::msg::EntityFilters::from_rmw_message(msg.filters),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetEntities_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntities_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

    /// Unique names of all entities matching the filters.
    pub entities: Vec<std::string::String>,

}



impl Default for GetEntities_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntities_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntities_Response {
  type RmwMsg = super::srv::rmw::GetEntities_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        entities: msg.entities
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        entities: msg.entities
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      entities: msg.entities
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetEntitiesStates_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntitiesStates_Request {
    /// Optional filters for the query, including name, category, tags,
    /// and overlap filters.
    pub filters: super::msg::EntityFilters,

}



impl Default for GetEntitiesStates_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntitiesStates_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntitiesStates_Request {
  type RmwMsg = super::srv::rmw::GetEntitiesStates_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filters: super::msg::EntityFilters::into_rmw_message(std::borrow::Cow::Owned(msg.filters)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filters: super::msg::EntityFilters::into_rmw_message(std::borrow::Cow::Borrowed(&msg.filters)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      filters: super::msg::EntityFilters::from_rmw_message(msg.filters),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetEntitiesStates_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntitiesStates_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

    /// Unique names of all entities matching the filters.
    pub entities: Vec<std::string::String>,

    /// States for these entities.
    pub states: Vec<super::msg::EntityState>,

}



impl Default for GetEntitiesStates_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntitiesStates_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntitiesStates_Response {
  type RmwMsg = super::srv::rmw::GetEntitiesStates_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        entities: msg.entities
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .into_iter()
          .map(|elem| super::msg::EntityState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        entities: msg.entities
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .iter()
          .map(|elem| super::msg::EntityState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      entities: msg.entities
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      states: msg.states
          .into_iter()
          .map(super::msg::EntityState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetEntityBounds_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityBounds_Request {
    /// Entity identified by its unique name as returned by GetEntities / SpawnEntity.
    pub entity: std::string::String,

}



impl Default for GetEntityBounds_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntityBounds_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntityBounds_Request {
  type RmwMsg = super::srv::rmw::GetEntityBounds_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity: msg.entity.to_string(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetEntityBounds_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityBounds_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

    /// Entity bounds. Only valid if result.result_code is OK.
    /// Bounds with TYPE_BOX should be returned, unless there is a configuration
    /// parameter for the simulator to control the type and it is set otherwise.
    pub bounds: super::msg::Bounds,

}



impl Default for GetEntityBounds_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntityBounds_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntityBounds_Response {
  type RmwMsg = super::srv::rmw::GetEntityBounds_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        bounds: super::msg::Bounds::into_rmw_message(std::borrow::Cow::Owned(msg.bounds)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        bounds: super::msg::Bounds::into_rmw_message(std::borrow::Cow::Borrowed(&msg.bounds)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      bounds: super::msg::Bounds::from_rmw_message(msg.bounds),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetEntityInfo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityInfo_Request {
    /// Entity identified by its unique name as returned by GetEntities.
    pub entity: std::string::String,

}



impl Default for GetEntityInfo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntityInfo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntityInfo_Request {
  type RmwMsg = super::srv::rmw::GetEntityInfo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity: msg.entity.to_string(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetEntityInfo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

    /// Only valid if result.result_code is OK.
    pub info: super::msg::EntityInfo,

}



impl Default for GetEntityInfo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntityInfo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntityInfo_Response {
  type RmwMsg = super::srv::rmw::GetEntityInfo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        info: super::msg::EntityInfo::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        info: super::msg::EntityInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      info: super::msg::EntityInfo::from_rmw_message(msg.info),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetEntityState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityState_Request {
    /// Entity identified by its unique name as returned by GetEntities / SpawnEntity.
    pub entity: std::string::String,

}



impl Default for GetEntityState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntityState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntityState_Request {
  type RmwMsg = super::srv::rmw::GetEntityState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity: msg.entity.to_string(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetEntityState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

    /// Entity ground truth state. Valid when result.result = OK.
    pub state: super::msg::EntityState,

}



impl Default for GetEntityState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntityState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntityState_Response {
  type RmwMsg = super::srv::rmw::GetEntityState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        state: super::msg::EntityState::into_rmw_message(std::borrow::Cow::Owned(msg.state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        state: super::msg::EntityState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      state: super::msg::EntityState::from_rmw_message(msg.state),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetNamedPoseBounds_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNamedPoseBounds_Request {
    /// unique name (as returned from GetNamedPoses).
    pub name: std::string::String,

}



impl Default for GetNamedPoseBounds_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetNamedPoseBounds_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetNamedPoseBounds_Request {
  type RmwMsg = super::srv::rmw::GetNamedPoseBounds_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetNamedPoseBounds_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNamedPoseBounds_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

    /// bounds for the named pose.
    pub bounds: super::msg::Bounds,

}



impl Default for GetNamedPoseBounds_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetNamedPoseBounds_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetNamedPoseBounds_Response {
  type RmwMsg = super::srv::rmw::GetNamedPoseBounds_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        bounds: super::msg::Bounds::into_rmw_message(std::borrow::Cow::Owned(msg.bounds)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        bounds: super::msg::Bounds::into_rmw_message(std::borrow::Cow::Borrowed(&msg.bounds)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      bounds: super::msg::Bounds::from_rmw_message(msg.bounds),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetNamedPoses_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNamedPoses_Request {
    /// Tags filter to apply. Only named poses with matching tags field
    /// will be returned. Can be empty (see TagsFilter).
    pub tags: super::msg::TagsFilter,

}



impl Default for GetNamedPoses_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetNamedPoses_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetNamedPoses_Request {
  type RmwMsg = super::srv::rmw::GetNamedPoses_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tags: super::msg::TagsFilter::into_rmw_message(std::borrow::Cow::Owned(msg.tags)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tags: super::msg::TagsFilter::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tags)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tags: super::msg::TagsFilter::from_rmw_message(msg.tags),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetNamedPoses_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNamedPoses_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

    /// A list of predefined poses, which may be empty.
    pub poses: Vec<super::msg::NamedPose>,

}



impl Default for GetNamedPoses_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetNamedPoses_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetNamedPoses_Response {
  type RmwMsg = super::srv::rmw::GetNamedPoses_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        poses: msg.poses
          .into_iter()
          .map(|elem| super::msg::NamedPose::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        poses: msg.poses
          .iter()
          .map(|elem| super::msg::NamedPose::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      poses: msg.poses
          .into_iter()
          .map(super::msg::NamedPose::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetSimulationState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSimulationState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetSimulationState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSimulationState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetSimulationState_Request {
  type RmwMsg = super::srv::rmw::GetSimulationState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetSimulationState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSimulationState_Response {
    /// Current state of the simulation.
    pub state: super::msg::SimulationState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

}



impl Default for GetSimulationState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSimulationState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetSimulationState_Response {
  type RmwMsg = super::srv::rmw::GetSimulationState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: super::msg::SimulationState::into_rmw_message(std::borrow::Cow::Owned(msg.state)).into_owned(),
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: super::msg::SimulationState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.state)).into_owned(),
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: super::msg::SimulationState::from_rmw_message(msg.state),
      result: super::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetSimulatorFeatures_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSimulatorFeatures_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetSimulatorFeatures_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSimulatorFeatures_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetSimulatorFeatures_Request {
  type RmwMsg = super::srv::rmw::GetSimulatorFeatures_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetSimulatorFeatures_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSimulatorFeatures_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub features: super::msg::SimulatorFeatures,

}



impl Default for GetSimulatorFeatures_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSimulatorFeatures_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetSimulatorFeatures_Response {
  type RmwMsg = super::srv::rmw::GetSimulatorFeatures_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        features: super::msg::SimulatorFeatures::into_rmw_message(std::borrow::Cow::Owned(msg.features)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        features: super::msg::SimulatorFeatures::into_rmw_message(std::borrow::Cow::Borrowed(&msg.features)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      features: super::msg::SimulatorFeatures::from_rmw_message(msg.features),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetSpawnables_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub sources: Vec<std::string::String>,

}



impl Default for GetSpawnables_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSpawnables_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetSpawnables_Request {
  type RmwMsg = super::srv::rmw::GetSpawnables_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sources: msg.sources
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sources: msg.sources
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sources: msg.sources
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__GetSpawnables_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSpawnables_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

    /// Spawnable objects with URI and additional information.
    pub spawnables: Vec<super::msg::Spawnable>,

}



impl Default for GetSpawnables_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSpawnables_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetSpawnables_Response {
  type RmwMsg = super::srv::rmw::GetSpawnables_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        spawnables: msg.spawnables
          .into_iter()
          .map(|elem| super::msg::Spawnable::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        spawnables: msg.spawnables
          .iter()
          .map(|elem| super::msg::Spawnable::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      spawnables: msg.spawnables
          .into_iter()
          .map(super::msg::Spawnable::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__LoadWorld_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadWorld_Request {
    /// Resource such as SDF, USD, MJCF, or other simulator-native format world file or,
    /// Simulation world passed as a string.
    pub world_resource: super::msg::Resource,

    /// Fail on unsupported elements (such as SDFormat sub-tags). By default, such elements are ignored.
    pub fail_on_unsupported_element: bool,

    /// Ignore missing or unsupported assets. By default, missing or unsupported assets result in failure.
    pub ignore_missing_or_unsupported_assets: bool,

}



impl Default for LoadWorld_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LoadWorld_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LoadWorld_Request {
  type RmwMsg = super::srv::rmw::LoadWorld_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        world_resource: super::msg::Resource::into_rmw_message(std::borrow::Cow::Owned(msg.world_resource)).into_owned(),
        fail_on_unsupported_element: msg.fail_on_unsupported_element,
        ignore_missing_or_unsupported_assets: msg.ignore_missing_or_unsupported_assets,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        world_resource: super::msg::Resource::into_rmw_message(std::borrow::Cow::Borrowed(&msg.world_resource)).into_owned(),
      fail_on_unsupported_element: msg.fail_on_unsupported_element,
      ignore_missing_or_unsupported_assets: msg.ignore_missing_or_unsupported_assets,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      world_resource: super::msg::Resource::from_rmw_message(msg.world_resource),
      fail_on_unsupported_element: msg.fail_on_unsupported_element,
      ignore_missing_or_unsupported_assets: msg.ignore_missing_or_unsupported_assets,
    }
  }
}


// Corresponds to simulation_interfaces__srv__LoadWorld_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadWorld_Response {
    /// Standard result message
    pub result: super::msg::Result,

    /// Information about the loaded world. Only valid if result is RESULT_OK.
    pub world: super::msg::WorldResource,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LoadWorld_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LoadWorld_Response {
  type RmwMsg = super::srv::rmw::LoadWorld_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        world: super::msg::WorldResource::into_rmw_message(std::borrow::Cow::Owned(msg.world)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        world: super::msg::WorldResource::into_rmw_message(std::borrow::Cow::Borrowed(&msg.world)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      world: super::msg::WorldResource::from_rmw_message(msg.world),
    }
  }
}


// Corresponds to simulation_interfaces__srv__ResetSimulation_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetSimulation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ResetSimulation_Request {
  type RmwMsg = super::srv::rmw::ResetSimulation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        scope: msg.scope,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      scope: msg.scope,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      scope: msg.scope,
    }
  }
}


// Corresponds to simulation_interfaces__srv__ResetSimulation_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetSimulation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

}



impl Default for ResetSimulation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetSimulation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ResetSimulation_Response {
  type RmwMsg = super::srv::rmw::ResetSimulation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to simulation_interfaces__srv__SetEntityInfo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityInfo_Request {
    /// Entity identified by its unique name as returned by GetEntities.
    pub entity: std::string::String,

    /// EntityInfo to set to the entity, which will override its current values.
    pub info: super::msg::EntityInfo,

}



impl Default for SetEntityInfo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetEntityInfo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetEntityInfo_Request {
  type RmwMsg = super::srv::rmw::SetEntityInfo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
        info: super::msg::EntityInfo::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
        info: super::msg::EntityInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity: msg.entity.to_string(),
      info: super::msg::EntityInfo::from_rmw_message(msg.info),
    }
  }
}


// Corresponds to simulation_interfaces__srv__SetEntityInfo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

}



impl Default for SetEntityInfo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetEntityInfo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetEntityInfo_Response {
  type RmwMsg = super::srv::rmw::SetEntityInfo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to simulation_interfaces__srv__SetEntityState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityState_Request {
    /// Entity identified by its unique name as returned by GetEntities / SpawnEntity.
    pub entity: std::string::String,

    /// New state to set immediately. The timestamp in header is ignored.
    /// If non-zero twist or acceleration is requested for static object, the service call
    /// fails and RESULT_OPERATION_FAILED is returned.
    /// Note that the acceleration field may be ignored by simulators.
    pub state: super::msg::EntityState,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetEntityState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetEntityState_Request {
  type RmwMsg = super::srv::rmw::SetEntityState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
        state: super::msg::EntityState::into_rmw_message(std::borrow::Cow::Owned(msg.state)).into_owned(),
        set_pose: msg.set_pose,
        set_twist: msg.set_twist,
        set_acceleration: msg.set_acceleration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
        state: super::msg::EntityState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.state)).into_owned(),
      set_pose: msg.set_pose,
      set_twist: msg.set_twist,
      set_acceleration: msg.set_acceleration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity: msg.entity.to_string(),
      state: super::msg::EntityState::from_rmw_message(msg.state),
      set_pose: msg.set_pose,
      set_twist: msg.set_twist,
      set_acceleration: msg.set_acceleration,
    }
  }
}


// Corresponds to simulation_interfaces__srv__SetEntityState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

}

impl SetEntityState_Response {
    /// Additional result.result_code values for this service. Check result.error_message for further details.
    /// initial_pose is invalid, such as when the quaternion is invalid or position
    /// exceeds simulator world bounds.
    pub const INVALID_POSE: u8 = 101;

}


impl Default for SetEntityState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetEntityState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetEntityState_Response {
  type RmwMsg = super::srv::rmw::SetEntityState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to simulation_interfaces__srv__SetSimulationState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSimulationState_Request {
    /// Target state to set for the simulation.
    pub state: super::msg::SimulationState,

}



impl Default for SetSimulationState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSimulationState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetSimulationState_Request {
  type RmwMsg = super::srv::rmw::SetSimulationState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: super::msg::SimulationState::into_rmw_message(std::borrow::Cow::Owned(msg.state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: super::msg::SimulationState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: super::msg::SimulationState::from_rmw_message(msg.state),
    }
  }
}


// Corresponds to simulation_interfaces__srv__SetSimulationState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSimulationState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSimulationState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetSimulationState_Response {
  type RmwMsg = super::srv::rmw::SetSimulationState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to simulation_interfaces__srv__SpawnEntity_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnEntity_Request {
    /// A name to give to the spawned entity.
    /// If empty, a name field in the uri file or resource_string will be used,
    /// if supported and not empty (e.g. "name" field in SDFormat, URDF).
    /// If the name is still empty or not unique (as determined by the simulator),
    /// the service returns a generated name in the entity_name response field if the
    /// allow_renaming field is set to true. Otherwise, the service call fails and an
    /// error is returned.
    pub name: std::string::String,

    /// Determines whether the spawning succeeds with a non-unique name.
    /// If it is set to true, the user should always check entity_name response field
    /// and use it for any further interactions.
    pub allow_renaming: bool,

    /// Resource such as SDFormat, URDF, USD or MJCF file, a native prefab, etc.
    /// Valid URIs can be determined by calling GetSpawnables first.
    /// Check simulator format support via the spawn_formats field in GetSimulatorFeatures.
    /// Using resource_string is supported if GetSimulatorFeatures includes
    /// the SPAWNING_RESOURCE_STRING feature.
    pub entity_resource: super::msg::Resource,

    /// Spawn the entity with all its interfaces under this namespace.
    pub entity_namespace: std::string::String,

    /// Initial entity pose.
    /// The header contains a reference frame, which defaults to global "world" frame.
    /// This frame must be known to the simulator, e.g. of an object spawned earlier.
    /// The timestamp field in the header is ignored.
    pub initial_pose: geometry_msgs::msg::PoseStamped,

}



impl Default for SpawnEntity_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SpawnEntity_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SpawnEntity_Request {
  type RmwMsg = super::srv::rmw::SpawnEntity_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        allow_renaming: msg.allow_renaming,
        entity_resource: super::msg::Resource::into_rmw_message(std::borrow::Cow::Owned(msg.entity_resource)).into_owned(),
        entity_namespace: msg.entity_namespace.as_str().into(),
        initial_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.initial_pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      allow_renaming: msg.allow_renaming,
        entity_resource: super::msg::Resource::into_rmw_message(std::borrow::Cow::Borrowed(&msg.entity_resource)).into_owned(),
        entity_namespace: msg.entity_namespace.as_str().into(),
        initial_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.initial_pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      allow_renaming: msg.allow_renaming,
      entity_resource: super::msg::Resource::from_rmw_message(msg.entity_resource),
      entity_namespace: msg.entity_namespace.to_string(),
      initial_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.initial_pose),
    }
  }
}


// Corresponds to simulation_interfaces__srv__SpawnEntity_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnEntity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::Result,

    /// Spawned entity full name, guaranteed to be unique in the simulation.
    /// If allow_renaming is true, it may differ from the request name field.
    pub entity_name: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SpawnEntity_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SpawnEntity_Response {
  type RmwMsg = super::srv::rmw::SpawnEntity_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        entity_name: msg.entity_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
        entity_name: msg.entity_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
      entity_name: msg.entity_name.to_string(),
    }
  }
}


// Corresponds to simulation_interfaces__srv__StepSimulation_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StepSimulation_Request {
    /// Step through the simulation loop this many times.
    pub steps: u64,

}



impl Default for StepSimulation_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StepSimulation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StepSimulation_Request {
  type RmwMsg = super::srv::rmw::StepSimulation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        steps: msg.steps,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      steps: msg.steps,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      steps: msg.steps,
    }
  }
}


// Corresponds to simulation_interfaces__srv__StepSimulation_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StepSimulation_Response {
    /// Calling with simulation not paused will return RESULT_OPERATION_FAILED and error message.
    pub result: super::msg::Result,

}



impl Default for StepSimulation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StepSimulation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StepSimulation_Response {
  type RmwMsg = super::srv::rmw::StepSimulation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to simulation_interfaces__srv__UnloadWorld_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnloadWorld_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for UnloadWorld_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::UnloadWorld_Request::default())
  }
}

impl rosidl_runtime_rs::Message for UnloadWorld_Request {
  type RmwMsg = super::srv::rmw::UnloadWorld_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to simulation_interfaces__srv__UnloadWorld_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnloadWorld_Response {
    /// Standard result message
    pub result: super::msg::Result,

}

impl UnloadWorld_Response {
    /// No world is loaded at the moment.
    pub const NO_WORLD_LOADED: u8 = 101;

}


impl Default for UnloadWorld_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::UnloadWorld_Response::default())
  }
}

impl rosidl_runtime_rs::Message for UnloadWorld_Response {
  type RmwMsg = super::srv::rmw::UnloadWorld_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: super::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: super::msg::Result::from_rmw_message(msg.result),
    }
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


