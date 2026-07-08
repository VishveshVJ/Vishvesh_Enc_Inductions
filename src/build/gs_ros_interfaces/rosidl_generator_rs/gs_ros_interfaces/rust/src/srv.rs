#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to gs_ros_interfaces__srv__SetEntityPose_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,

}



impl Default for SetEntityPose_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetEntityPose_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetEntityPose_Request {
  type RmwMsg = super::srv::rmw::SetEntityPose_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity_name: msg.entity_name.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity_name: msg.entity_name.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity_name: msg.entity_name.to_string(),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__SetEntityPose_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetEntityPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetEntityPose_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetEntityPose_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetEntityPose_Response {
  type RmwMsg = super::srv::rmw::SetEntityPose_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__GetEntityPose_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_name: std::string::String,

}



impl Default for GetEntityPose_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntityPose_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntityPose_Request {
  type RmwMsg = super::srv::rmw::GetEntityPose_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity_name: msg.entity_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity_name: msg.entity_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity_name: msg.entity_name.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__GetEntityPose_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEntityPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for GetEntityPose_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEntityPose_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetEntityPose_Response {
  type RmwMsg = super::srv::rmw::GetEntityPose_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__PathPlanTarget_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathPlanTarget_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attached_intity: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_link_name: std::string::String,

    /// Goal joint angles
    pub goal_state: Vec<f64>,

    /// Starting joint angles
    pub start_state: Vec<f64>,


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
    pub planner: std::string::String,

    /// End-effector link
    pub ee_link_name: std::string::String,

    /// Show path in GUI
    pub visualize: bool,

    /// Execute path on robot
    pub execute: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_pos: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tolerance: f64,

}



impl Default for PathPlanTarget_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PathPlanTarget_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PathPlanTarget_Request {
  type RmwMsg = super::srv::rmw::PathPlanTarget_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_name: msg.robot_name.as_str().into(),
        attached_intity: msg.attached_intity.as_str().into(),
        target_link_name: msg.target_link_name.as_str().into(),
        goal_state: msg.goal_state.into(),
        start_state: msg.start_state.into(),
        max_nodes: msg.max_nodes,
        resolution: msg.resolution,
        timeout: msg.timeout,
        max_retries: msg.max_retries,
        smooth_path: msg.smooth_path,
        num_waypoints: msg.num_waypoints,
        ignore_collision: msg.ignore_collision,
        planner: msg.planner.as_str().into(),
        ee_link_name: msg.ee_link_name.as_str().into(),
        visualize: msg.visualize,
        execute: msg.execute,
        target_pos: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.target_pos)).into_owned(),
        tolerance: msg.tolerance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_name: msg.robot_name.as_str().into(),
        attached_intity: msg.attached_intity.as_str().into(),
        target_link_name: msg.target_link_name.as_str().into(),
        goal_state: msg.goal_state.as_slice().into(),
        start_state: msg.start_state.as_slice().into(),
      max_nodes: msg.max_nodes,
      resolution: msg.resolution,
      timeout: msg.timeout,
      max_retries: msg.max_retries,
      smooth_path: msg.smooth_path,
      num_waypoints: msg.num_waypoints,
      ignore_collision: msg.ignore_collision,
        planner: msg.planner.as_str().into(),
        ee_link_name: msg.ee_link_name.as_str().into(),
      visualize: msg.visualize,
      execute: msg.execute,
        target_pos: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target_pos)).into_owned(),
      tolerance: msg.tolerance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_name: msg.robot_name.to_string(),
      attached_intity: msg.attached_intity.to_string(),
      target_link_name: msg.target_link_name.to_string(),
      goal_state: msg.goal_state
          .into_iter()
          .collect(),
      start_state: msg.start_state
          .into_iter()
          .collect(),
      max_nodes: msg.max_nodes,
      resolution: msg.resolution,
      timeout: msg.timeout,
      max_retries: msg.max_retries,
      smooth_path: msg.smooth_path,
      num_waypoints: msg.num_waypoints,
      ignore_collision: msg.ignore_collision,
      planner: msg.planner.to_string(),
      ee_link_name: msg.ee_link_name.to_string(),
      visualize: msg.visualize,
      execute: msg.execute,
      target_pos: geometry_msgs::msg::Point::from_rmw_message(msg.target_pos),
      tolerance: msg.tolerance,
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__PathPlanTarget_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub message: std::string::String,

    /// Flattened path [w1_j1, w1_j2, ..., wN_jM]
    pub path: Vec<f64>,

}



