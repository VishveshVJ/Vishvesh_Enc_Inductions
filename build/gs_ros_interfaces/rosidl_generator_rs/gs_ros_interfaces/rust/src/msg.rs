#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to gs_ros_interfaces__msg__Contact
/// Binary contact state for a link

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Contact {

    // This member is not documented.
    #[allow(missing_docs)]
    pub link_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub in_contact: bool,

}



impl Default for Contact {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Contact::default())
  }
}

impl rosidl_runtime_rs::Message for Contact {
  type RmwMsg = super::msg::rmw::Contact;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        link_name: msg.link_name.as_str().into(),
        in_contact: msg.in_contact,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        link_name: msg.link_name.as_str().into(),
      in_contact: msg.in_contact,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      link_name: msg.link_name.to_string(),
      in_contact: msg.in_contact,
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__ContactForce
/// Measured contact force on a link

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ContactForce {

    // This member is not documented.
    #[allow(missing_docs)]
    pub link_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_force: geometry_msgs::msg::Vector3,

}



impl Default for ContactForce {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ContactForce::default())
  }
}

impl rosidl_runtime_rs::Message for ContactForce {
  type RmwMsg = super::msg::rmw::ContactForce;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        link_name: msg.link_name.as_str().into(),
        contact_force: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.contact_force)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        link_name: msg.link_name.as_str().into(),
        contact_force: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.contact_force)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      link_name: msg.link_name.to_string(),
      contact_force: geometry_msgs::msg::Vector3::from_rmw_message(msg.contact_force),
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__RobotOptions
/// Configuration for robot-specific ROS interfacing

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_states_topic: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_states_topic_frequency: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_commands_topic: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_commands_topic_frequency: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints_control_topic: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints_control_topic_frequency: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_properties: Vec<super::msg::JointProperty>,

}



impl Default for RobotOptions {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotOptions::default())
  }
}

impl rosidl_runtime_rs::Message for RobotOptions {
  type RmwMsg = super::msg::rmw::RobotOptions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_states_topic: msg.joint_states_topic.as_str().into(),
        joint_states_topic_frequency: msg.joint_states_topic_frequency,
        joint_commands_topic: msg.joint_commands_topic.as_str().into(),
        joint_commands_topic_frequency: msg.joint_commands_topic_frequency,
        joints_control_topic: msg.joints_control_topic.as_str().into(),
        joints_control_topic_frequency: msg.joints_control_topic_frequency,
        joint_properties: msg.joint_properties
          .into_iter()
          .map(|elem| super::msg::JointProperty::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_states_topic: msg.joint_states_topic.as_str().into(),
      joint_states_topic_frequency: msg.joint_states_topic_frequency,
        joint_commands_topic: msg.joint_commands_topic.as_str().into(),
      joint_commands_topic_frequency: msg.joint_commands_topic_frequency,
        joints_control_topic: msg.joints_control_topic.as_str().into(),
      joints_control_topic_frequency: msg.joints_control_topic_frequency,
        joint_properties: msg.joint_properties
          .iter()
          .map(|elem| super::msg::JointProperty::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joint_states_topic: msg.joint_states_topic.to_string(),
      joint_states_topic_frequency: msg.joint_states_topic_frequency,
      joint_commands_topic: msg.joint_commands_topic.to_string(),
      joint_commands_topic_frequency: msg.joint_commands_topic_frequency,
      joints_control_topic: msg.joints_control_topic.to_string(),
      joints_control_topic_frequency: msg.joints_control_topic_frequency,
      joint_properties: msg.joint_properties
          .into_iter()
          .map(super::msg::JointProperty::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__JointProperty
/// Physics and control properties for a robot joint

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointProperty {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

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
    pub force_range: Vec<f32>,

    /// Control mode: position, velocity, or effort
    pub command: std::string::String,

}



impl Default for JointProperty {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointProperty::default())
  }
}

impl rosidl_runtime_rs::Message for JointProperty {
  type RmwMsg = super::msg::rmw::JointProperty;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        kp: msg.kp,
        kv: msg.kv,
        stiffness: msg.stiffness,
        armature: msg.armature,
        damping: msg.damping,
        force_range: msg.force_range.into(),
        command: msg.command.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      kp: msg.kp,
      kv: msg.kv,
      stiffness: msg.stiffness,
      armature: msg.armature,
      damping: msg.damping,
        force_range: msg.force_range.as_slice().into(),
        command: msg.command.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      kp: msg.kp,
      kv: msg.kv,
      stiffness: msg.stiffness,
      armature: msg.armature,
      damping: msg.damping,
      force_range: msg.force_range
          .into_iter()
          .collect(),
      command: msg.command.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__RigidSensorOptions
/// Attachment properties for a sensor on a rigid body

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RigidSensorOptions {
    /// Name of the link to attach to
    pub link: std::string::String,

    /// Position offset [x, y, z]
    pub pos_offset: [f64; 3],

    /// Rotation offset [roll, pitch, yaw]
    pub euler_offset: [f64; 3],

}



impl Default for RigidSensorOptions {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RigidSensorOptions::default())
  }
}

impl rosidl_runtime_rs::Message for RigidSensorOptions {
  type RmwMsg = super::msg::rmw::RigidSensorOptions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        link: msg.link.as_str().into(),
        pos_offset: msg.pos_offset,
        euler_offset: msg.euler_offset,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        link: msg.link.as_str().into(),
        pos_offset: msg.pos_offset,
        euler_offset: msg.euler_offset,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      link: msg.link.to_string(),
      pos_offset: msg.pos_offset,
      euler_offset: msg.euler_offset,
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__NoisySensorOptions
/// Common noise parameters for sensors

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NoisySensorOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bias: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noise: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub random_walk: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub jitter: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub interpolate: bool,

}



impl Default for NoisySensorOptions {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NoisySensorOptions::default())
  }
}

