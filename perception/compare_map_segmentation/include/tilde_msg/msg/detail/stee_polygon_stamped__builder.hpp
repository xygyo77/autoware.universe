// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteePolygonStamped.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_POLYGON_STAMPED__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_POLYGON_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_polygon_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteePolygonStamped_sources
{
public:
  explicit Init_SteePolygonStamped_sources(::tilde_msg::msg::SteePolygonStamped & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteePolygonStamped sources(::tilde_msg::msg::SteePolygonStamped::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteePolygonStamped msg_;
};

class Init_SteePolygonStamped_body
{
public:
  Init_SteePolygonStamped_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteePolygonStamped_sources body(::tilde_msg::msg::SteePolygonStamped::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteePolygonStamped_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteePolygonStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteePolygonStamped>()
{
  return tilde_msg::msg::builder::Init_SteePolygonStamped_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_POLYGON_STAMPED__BUILDER_HPP_