impl Default for PathPlanTarget_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PathPlanTarget_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PathPlanTarget_Response {
  type RmwMsg = super::srv::rmw::PathPlanTarget_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        plan_found: msg.plan_found,
        message: msg.message.as_str().into(),
        path: msg.path.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      plan_found: msg.plan_found,
        message: msg.message.as_str().into(),
        path: msg.path.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      plan_found: msg.plan_found,
      message: msg.message.to_string(),
      path: msg.path
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__IKTarget_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IKTarget_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_link_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation: geometry_msgs::msg::Quaternion,

    /// Starting joint positions
    pub init_robot_pos: Vec<f64>,

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
    pub pos_mask: Vec<bool>,

    /// [roll, pitch, yaw] mask
    pub rot_mask: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_step_size: f64,

    /// DOFs to optimize
    pub dofs_idx_local: Vec<i32>,

    /// Show ghost robot in GUI
    pub visualize: bool,

    /// Apply solution to robot
    pub execute: bool,

}



impl Default for IKTarget_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IKTarget_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IKTarget_Request {
  type RmwMsg = super::srv::rmw::IKTarget_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_name: msg.robot_name.as_str().into(),
        target_link_name: msg.target_link_name.as_str().into(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.orientation)).into_owned(),
        init_robot_pos: msg.init_robot_pos.into(),
        request_joint_limit: msg.request_joint_limit,
        max_samples: msg.max_samples,
        max_solver_iterartions: msg.max_solver_iterartions,
        damping: msg.damping,
        pos_tol: msg.pos_tol,
        rot_tol: msg.rot_tol,
        pos_mask: msg.pos_mask.into(),
        rot_mask: msg.rot_mask.into(),
        max_step_size: msg.max_step_size,
        dofs_idx_local: msg.dofs_idx_local.into(),
        visualize: msg.visualize,
        execute: msg.execute,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_name: msg.robot_name.as_str().into(),
        target_link_name: msg.target_link_name.as_str().into(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orientation)).into_owned(),
        init_robot_pos: msg.init_robot_pos.as_slice().into(),
      request_joint_limit: msg.request_joint_limit,
      max_samples: msg.max_samples,
      max_solver_iterartions: msg.max_solver_iterartions,
      damping: msg.damping,
      pos_tol: msg.pos_tol,
      rot_tol: msg.rot_tol,
        pos_mask: msg.pos_mask.as_slice().into(),
        rot_mask: msg.rot_mask.as_slice().into(),
      max_step_size: msg.max_step_size,
        dofs_idx_local: msg.dofs_idx_local.as_slice().into(),
      visualize: msg.visualize,
      execute: msg.execute,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_name: msg.robot_name.to_string(),
      target_link_name: msg.target_link_name.to_string(),
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      orientation: geometry_msgs::msg::Quaternion::from_rmw_message(msg.orientation),
      init_robot_pos: msg.init_robot_pos
          .into_iter()
          .collect(),
      request_joint_limit: msg.request_joint_limit,
      max_samples: msg.max_samples,
      max_solver_iterartions: msg.max_solver_iterartions,
      damping: msg.damping,
      pos_tol: msg.pos_tol,
      rot_tol: msg.rot_tol,
      pos_mask: msg.pos_mask
          .into_iter()
          .collect(),
      rot_mask: msg.rot_mask
          .into_iter()
          .collect(),
      max_step_size: msg.max_step_size,
      dofs_idx_local: msg.dofs_idx_local
          .into_iter()
          .collect(),
      visualize: msg.visualize,
      execute: msg.execute,
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__IKTarget_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IKTarget_Response {
    /// Service call status
    pub success: bool,

    /// If solver converged
    pub solution_found: bool,

    /// Resulting DOF positions
    pub joint_angles: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_pos_error: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_quat_error: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for IKTarget_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IKTarget_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IKTarget_Response {
  type RmwMsg = super::srv::rmw::IKTarget_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        solution_found: msg.solution_found,
        joint_angles: msg.joint_angles.into(),
        target_pos_error: msg.target_pos_error,
        target_quat_error: msg.target_quat_error,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      solution_found: msg.solution_found,
        joint_angles: msg.joint_angles.as_slice().into(),
      target_pos_error: msg.target_pos_error,
      target_quat_error: msg.target_quat_error,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      solution_found: msg.solution_found,
      joint_angles: msg.joint_angles
          .into_iter()
          .collect(),
      target_pos_error: msg.target_pos_error,
      target_quat_error: msg.target_quat_error,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__FKTarget_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FKTarget_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,

    /// Joint positions to calculate FK for
    pub qpos: Vec<f64>,

    /// Optional: specific DOFs
    pub dof_names: Vec<std::string::String>,

    /// Links to calculate poses for
    pub link_names: Vec<std::string::String>,

}



impl Default for FKTarget_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::FKTarget_Request::default())
  }
}