impl rosidl_runtime_rs::Message for NoisySensorOptions {
  type RmwMsg = super::msg::rmw::NoisySensorOptions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        resolution: msg.resolution.into(),
        bias: msg.bias.into(),
        noise: msg.noise.into(),
        random_walk: msg.random_walk.into(),
        jitter: msg.jitter,
        interpolate: msg.interpolate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        resolution: msg.resolution.as_slice().into(),
        bias: msg.bias.as_slice().into(),
        noise: msg.noise.as_slice().into(),
        random_walk: msg.random_walk.as_slice().into(),
      jitter: msg.jitter,
      interpolate: msg.interpolate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      resolution: msg.resolution
          .into_iter()
          .collect(),
      bias: msg.bias
          .into_iter()
          .collect(),
      noise: msg.noise
          .into_iter()
          .collect(),
      random_walk: msg.random_walk
          .into_iter()
          .collect(),
      jitter: msg.jitter,
      interpolate: msg.interpolate,
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__GeneralSensorOptions
/// Common sensor properties

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GeneralSensorOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// e.g., cam, lidar, imu
    pub sensor_type: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GeneralSensorOptions::default())
  }
}

impl rosidl_runtime_rs::Message for GeneralSensorOptions {
  type RmwMsg = super::msg::rmw::GeneralSensorOptions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        sensor_type: msg.sensor_type.as_str().into(),
        delay: msg.delay,
        update_ground_truth_only: msg.update_ground_truth_only,
        draw_debug: msg.draw_debug,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        sensor_type: msg.sensor_type.as_str().into(),
      delay: msg.delay,
      update_ground_truth_only: msg.update_ground_truth_only,
      draw_debug: msg.draw_debug,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      sensor_type: msg.sensor_type.to_string(),
      delay: msg.delay,
      update_ground_truth_only: msg.update_ground_truth_only,
      draw_debug: msg.draw_debug,
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__RosSensorOptions
/// ROS-specific sensor configuration

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RosSensorOptions {
    /// TF frame name
    pub frame_id: std::string::String,

    /// Publishing frequency
    pub frequency: f32,

    /// ROS topic name
    pub topic: std::string::String,

    /// keep_last or keep_all
    pub qos_history: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qos_depth: i32,

    /// reliable or best_effort
    pub qos_reliability: std::string::String,

    /// volatile or transient_local
    pub qos_durability: std::string::String,

}



impl Default for RosSensorOptions {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RosSensorOptions::default())
  }
}

