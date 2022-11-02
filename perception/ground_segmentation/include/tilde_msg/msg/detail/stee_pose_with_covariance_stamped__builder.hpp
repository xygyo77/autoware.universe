// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteePoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_pose_with_covariance_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteePoseWithCovarianceStamped_sources
{
public:
  explicit Init_SteePoseWithCovarianceStamped_sources(::tilde_msg::msg::SteePoseWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteePoseWithCovarianceStamped sources(::tilde_msg::msg::SteePoseWithCovarianceStamped::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteePoseWithCovarianceStamped msg_;
};

class Init_SteePoseWithCovarianceStamped_body
{
public:
  Init_SteePoseWithCovarianceStamped_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteePoseWithCovarianceStamped_sources body(::tilde_msg::msg::SteePoseWithCovarianceStamped::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteePoseWithCovarianceStamped_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteePoseWithCovarianceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteePoseWithCovarianceStamped>()
{
  return tilde_msg::msg::builder::Init_SteePoseWithCovarianceStamped_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