impl rosidl_runtime_rs::Message for FKTarget_Request {
  type RmwMsg = super::srv::rmw::FKTarget_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_name: msg.robot_name.as_str().into(),
        qpos: msg.qpos.into(),
        dof_names: msg.dof_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        link_names: msg.link_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_name: msg.robot_name.as_str().into(),
        qpos: msg.qpos.as_slice().into(),
        dof_names: msg.dof_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        link_names: msg.link_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_name: msg.robot_name.to_string(),
      qpos: msg.qpos
          .into_iter()
          .collect(),
      dof_names: msg.dof_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      link_names: msg.link_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__FKTarget_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FKTarget_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_pos: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_quat: Vec<geometry_msgs::msg::Quaternion>,

}



impl Default for FKTarget_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::FKTarget_Response::default())
  }
}

impl rosidl_runtime_rs::Message for FKTarget_Response {
  type RmwMsg = super::srv::rmw::FKTarget_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        link_pos: msg.link_pos
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        link_quat: msg.link_quat
          .into_iter()
          .map(|elem| geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        link_pos: msg.link_pos
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        link_quat: msg.link_quat
          .iter()
          .map(|elem| geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      link_pos: msg.link_pos
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      link_quat: msg.link_quat
          .into_iter()
          .map(geometry_msgs::msg::Quaternion::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__SuctionSwitch_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SuctionSwitch_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_one: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_one: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_two: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_two: std::string::String,

    /// True to enable, False to disable
    pub command: bool,

}



impl Default for SuctionSwitch_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SuctionSwitch_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SuctionSwitch_Request {
  type RmwMsg = super::srv::rmw::SuctionSwitch_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity_one: msg.entity_one.as_str().into(),
        link_one: msg.link_one.as_str().into(),
        entity_two: msg.entity_two.as_str().into(),
        link_two: msg.link_two.as_str().into(),
        command: msg.command,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity_one: msg.entity_one.as_str().into(),
        link_one: msg.link_one.as_str().into(),
        entity_two: msg.entity_two.as_str().into(),
        link_two: msg.link_two.as_str().into(),
      command: msg.command,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity_one: msg.entity_one.to_string(),
      link_one: msg.link_one.to_string(),
      entity_two: msg.entity_two.to_string(),
      link_two: msg.link_two.to_string(),
      command: msg.command,
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__SuctionSwitch_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SuctionSwitch_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SuctionSwitch_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SuctionSwitch_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SuctionSwitch_Response {
  type RmwMsg = super::srv::rmw::SuctionSwitch_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__JoinEntities_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JoinEntities_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_one: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_one: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_one_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_two: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_two: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub entity_two_type: std::string::String,

}



impl Default for JoinEntities_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::JoinEntities_Request::default())
  }
}

impl rosidl_runtime_rs::Message for JoinEntities_Request {
  type RmwMsg = super::srv::rmw::JoinEntities_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity_one: msg.entity_one.as_str().into(),
        link_one: msg.link_one.as_str().into(),
        entity_one_type: msg.entity_one_type.as_str().into(),
        entity_two: msg.entity_two.as_str().into(),
        link_two: msg.link_two.as_str().into(),
        entity_two_type: msg.entity_two_type.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity_one: msg.entity_one.as_str().into(),
        link_one: msg.link_one.as_str().into(),
        entity_one_type: msg.entity_one_type.as_str().into(),
        entity_two: msg.entity_two.as_str().into(),
        link_two: msg.link_two.as_str().into(),
        entity_two_type: msg.entity_two_type.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity_one: msg.entity_one.to_string(),
      link_one: msg.link_one.to_string(),
      entity_one_type: msg.entity_one_type.to_string(),
      entity_two: msg.entity_two.to_string(),
      link_two: msg.link_two.to_string(),
      entity_two_type: msg.entity_two_type.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__JoinEntities_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JoinEntities_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for JoinEntities_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::JoinEntities_Response::default())
  }
}

