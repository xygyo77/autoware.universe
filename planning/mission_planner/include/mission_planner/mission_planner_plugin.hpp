// Copyright 2022 TIER IV, Inc.
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

#ifndef MISSION_PLANNER__MISSION_PLANNER_PLUGIN_HPP_
#define MISSION_PLANNER__MISSION_PLANNER_PLUGIN_HPP_

#include <rclcpp/rclcpp.hpp>

#include <autoware_auto_planning_msgs/msg/had_map_route.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <visualization_msgs/msg/marker_array.hpp>

#include <vector>

#include "tilde/tilde_publisher.hpp"
#include "tilde/tilde_node.hpp"
namespace mission_planner
{

class PlannerPlugin
{
public:
  using RoutePoints = std::vector<geometry_msgs::msg::Pose>;
  using HADMapRoute = autoware_auto_planning_msgs::msg::HADMapRoute;
  using MarkerArray = visualization_msgs::msg::MarkerArray;

  virtual ~PlannerPlugin() = default;
  virtual void initialize(tilde::TildeNode * node) = 0;
  virtual bool ready() const = 0;
  virtual HADMapRoute plan(const RoutePoints & points) = 0;
  virtual MarkerArray visualize(const HADMapRoute & route) const = 0;
};

}  // namespace mission_planner

#endif  // MISSION_PLANNER__MISSION_PLANNER_PLUGIN_HPP_