impl rosidl_runtime_rs::Message for RosSensorOptions {
  type RmwMsg = super::msg::rmw::RosSensorOptions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        frame_id: msg.frame_id.as_str().into(),
        frequency: msg.frequency,
        topic: msg.topic.as_str().into(),
        qos_history: msg.qos_history.as_str().into(),
        qos_depth: msg.qos_depth,
        qos_reliability: msg.qos_reliability.as_str().into(),
        qos_durability: msg.qos_durability.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        frame_id: msg.frame_id.as_str().into(),
      frequency: msg.frequency,
        topic: msg.topic.as_str().into(),
        qos_history: msg.qos_history.as_str().into(),
      qos_depth: msg.qos_depth,
        qos_reliability: msg.qos_reliability.as_str().into(),
        qos_durability: msg.qos_durability.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      frame_id: msg.frame_id.to_string(),
      frequency: msg.frequency,
      topic: msg.topic.to_string(),
      qos_history: msg.qos_history.to_string(),
      qos_depth: msg.qos_depth,
      qos_reliability: msg.qos_reliability.to_string(),
      qos_durability: msg.qos_durability.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__CameraOptions
/// Configuration options for a camera sensor

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::msg::GeneralSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_options: super::msg::RosSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rigid_options: super::msg::RigidSensorOptions,

    /// e.g., ["rgb", "depth"]
    pub camera_types: Vec<std::string::String>,

    /// [width, height]
    pub res: Vec<i32>,

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
    pub model: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CameraOptions::default())
  }
}

impl rosidl_runtime_rs::Message for CameraOptions {
  type RmwMsg = super::msg::rmw::CameraOptions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::GeneralSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.options)).into_owned(),
        ros_options: super::msg::RosSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.ros_options)).into_owned(),
        rigid_options: super::msg::RigidSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.rigid_options)).into_owned(),
        camera_types: msg.camera_types
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        res: msg.res.into(),
        fov: msg.fov,
        near: msg.near,
        far: msg.far,
        aperture: msg.aperture,
        denoise: msg.denoise,
        spp: msg.spp,
        model: msg.model.as_str().into(),
        focus_dist: msg.focus_dist,
        gui: msg.gui,
        add_noise: msg.add_noise,
        noise_mean: msg.noise_mean,
        noise_std: msg.noise_std,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::GeneralSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.options)).into_owned(),
        ros_options: super::msg::RosSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ros_options)).into_owned(),
        rigid_options: super::msg::RigidSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rigid_options)).into_owned(),
        camera_types: msg.camera_types
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        res: msg.res.as_slice().into(),
      fov: msg.fov,
      near: msg.near,
      far: msg.far,
      aperture: msg.aperture,
      denoise: msg.denoise,
      spp: msg.spp,
        model: msg.model.as_str().into(),
      focus_dist: msg.focus_dist,
      gui: msg.gui,
      add_noise: msg.add_noise,
      noise_mean: msg.noise_mean,
      noise_std: msg.noise_std,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      options: super::msg::GeneralSensorOptions::from_rmw_message(msg.options),
      ros_options: super::msg::RosSensorOptions::from_rmw_message(msg.ros_options),
      rigid_options: super::msg::RigidSensorOptions::from_rmw_message(msg.rigid_options),
      camera_types: msg.camera_types
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      res: msg.res
          .into_iter()
          .collect(),
      fov: msg.fov,
      near: msg.near,
      far: msg.far,
      aperture: msg.aperture,
      denoise: msg.denoise,
      spp: msg.spp,
      model: msg.model.to_string(),
      focus_dist: msg.focus_dist,
      gui: msg.gui,
      add_noise: msg.add_noise,
      noise_mean: msg.noise_mean,
      noise_std: msg.noise_std,
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__LidarOptions
/// Configuration for Lidar sensors (spherical, grid, sectional)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LidarOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::msg::GeneralSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_options: super::msg::RosSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rigid_options: super::msg::RigidSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub grid_pattern_options: super::msg::GridRayCasterPattern,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spherical_pattern_options: super::msg::SphericalRayCasterPattern,


    // This member is not documented.
    #[allow(missing_docs)]
    pub depth_camera_pattern_options: super::msg::DepthCameraRayCasterPattern,


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
    pub ray_start_color: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ray_hit_color: Vec<f32>,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LidarOptions::default())
  }
}

