// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeTwistStamped.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_TWIST_STAMPED__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_TWIST_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_twist_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeTwistStamped_sources
{
public:
  explicit Init_SteeTwistStamped_sources(::tilde_msg::msg::SteeTwistStamped & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeTwistStamped sources(::tilde_msg::msg::SteeTwistStamped::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeTwistStamped msg_;
};

class Init_SteeTwistStamped_body
{
public:
  Init_SteeTwistStamped_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeTwistStamped_sources body(::tilde_msg::msg::SteeTwistStamped::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteeTwistStamped_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteeTwistStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeTwistStamped>()
{
  return tilde_msg::msg::builder::Init_SteeTwistStamped_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_TWIST_STAMPED__BUILDER_HPP_
