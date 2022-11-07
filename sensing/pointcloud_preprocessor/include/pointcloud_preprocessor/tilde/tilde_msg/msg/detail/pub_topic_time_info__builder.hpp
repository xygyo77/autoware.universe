// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/PubTopicTimeInfo.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "../../../tilde_msg/msg/detail/pub_topic_time_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_PubTopicTimeInfo_header_stamp
{
public:
  explicit Init_PubTopicTimeInfo_header_stamp(::tilde_msg::msg::PubTopicTimeInfo & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::PubTopicTimeInfo header_stamp(::tilde_msg::msg::PubTopicTimeInfo::_header_stamp_type arg)
  {
    msg_.header_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::PubTopicTimeInfo msg_;
};

class Init_PubTopicTimeInfo_has_header_stamp
{
public:
  explicit Init_PubTopicTimeInfo_has_header_stamp(::tilde_msg::msg::PubTopicTimeInfo & msg)
  : msg_(msg)
  {}
  Init_PubTopicTimeInfo_header_stamp has_header_stamp(::tilde_msg::msg::PubTopicTimeInfo::_has_header_stamp_type arg)
  {
    msg_.has_header_stamp = std::move(arg);
    return Init_PubTopicTimeInfo_header_stamp(msg_);
  }

private:
  ::tilde_msg::msg::PubTopicTimeInfo msg_;
};

class Init_PubTopicTimeInfo_pub_time_steady
{
public:
  explicit Init_PubTopicTimeInfo_pub_time_steady(::tilde_msg::msg::PubTopicTimeInfo & msg)
  : msg_(msg)
  {}
  Init_PubTopicTimeInfo_has_header_stamp pub_time_steady(::tilde_msg::msg::PubTopicTimeInfo::_pub_time_steady_type arg)
  {
    msg_.pub_time_steady = std::move(arg);
    return Init_PubTopicTimeInfo_has_header_stamp(msg_);
  }

private:
  ::tilde_msg::msg::PubTopicTimeInfo msg_;
};

class Init_PubTopicTimeInfo_pub_time
{
public:
  explicit Init_PubTopicTimeInfo_pub_time(::tilde_msg::msg::PubTopicTimeInfo & msg)
  : msg_(msg)
  {}
  Init_PubTopicTimeInfo_pub_time_steady pub_time(::tilde_msg::msg::PubTopicTimeInfo::_pub_time_type arg)
  {
    msg_.pub_time = std::move(arg);
    return Init_PubTopicTimeInfo_pub_time_steady(msg_);
  }

private:
  ::tilde_msg::msg::PubTopicTimeInfo msg_;
};

class Init_PubTopicTimeInfo_seq
{
public:
  explicit Init_PubTopicTimeInfo_seq(::tilde_msg::msg::PubTopicTimeInfo & msg)
  : msg_(msg)
  {}
  Init_PubTopicTimeInfo_pub_time seq(::tilde_msg::msg::PubTopicTimeInfo::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_PubTopicTimeInfo_pub_time(msg_);
  }

private:
  ::tilde_msg::msg::PubTopicTimeInfo msg_;
};

class Init_PubTopicTimeInfo_node_fqn
{
public:
  explicit Init_PubTopicTimeInfo_node_fqn(::tilde_msg::msg::PubTopicTimeInfo & msg)
  : msg_(msg)
  {}
  Init_PubTopicTimeInfo_seq node_fqn(::tilde_msg::msg::PubTopicTimeInfo::_node_fqn_type arg)
  {
    msg_.node_fqn = std::move(arg);
    return Init_PubTopicTimeInfo_seq(msg_);
  }

private:
  ::tilde_msg::msg::PubTopicTimeInfo msg_;
};

class Init_PubTopicTimeInfo_topic_name
{
public:
  Init_PubTopicTimeInfo_topic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PubTopicTimeInfo_node_fqn topic_name(::tilde_msg::msg::PubTopicTimeInfo::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return Init_PubTopicTimeInfo_node_fqn(msg_);
  }

private:
  ::tilde_msg::msg::PubTopicTimeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::PubTopicTimeInfo>()
{
  return tilde_msg::msg::builder::Init_PubTopicTimeInfo_topic_name();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__BUILDER_HPP_