impl rosidl_runtime_rs::Message for LidarOptions {
  type RmwMsg = super::msg::rmw::LidarOptions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::GeneralSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.options)).into_owned(),
        ros_options: super::msg::RosSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.ros_options)).into_owned(),
        rigid_options: super::msg::RigidSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.rigid_options)).into_owned(),
        grid_pattern_options: super::msg::GridRayCasterPattern::into_rmw_message(std::borrow::Cow::Owned(msg.grid_pattern_options)).into_owned(),
        spherical_pattern_options: super::msg::SphericalRayCasterPattern::into_rmw_message(std::borrow::Cow::Owned(msg.spherical_pattern_options)).into_owned(),
        depth_camera_pattern_options: super::msg::DepthCameraRayCasterPattern::into_rmw_message(std::borrow::Cow::Owned(msg.depth_camera_pattern_options)).into_owned(),
        min_range: msg.min_range,
        max_range: msg.max_range,
        no_hit_value: msg.no_hit_value,
        return_points_in_world_frame: msg.return_points_in_world_frame,
        draw_point_radius: msg.draw_point_radius,
        ray_start_color: msg.ray_start_color.into(),
        ray_hit_color: msg.ray_hit_color.into(),
        add_noise: msg.add_noise,
        noise_mean: msg.noise_mean,
        noise_std: msg.noise_std,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::GeneralSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.options)).into_owned(),
        ros_options: super::msg::RosSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ros_options)).into_owned(),
        rigid_options: super::msg::RigidSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rigid_options)).into_owned(),
        grid_pattern_options: super::msg::GridRayCasterPattern::into_rmw_message(std::borrow::Cow::Borrowed(&msg.grid_pattern_options)).into_owned(),
        spherical_pattern_options: super::msg::SphericalRayCasterPattern::into_rmw_message(std::borrow::Cow::Borrowed(&msg.spherical_pattern_options)).into_owned(),
        depth_camera_pattern_options: super::msg::DepthCameraRayCasterPattern::into_rmw_message(std::borrow::Cow::Borrowed(&msg.depth_camera_pattern_options)).into_owned(),
      min_range: msg.min_range,
      max_range: msg.max_range,
      no_hit_value: msg.no_hit_value,
      return_points_in_world_frame: msg.return_points_in_world_frame,
      draw_point_radius: msg.draw_point_radius,
        ray_start_color: msg.ray_start_color.as_slice().into(),
        ray_hit_color: msg.ray_hit_color.as_slice().into(),
      add_noise: msg.add_noise,
      noise_mean: msg.noise_mean,
      noise_std: msg.noise_std,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      options: super::msg::GeneralSensorOptions::from_rmw_message(msg.options),
      ros_options: super::msg::RosSensorOptions::from_rmw_message(msg.ros_options),
      rigid_options: super::msg::RigidSensorOptions::from_rmw_message(msg.rigid_options),
      grid_pattern_options: super::msg::GridRayCasterPattern::from_rmw_message(msg.grid_pattern_options),
      spherical_pattern_options: super::msg::SphericalRayCasterPattern::from_rmw_message(msg.spherical_pattern_options),
      depth_camera_pattern_options: super::msg::DepthCameraRayCasterPattern::from_rmw_message(msg.depth_camera_pattern_options),
      min_range: msg.min_range,
      max_range: msg.max_range,
      no_hit_value: msg.no_hit_value,
      return_points_in_world_frame: msg.return_points_in_world_frame,
      draw_point_radius: msg.draw_point_radius,
      ray_start_color: msg.ray_start_color
          .into_iter()
          .collect(),
      ray_hit_color: msg.ray_hit_color
          .into_iter()
          .collect(),
      add_noise: msg.add_noise,
      noise_mean: msg.noise_mean,
      noise_std: msg.noise_std,
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__ImuOptions
/// Configuration for an IMU sensor

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ImuOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::msg::GeneralSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_options: super::msg::RosSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rigid_options: super::msg::RigidSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noisy_options: super::msg::NoisySensorOptions,

    /// Accelerometer parameters
    pub acc_resolution: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_cross_axis_coupling: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_bias: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_noise: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_random_walk: Vec<f32>,

    /// Gyroscope parameters
    pub gyro_resolution: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_cross_axis_coupling: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_bias: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_noise: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_random_walk: Vec<f32>,

    /// Debug visualization
    pub debug_acc_color: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_acc_scale: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_gyro_color: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_gyro_scale: f32,

}



