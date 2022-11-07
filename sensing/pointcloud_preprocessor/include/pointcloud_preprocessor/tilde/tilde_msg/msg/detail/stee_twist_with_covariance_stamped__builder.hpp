// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeTwistWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_TWIST_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_TWIST_WITH_COVARIANCE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_twist_with_covariance_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeTwistWithCovarianceStamped_sources
{
public:
  explicit Init_SteeTwistWithCovarianceStamped_sources(::tilde_msg::msg::SteeTwistWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeTwistWithCovarianceStamped sources(::tilde_msg::msg::SteeTwistWithCovarianceStamped::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeTwistWithCovarianceStamped msg_;
};

class Init_SteeTwistWithCovarianceStamped_body
{
public:
  Init_SteeTwistWithCovarianceStamped_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeTwistWithCovarianceStamped_sources body(::tilde_msg::msg::SteeTwistWithCovarianceStamped::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteeTwistWithCovarianceStamped_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteeTwistWithCovarianceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeTwistWithCovarianceStamped>()
{
  return tilde_msg::msg::builder::Init_SteeTwistWithCovarianceStamped_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_TWIST_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
