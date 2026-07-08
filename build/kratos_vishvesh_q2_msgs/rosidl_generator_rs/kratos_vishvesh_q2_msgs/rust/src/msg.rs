#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to kratos_vishvesh_q2_msgs__msg__RoverStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub mode: std::string::String,

}



impl Default for RoverStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RoverStatus {
  type RmwMsg = super::msg::rmw::RoverStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        battery_percentage: msg.battery_percentage,
        velocity: msg.velocity,
        emergency_stop: msg.emergency_stop,
        mode: msg.mode.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      battery_percentage: msg.battery_percentage,
      velocity: msg.velocity,
      emergency_stop: msg.emergency_stop,
        mode: msg.mode.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      battery_percentage: msg.battery_percentage,
      velocity: msg.velocity,
      emergency_stop: msg.emergency_stop,
      mode: msg.mode.to_string(),
    }
  }
}


