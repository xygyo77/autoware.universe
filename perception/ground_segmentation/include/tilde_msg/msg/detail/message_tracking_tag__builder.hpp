// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/MessageTrackingTag.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/message_tracking_tag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_MessageTrackingTag_input_infos
{
public:
  explicit Init_MessageTrackingTag_input_infos(::tilde_msg::msg::MessageTrackingTag & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::MessageTrackingTag input_infos(::tilde_msg::msg::MessageTrackingTag::_input_infos_type arg)
  {
    msg_.input_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::MessageTrackingTag msg_;
};

class Init_MessageTrackingTag_output_info
{
public:
  explicit Init_MessageTrackingTag_output_info(::tilde_msg::msg::MessageTrackingTag & msg)
  : msg_(msg)
  {}
  Init_MessageTrackingTag_input_infos output_info(::tilde_msg::msg::MessageTrackingTag::_output_info_type arg)
  {
    msg_.output_info = std::move(arg);
    return Init_MessageTrackingTag_input_infos(msg_);
  }

private:
  ::tilde_msg::msg::MessageTrackingTag msg_;
};

class Init_MessageTrackingTag_header
{
public:
  Init_MessageTrackingTag_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MessageTrackingTag_output_info header(::tilde_msg::msg::MessageTrackingTag::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MessageTrackingTag_output_info(msg_);
  }

private:
  ::tilde_msg::msg::MessageTrackingTag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::MessageTrackingTag>()
{
  return tilde_msg::msg::builder::Init_MessageTrackingTag_header();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__BUILDER_HPP_