impl Default for ImuOptions {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ImuOptions::default())
  }
}

impl rosidl_runtime_rs::Message for ImuOptions {
  type RmwMsg = super::msg::rmw::ImuOptions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::GeneralSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.options)).into_owned(),
        ros_options: super::msg::RosSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.ros_options)).into_owned(),
        rigid_options: super::msg::RigidSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.rigid_options)).into_owned(),
        noisy_options: super::msg::NoisySensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.noisy_options)).into_owned(),
        acc_resolution: msg.acc_resolution,
        acc_cross_axis_coupling: msg.acc_cross_axis_coupling.into(),
        acc_bias: msg.acc_bias.into(),
        acc_noise: msg.acc_noise.into(),
        acc_random_walk: msg.acc_random_walk.into(),
        gyro_resolution: msg.gyro_resolution,
        gyro_cross_axis_coupling: msg.gyro_cross_axis_coupling.into(),
        gyro_bias: msg.gyro_bias.into(),
        gyro_noise: msg.gyro_noise.into(),
        gyro_random_walk: msg.gyro_random_walk.into(),
        debug_acc_color: msg.debug_acc_color.into(),
        debug_acc_scale: msg.debug_acc_scale,
        debug_gyro_color: msg.debug_gyro_color.into(),
        debug_gyro_scale: msg.debug_gyro_scale,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::GeneralSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.options)).into_owned(),
        ros_options: super::msg::RosSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ros_options)).into_owned(),
        rigid_options: super::msg::RigidSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rigid_options)).into_owned(),
        noisy_options: super::msg::NoisySensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.noisy_options)).into_owned(),
      acc_resolution: msg.acc_resolution,
        acc_cross_axis_coupling: msg.acc_cross_axis_coupling.as_slice().into(),
        acc_bias: msg.acc_bias.as_slice().into(),
        acc_noise: msg.acc_noise.as_slice().into(),
        acc_random_walk: msg.acc_random_walk.as_slice().into(),
      gyro_resolution: msg.gyro_resolution,
        gyro_cross_axis_coupling: msg.gyro_cross_axis_coupling.as_slice().into(),
        gyro_bias: msg.gyro_bias.as_slice().into(),
        gyro_noise: msg.gyro_noise.as_slice().into(),
        gyro_random_walk: msg.gyro_random_walk.as_slice().into(),
        debug_acc_color: msg.debug_acc_color.as_slice().into(),
      debug_acc_scale: msg.debug_acc_scale,
        debug_gyro_color: msg.debug_gyro_color.as_slice().into(),
      debug_gyro_scale: msg.debug_gyro_scale,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      options: super::msg::GeneralSensorOptions::from_rmw_message(msg.options),
      ros_options: super::msg::RosSensorOptions::from_rmw_message(msg.ros_options),
      rigid_options: super::msg::RigidSensorOptions::from_rmw_message(msg.rigid_options),
      noisy_options: super::msg::NoisySensorOptions::from_rmw_message(msg.noisy_options),
      acc_resolution: msg.acc_resolution,
      acc_cross_axis_coupling: msg.acc_cross_axis_coupling
          .into_iter()
          .collect(),
      acc_bias: msg.acc_bias
          .into_iter()
          .collect(),
      acc_noise: msg.acc_noise
          .into_iter()
          .collect(),
      acc_random_walk: msg.acc_random_walk
          .into_iter()
          .collect(),
      gyro_resolution: msg.gyro_resolution,
      gyro_cross_axis_coupling: msg.gyro_cross_axis_coupling
          .into_iter()
          .collect(),
      gyro_bias: msg.gyro_bias
          .into_iter()
          .collect(),
      gyro_noise: msg.gyro_noise
          .into_iter()
          .collect(),
      gyro_random_walk: msg.gyro_random_walk
          .into_iter()
          .collect(),
      debug_acc_color: msg.debug_acc_color
          .into_iter()
          .collect(),
      debug_acc_scale: msg.debug_acc_scale,
      debug_gyro_color: msg.debug_gyro_color
          .into_iter()
          .collect(),
      debug_gyro_scale: msg.debug_gyro_scale,
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__ContactOptions
/// Configuration for a binary contact sensor

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ContactOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::msg::GeneralSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_options: super::msg::RosSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rigid_options: super::msg::RigidSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_sphere_radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_color: Vec<f32>,

}



