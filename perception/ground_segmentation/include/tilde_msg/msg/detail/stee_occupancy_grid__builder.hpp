// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeOccupancyGrid.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_OCCUPANCY_GRID__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_OCCUPANCY_GRID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_occupancy_grid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeOccupancyGrid_sources
{
public:
  explicit Init_SteeOccupancyGrid_sources(::tilde_msg::msg::SteeOccupancyGrid & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeOccupancyGrid sources(::tilde_msg::msg::SteeOccupancyGrid::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeOccupancyGrid msg_;
};

class Init_SteeOccupancyGrid_body
{
public:
  Init_SteeOccupancyGrid_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeOccupancyGrid_sources body(::tilde_msg::msg::SteeOccupancyGrid::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteeOccupancyGrid_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteeOccupancyGrid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeOccupancyGrid>()
{
  return tilde_msg::msg::builder::Init_SteeOccupancyGrid_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_OCCUPANCY_GRID__BUILDER_HPP_
