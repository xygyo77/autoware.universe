// Copyright 2021 Tier IV, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef BEHAVIOR_PATH_PLANNER__SCENE_MODULE__PULL_OVER__PULL_OVER_MODULE_HPP_
#define BEHAVIOR_PATH_PLANNER__SCENE_MODULE__PULL_OVER__PULL_OVER_MODULE_HPP_

#include "behavior_path_planner/scene_module/pull_over/pull_over_path.hpp"
#include "behavior_path_planner/scene_module/scene_module_interface.hpp"
#include "behavior_path_planner/scene_module/utils/geometric_parallel_parking.hpp"
#include "behavior_path_planner/scene_module/utils/occupancy_grid_based_collision_detector.hpp"

#include <lane_departure_checker/lane_departure_checker.hpp>

#include <autoware_auto_planning_msgs/msg/path_with_lane_id.hpp>
#include <autoware_auto_vehicle_msgs/msg/hazard_lights_command.hpp>

#include <deque>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "tilde/tilde_publisher.hpp"
#include "tilde/tilde_node.hpp"
namespace behavior_path_planner
{
using autoware_auto_vehicle_msgs::msg::HazardLightsCommand;
using geometry_msgs::msg::PoseArray;
using lane_departure_checker::LaneDepartureChecker;
using nav_msgs::msg::OccupancyGrid;
using visualization_msgs::msg::Marker;
using visualization_msgs::msg::MarkerArray;

struct PullOverParameters
{
  double request_length;
  double th_arrived_distance;
  double th_stopped_velocity;
  double th_stopped_time;
  double margin_from_boundary;
  double decide_path_distance;
  double maximum_deceleration;
  // goal research
  std::string search_priority;  // "efficient_path" or "close_goal"
  bool enable_goal_research;
  double forward_goal_search_length;
  double backward_goal_search_length;
  double goal_search_interval;
  double goal_to_obstacle_margin;
  // occupancy grid map
  bool use_occupancy_grid;
  double occupancy_grid_collision_check_margin;
  double theta_size;
  double obstacle_threshold;
  // object recognition
  bool use_object_recognition;
  double object_recognition_collision_check_margin;
  // shift path
  bool enable_shift_parking;
  int pull_over_sampling_num;
  double maximum_lateral_jerk;
  double minimum_lateral_jerk;
  double deceleration_interval;
  double pull_over_velocity;
  double pull_over_minimum_velocity;
  double after_pull_over_straight_distance;
  double before_pull_over_straight_distance;
  // parallel parking
  bool enable_arc_forward_parking;
  bool enable_arc_backward_parking;
  double after_forward_parking_straight_distance;
  double after_backward_parking_straight_distance;
  double forward_parking_velocity;
  double backward_parking_velocity;
  double forward_parking_lane_departure_margin;
  double backward_parking_lane_departure_margin;
  double arc_path_interval;
  double pull_over_max_steer_angle;
  // hazard
  double hazard_on_threshold_dis;
  double hazard_on_threshold_vel;
  // check safety with dynamic objects. Not used now.
  double pull_over_duration;
  double pull_over_prepare_duration;
  double min_stop_distance;
  double stop_time;
  double hysteresis_buffer_distance;
  double prediction_time_resolution;
  bool enable_collision_check_at_prepare_phase;
  bool use_predicted_path_outside_lanelet;
  bool use_all_predicted_path;
  // debug
  bool print_debug_info;
};

enum PathType {
  NONE = 0,
  SHIFT,
  ARC_FORWARD,
  ARC_BACKWARD,
};

struct PUllOverStatus
{
  PathWithLaneId path{};
  PathWithLaneId full_path{};
  std::shared_ptr<PathWithLaneId> prev_stop_path = nullptr;
  lanelet::ConstLanelets current_lanes{};
  lanelet::ConstLanelets pull_over_lanes{};
  lanelet::ConstLanelets lanes{};  // current + pull_over
  bool has_decided_path = false;
  int path_type = PathType::NONE;
  bool is_safe = false;
  bool prev_is_safe = false;
  bool has_decided_velocity = false;
  bool has_requested_approval_ = false;
};

struct GoalCandidate
{
  Pose goal_pose{};
  double distance_from_original_goal = 0.0;