impl rosidl_runtime_rs::Message for JoinEntities_Response {
  type RmwMsg = super::srv::rmw::JoinEntities_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__StartRecording_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRecording_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

}



impl Default for StartRecording_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StartRecording_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StartRecording_Request {
  type RmwMsg = super::srv::rmw::StartRecording_Request;

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


// Corresponds to gs_ros_interfaces__srv__StartRecording_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRecording_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for StartRecording_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StartRecording_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StartRecording_Response {
  type RmwMsg = super::srv::rmw::StartRecording_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__PauseRecording_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PauseRecording_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

}



impl Default for PauseRecording_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PauseRecording_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PauseRecording_Request {
  type RmwMsg = super::srv::rmw::PauseRecording_Request;

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


// Corresponds to gs_ros_interfaces__srv__PauseRecording_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PauseRecording_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for PauseRecording_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PauseRecording_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PauseRecording_Response {
  type RmwMsg = super::srv::rmw::PauseRecording_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__StopRecording_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopRecording_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub file_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fps: f64,

}



impl Default for StopRecording_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StopRecording_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StopRecording_Request {
  type RmwMsg = super::srv::rmw::StopRecording_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        file_name: msg.file_name.as_str().into(),
        fps: msg.fps,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        file_name: msg.file_name.as_str().into(),
      fps: msg.fps,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      file_name: msg.file_name.to_string(),
      fps: msg.fps,
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__StopRecording_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopRecording_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for StopRecording_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StopRecording_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StopRecording_Response {
  type RmwMsg = super::srv::rmw::StopRecording_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__SetPhysicsAttributes_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPhysicsAttributes_Request {
    /// e.g., kp, kv, mass, damping
    pub attribute: std::string::String,

    /// Parent entity names
    pub names: Vec<std::string::String>,

    /// Joint or link names
    pub dof_names: Vec<std::string::String>,

    /// New values
    pub value: Vec<f64>,

}



impl Default for SetPhysicsAttributes_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPhysicsAttributes_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetPhysicsAttributes_Request {
  type RmwMsg = super::srv::rmw::SetPhysicsAttributes_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        attribute: msg.attribute.as_str().into(),
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        dof_names: msg.dof_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        value: msg.value.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        attribute: msg.attribute.as_str().into(),
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        dof_names: msg.dof_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        value: msg.value.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      attribute: msg.attribute.to_string(),
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      dof_names: msg.dof_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      value: msg.value
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__SetPhysicsAttributes_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPhysicsAttributes_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetPhysicsAttributes_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPhysicsAttributes_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetPhysicsAttributes_Response {
  type RmwMsg = super::srv::rmw::SetPhysicsAttributes_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__BuildSimulator_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BuildSimulator_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for BuildSimulator_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::BuildSimulator_Request::default())
  }
}

impl rosidl_runtime_rs::Message for BuildSimulator_Request {
  type RmwMsg = super::srv::rmw::BuildSimulator_Request;

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


// Corresponds to gs_ros_interfaces__srv__BuildSimulator_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BuildSimulator_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: simulation_interfaces::msg::Result,

}



impl Default for BuildSimulator_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::BuildSimulator_Response::default())
  }
}