impl Default for ContactOptions {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ContactOptions::default())
  }
}

impl rosidl_runtime_rs::Message for ContactOptions {
  type RmwMsg = super::msg::rmw::ContactOptions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::GeneralSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.options)).into_owned(),
        ros_options: super::msg::RosSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.ros_options)).into_owned(),
        rigid_options: super::msg::RigidSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.rigid_options)).into_owned(),
        debug_sphere_radius: msg.debug_sphere_radius,
        debug_color: msg.debug_color.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::GeneralSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.options)).into_owned(),
        ros_options: super::msg::RosSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ros_options)).into_owned(),
        rigid_options: super::msg::RigidSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rigid_options)).into_owned(),
      debug_sphere_radius: msg.debug_sphere_radius,
        debug_color: msg.debug_color.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      options: super::msg::GeneralSensorOptions::from_rmw_message(msg.options),
      ros_options: super::msg::RosSensorOptions::from_rmw_message(msg.ros_options),
      rigid_options: super::msg::RigidSensorOptions::from_rmw_message(msg.rigid_options),
      debug_sphere_radius: msg.debug_sphere_radius,
      debug_color: msg.debug_color
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__ContactForceOptions
/// Configuration for a contact force sensor

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ContactForceOptions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::msg::GeneralSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_options: super::msg::RosSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rigid_options: super::msg::RigidSensorOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noisy_options: super::msg::NoisySensorOptions,

    /// Lower bounds for force measurement
    pub min_force: Vec<f32>,

    /// Upper bounds for force measurement
    pub max_force: Vec<f32>,

    /// visualization color [r, g, b, a]
    pub debug_color: Vec<f32>,

    /// Scale of debug vectors
    pub debug_scale: f32,

}



impl Default for ContactForceOptions {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ContactForceOptions::default())
  }
}