  bool operator<(const GoalCandidate & other) const noexcept
  {
    return distance_from_original_goal < other.distance_from_original_goal;
  }
};

class PullOverModule : public SceneModuleInterface
{
public:
  PullOverModule(
    const std::string & name, tilde::TildeNode & node, const PullOverParameters & parameters);

  BehaviorModuleOutput run() override;

  bool isExecutionRequested() const override;
  bool isExecutionReady() const override;
  BT::NodeStatus updateState() override;
  void onTimer();
  bool planWithEfficientPath();
  bool planWithCloseGoal();
  BehaviorModuleOutput plan() override;
  BehaviorModuleOutput planWaitingApproval() override;
  CandidateOutput planCandidate() const override;
  void onEntry() override;
  void onExit() override;

  void setParameters(const PullOverParameters & parameters);

private:
  PullOverParameters parameters_;

  ShiftParkingPath shift_parking_path_;
  vehicle_info_util::VehicleInfo vehicle_info_;

  const double pull_over_lane_length_ = 200.0;
  const double check_distance_ = 100.0;

  rclcpp::Subscription<OccupancyGrid>::SharedPtr occupancy_grid_sub_;
  tilde::TildePublisher<PoseStamped>::SharedPtr goal_pose_pub_;

  PUllOverStatus status_;
  OccupancyGridBasedCollisionDetector occupancy_grid_map_;
  Pose modified_goal_pose_;
  Pose refined_goal_pose_;
  std::vector<GoalCandidate> goal_candidates_;
  GeometricParallelParking parallel_parking_planner_;
  ParallelParkingParameters parallel_parking_parameters_;
  std::deque<nav_msgs::msg::Odometry::ConstSharedPtr> odometry_buffer_;
  std::unique_ptr<LaneDepartureChecker> lane_departure_checker_;
  tier4_autoware_utils::LinearRing2d vehicle_footprint_;
  std::unique_ptr<rclcpp::Time> last_received_time_;
  std::unique_ptr<rclcpp::Time> last_approved_time_;

  PathWithLaneId getReferencePath() const;
  PathWithLaneId generateStopPath() const;
  Pose calcRefinedGoal() const;
  Pose getParkingStartPose() const;
  ParallelParkingParameters getGeometricPullOverParameters() const;
  bool isLongEnoughToParkingStart(
    const PathWithLaneId & path, const Pose & parking_start_pose) const;
  bool isLongEnough(
    const lanelet::ConstLanelets & lanelets, const Pose & goal_pose, const double buffer = 0) const;
  bool isArcPath() const;
  double calcMinimumShiftPathDistance() const;
  std::pair<double, double> calcDistanceToPathChange() const;

  bool planShiftPath(const Pose goal_pose);
  bool isStopped();
  bool hasFinishedCurrentPath();
  bool hasFinishedPullOver();
  void updateOccupancyGrid();
  void researchGoal();
  void resetStatus();
  bool checkCollisionWithLongitudinalDistance(
    const Pose & ego_pose, const PredictedObjects & dynamic_objects) const;
  bool checkCollisionWithPose(const Pose & pose) const;
  bool checkCollisionWithPath(const PathWithLaneId & path) const;

  // turn signal
  std::pair<HazardLightsCommand, double> getHazardInfo() const;
  std::pair<TurnIndicatorsCommand, double> getTurnInfo() const;

  // debug
  void setDebugData();
  void printParkingPositionError() const;
};
}  // namespace behavior_path_planner

#endif  // BEHAVIOR_PATH_PLANNER__SCENE_MODULE__PULL_OVER__PULL_OVER_MODULE_HPP_