impl rosidl_runtime_rs::Message for BuildSimulator_Response {
  type RmwMsg = super::srv::rmw::BuildSimulator_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: simulation_interfaces::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: simulation_interfaces::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: simulation_interfaces::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__GetRobotOptions_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotOptions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity: std::string::String,

}



impl Default for GetRobotOptions_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetRobotOptions_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetRobotOptions_Request {
  type RmwMsg = super::srv::rmw::GetRobotOptions_Request;

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


// Corresponds to gs_ros_interfaces__srv__GetRobotOptions_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotOptions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::msg::RobotOptions,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: simulation_interfaces::msg::Result,

}



impl Default for GetRobotOptions_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetRobotOptions_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetRobotOptions_Response {
  type RmwMsg = super::srv::rmw::GetRobotOptions_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::RobotOptions::into_rmw_message(std::borrow::Cow::Owned(msg.options)).into_owned(),
        result: simulation_interfaces::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        options: super::msg::RobotOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.options)).into_owned(),
        result: simulation_interfaces::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      options: super::msg::RobotOptions::from_rmw_message(msg.options),
      result: simulation_interfaces::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__SetRobotOptions_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotOptions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub options: super::msg::RobotOptions,

}



impl Default for SetRobotOptions_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetRobotOptions_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetRobotOptions_Request {
  type RmwMsg = super::srv::rmw::SetRobotOptions_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
        options: super::msg::RobotOptions::into_rmw_message(std::borrow::Cow::Owned(msg.options)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
        options: super::msg::RobotOptions::into_rmw_message(std::borrow::Cow::Borrowed(&msg.options)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity: msg.entity.to_string(),
      options: super::msg::RobotOptions::from_rmw_message(msg.options),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__SetRobotOptions_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotOptions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: simulation_interfaces::msg::Result,

}



impl Default for SetRobotOptions_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetRobotOptions_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetRobotOptions_Response {
  type RmwMsg = super::srv::rmw::SetRobotOptions_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: simulation_interfaces::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: simulation_interfaces::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: simulation_interfaces::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__GetSensorOptions_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSensorOptions_Request {
    /// Entity name or regex pattern
    pub entity: std::string::String,

    /// Optional: specific sensor names
    pub names: Vec<std::string::String>,

    /// Optional: specific sensor types (e.g. cam, lidar)
    pub sensor_types: Vec<std::string::String>,

}



impl Default for GetSensorOptions_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSensorOptions_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetSensorOptions_Request {
  type RmwMsg = super::srv::rmw::GetSensorOptions_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        sensor_types: msg.sensor_types
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        sensor_types: msg.sensor_types
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity: msg.entity.to_string(),
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      sensor_types: msg.sensor_types
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__GetSensorOptions_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSensorOptions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cameras: Vec<super::msg::CameraOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lidars: Vec<super::msg::LidarOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imus: Vec<super::msg::ImuOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contacts: Vec<super::msg::ContactOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_forces: Vec<super::msg::ContactForceOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: simulation_interfaces::msg::Result,

}



impl Default for GetSensorOptions_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSensorOptions_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetSensorOptions_Response {
  type RmwMsg = super::srv::rmw::GetSensorOptions_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cameras: msg.cameras
          .into_iter()
          .map(|elem| super::msg::CameraOptions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        lidars: msg.lidars
          .into_iter()
          .map(|elem| super::msg::LidarOptions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        imus: msg.imus
          .into_iter()
          .map(|elem| super::msg::ImuOptions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        contacts: msg.contacts
          .into_iter()
          .map(|elem| super::msg::ContactOptions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        contact_forces: msg.contact_forces
          .into_iter()
          .map(|elem| super::msg::ContactForceOptions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        result: simulation_interfaces::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cameras: msg.cameras
          .iter()
          .map(|elem| super::msg::CameraOptions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        lidars: msg.lidars
          .iter()
          .map(|elem| super::msg::LidarOptions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        imus: msg.imus
          .iter()
          .map(|elem| super::msg::ImuOptions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        contacts: msg.contacts
          .iter()
          .map(|elem| super::msg::ContactOptions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        contact_forces: msg.contact_forces
          .iter()
          .map(|elem| super::msg::ContactForceOptions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        result: simulation_interfaces::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      cameras: msg.cameras
          .into_iter()
          .map(super::msg::CameraOptions::from_rmw_message)
          .collect(),
      lidars: msg.lidars
          .into_iter()
          .map(super::msg::LidarOptions::from_rmw_message)
          .collect(),
      imus: msg.imus
          .into_iter()
          .map(super::msg::ImuOptions::from_rmw_message)
          .collect(),
      contacts: msg.contacts
          .into_iter()
          .map(super::msg::ContactOptions::from_rmw_message)
          .collect(),
      contact_forces: msg.contact_forces
          .into_iter()
          .map(super::msg::ContactForceOptions::from_rmw_message)
          .collect(),
      result: simulation_interfaces::msg::Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__SetSensorOptions_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSensorOptions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub entity: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cameras: Vec<super::msg::CameraOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lidars: Vec<super::msg::LidarOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imus: Vec<super::msg::ImuOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contacts: Vec<super::msg::ContactOptions>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_forces: Vec<super::msg::ContactForceOptions>,

}



impl Default for SetSensorOptions_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSensorOptions_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetSensorOptions_Request {
  type RmwMsg = super::srv::rmw::SetSensorOptions_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
        cameras: msg.cameras
          .into_iter()
          .map(|elem| super::msg::CameraOptions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        lidars: msg.lidars
          .into_iter()
          .map(|elem| super::msg::LidarOptions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        imus: msg.imus
          .into_iter()
          .map(|elem| super::msg::ImuOptions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        contacts: msg.contacts
          .into_iter()
          .map(|elem| super::msg::ContactOptions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        contact_forces: msg.contact_forces
          .into_iter()
          .map(|elem| super::msg::ContactForceOptions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entity: msg.entity.as_str().into(),
        cameras: msg.cameras
          .iter()
          .map(|elem| super::msg::CameraOptions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        lidars: msg.lidars
          .iter()
          .map(|elem| super::msg::LidarOptions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        imus: msg.imus
          .iter()
          .map(|elem| super::msg::ImuOptions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        contacts: msg.contacts
          .iter()
          .map(|elem| super::msg::ContactOptions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        contact_forces: msg.contact_forces
          .iter()
          .map(|elem| super::msg::ContactForceOptions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entity: msg.entity.to_string(),
      cameras: msg.cameras
          .into_iter()
          .map(super::msg::CameraOptions::from_rmw_message)
          .collect(),
      lidars: msg.lidars
          .into_iter()
          .map(super::msg::LidarOptions::from_rmw_message)
          .collect(),
      imus: msg.imus
          .into_iter()
          .map(super::msg::ImuOptions::from_rmw_message)
          .collect(),
      contacts: msg.contacts
          .into_iter()
          .map(super::msg::ContactOptions::from_rmw_message)
          .collect(),
      contact_forces: msg.contact_forces
          .into_iter()
          .map(super::msg::ContactForceOptions::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to gs_ros_interfaces__srv__SetSensorOptions_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSensorOptions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: simulation_interfaces::msg::Result,

}



impl Default for SetSensorOptions_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSensorOptions_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetSensorOptions_Response {
  type RmwMsg = super::srv::rmw::SetSensorOptions_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: simulation_interfaces::msg::Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: simulation_interfaces::msg::Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: simulation_interfaces::msg::Result::from_rmw_message(msg.result),
    }
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


