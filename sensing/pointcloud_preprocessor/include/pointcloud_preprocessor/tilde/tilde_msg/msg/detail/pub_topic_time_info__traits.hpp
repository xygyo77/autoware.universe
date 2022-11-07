// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tilde_msg:msg/PubTopicTimeInfo.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__TRAITS_HPP_
#define TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "../../../tilde_msg/msg/detail/pub_topic_time_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pub_time'
// Member 'pub_time_steady'
// Member 'header_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tilde_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PubTopicTimeInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic_name
  {
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << ", ";
  }

  // member: node_fqn
  {
    out << "node_fqn: ";
    rosidl_generator_traits::value_to_yaml(msg.node_fqn, out);
    out << ", ";
  }

  // member: seq
  {
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << ", ";
  }

  // member: pub_time
  {
    out << "pub_time: ";
    to_flow_style_yaml(msg.pub_time, out);
    out << ", ";
  }

  // member: pub_time_steady
  {
    out << "pub_time_steady: ";
    to_flow_style_yaml(msg.pub_time_steady, out);
    out << ", ";
  }

  // member: has_header_stamp
  {
    out << "has_header_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.has_header_stamp, out);
    out << ", ";
  }

  // member: header_stamp
  {
    out << "header_stamp: ";
    to_flow_style_yaml(msg.header_stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PubTopicTimeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << "\n";
  }

  // member: node_fqn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_fqn: ";
    rosidl_generator_traits::value_to_yaml(msg.node_fqn, out);
    out << "\n";
  }

  // member: seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << "\n";
  }

  // member: pub_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pub_time:\n";
    to_block_style_yaml(msg.pub_time, out, indentation + 2);
  }

  // member: pub_time_steady
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pub_time_steady:\n";
    to_block_style_yaml(msg.pub_time_steady, out, indentation + 2);
  }

  // member: has_header_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_header_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.has_header_stamp, out);
    out << "\n";
  }

  // member: header_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_stamp:\n";
    to_block_style_yaml(msg.header_stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PubTopicTimeInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tilde_msg

namespace rosidl_generator_traits
{

[[deprecated("use tilde_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tilde_msg::msg::PubTopicTimeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  tilde_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tilde_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const tilde_msg::msg::PubTopicTimeInfo & msg)
{
  return tilde_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tilde_msg::msg::PubTopicTimeInfo>()
{
  return "tilde_msg::msg::PubTopicTimeInfo";
}

template<>
inline const char * name<tilde_msg::msg::PubTopicTimeInfo>()
{
  return "tilde_msg/msg/PubTopicTimeInfo";
}

template<>
struct has_fixed_size<tilde_msg::msg::PubTopicTimeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tilde_msg::msg::PubTopicTimeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tilde_msg::msg::PubTopicTimeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__TRAITS_HPP_