impl rosidl_runtime_rs::Message for ContactForceOptions {
  type RmwMsg = super::msg::rmw::ContactForceOptions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::GeneralSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.options)).into_owned(),
        ros_options: super::msg::RosSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.ros_options)).into_owned(),
        rigid_options: super::msg::RigidSensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.rigid_options)).into_owned(),
        noisy_options: super::msg::NoisySensorOptions::into_rmw_message(std::borrow::Cow::Owned(msg.noisy_options)).into_owned(),
        min_force: msg.min_force.into(),
        max_force: msg.max_force.into(),
        debug_color: msg.debug_color.into(),
        debug_scale: msg.debug_scale,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::GeneralSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.options)).into_owned(),
        ros_options: super::msg::RosSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ros_options)).into_owned(),
        rigid_options: super::msg::RigidSensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rigid_options)).into_owned(),
        noisy_options: super::msg::NoisySensorOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.noisy_options)).into_owned(),
        min_force: msg.min_force.as_slice().into(),
        max_force: msg.max_force.as_slice().into(),
        debug_color: msg.debug_color.as_slice().into(),
      debug_scale: msg.debug_scale,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      options: super::msg::GeneralSensorOptions::from_rmw_message(msg.options),
      ros_options: super::msg::RosSensorOptions::from_rmw_message(msg.ros_options),
      rigid_options: super::msg::RigidSensorOptions::from_rmw_message(msg.rigid_options),
      noisy_options: super::msg::NoisySensorOptions::from_rmw_message(msg.noisy_options),
      min_force: msg.min_force
          .into_iter()
          .collect(),
      max_force: msg.max_force
          .into_iter()
          .collect(),
      debug_color: msg.debug_color
          .into_iter()
          .collect(),
      debug_scale: msg.debug_scale,
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__GridRayCasterPattern

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GridRayCasterPattern {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub size: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub direction: Vec<f32>,

}



impl Default for GridRayCasterPattern {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GridRayCasterPattern::default())
  }
}

impl rosidl_runtime_rs::Message for GridRayCasterPattern {
  type RmwMsg = super::msg::rmw::GridRayCasterPattern;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        resolution: msg.resolution,
        size: msg.size.into(),
        direction: msg.direction.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      resolution: msg.resolution,
        size: msg.size.as_slice().into(),
        direction: msg.direction.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      resolution: msg.resolution,
      size: msg.size
          .into_iter()
          .collect(),
      direction: msg.direction
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__SphericalRayCasterPattern

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SphericalRayCasterPattern {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fov: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub n_points: Vec<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_resolution: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angles: Vec<f32>,

}



impl Default for SphericalRayCasterPattern {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SphericalRayCasterPattern::default())
  }
}

impl rosidl_runtime_rs::Message for SphericalRayCasterPattern {
  type RmwMsg = super::msg::rmw::SphericalRayCasterPattern;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fov: msg.fov.into(),
        n_points: msg.n_points.into(),
        angular_resolution: msg.angular_resolution.into(),
        angles: msg.angles.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fov: msg.fov.as_slice().into(),
        n_points: msg.n_points.as_slice().into(),
        angular_resolution: msg.angular_resolution.as_slice().into(),
        angles: msg.angles.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fov: msg.fov
          .into_iter()
          .collect(),
      n_points: msg.n_points
          .into_iter()
          .collect(),
      angular_resolution: msg.angular_resolution
          .into_iter()
          .collect(),
      angles: msg.angles
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to gs_ros_interfaces__msg__DepthCameraRayCasterPattern

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DepthCameraRayCasterPattern {

    // This member is not documented.
    #[allow(missing_docs)]
    pub res: Vec<f32>,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DepthCameraRayCasterPattern::default())
  }
}

impl rosidl_runtime_rs::Message for DepthCameraRayCasterPattern {
  type RmwMsg = super::msg::rmw::DepthCameraRayCasterPattern;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        res: msg.res.into(),
        fx: msg.fx,
        fy: msg.fy,
        cx: msg.cx,
        cy: msg.cy,
        fov_horizontal: msg.fov_horizontal,
        fov_vertical: msg.fov_vertical,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        res: msg.res.as_slice().into(),
      fx: msg.fx,
      fy: msg.fy,
      cx: msg.cx,
      cy: msg.cy,
      fov_horizontal: msg.fov_horizontal,
      fov_vertical: msg.fov_vertical,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      res: msg.res
          .into_iter()
          .collect(),
      fx: msg.fx,
      fy: msg.fy,
      cx: msg.cx,
      cy: msg.cy,
      fov_horizontal: msg.fov_horizontal,
      fov_vertical: msg.fov_vertical,
    }
  }
}


