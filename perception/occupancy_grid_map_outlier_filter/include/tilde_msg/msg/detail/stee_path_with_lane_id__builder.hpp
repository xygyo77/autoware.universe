// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteePathWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_PATH_WITH_LANE_ID__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_PATH_WITH_LANE_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_path_with_lane_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteePathWithLaneId_sources
{
public:
  explicit Init_SteePathWithLaneId_sources(::tilde_msg::msg::SteePathWithLaneId & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteePathWithLaneId sources(::tilde_msg::msg::SteePathWithLaneId::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteePathWithLaneId msg_;
};

class Init_SteePathWithLaneId_body
{
public:
  Init_SteePathWithLaneId_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteePathWithLaneId_sources body(::tilde_msg::msg::SteePathWithLaneId::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteePathWithLaneId_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteePathWithLaneId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteePathWithLaneId>()
{
  return tilde_msg::msg::builder::Init_SteePathWithLaneId_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_PATH_WITH_LANE_ID__BUILDER_HPP_
