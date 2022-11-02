// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tilde_msg:msg/DeadlineNotification.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__TRAITS_HPP_
#define TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tilde_msg/msg/detail/deadline_notification__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'deadline_setting'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'sources'
#include "tilde_msg/msg/detail/source__traits.hpp"

namespace tilde_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeadlineNotification & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: topic_name
  {
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: deadline_setting
  {
    out << "deadline_setting: ";
    to_flow_style_yaml(msg.deadline_setting, out);
    out << ", ";
  }

  // member: sources
  {
    if (msg.sources.size() == 0) {
      out << "sources: []";
    } else {
      out << "sources: [";
      size_t pending_items = msg.sources.size();
      for (auto item : msg.sources) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeadlineNotification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: deadline_setting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deadline_setting:\n";
    to_block_style_yaml(msg.deadline_setting, out, indentation + 2);
  }

  // member: sources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sources.size() == 0) {
      out << "sources: []\n";
    } else {
      out << "sources:\n";
      for (auto item : msg.sources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeadlineNotification & msg, bool use_flow_style = false)
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
  const tilde_msg::msg::DeadlineNotification & msg,
  std::ostream & out, size_t indentation = 0)
{
  tilde_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tilde_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const tilde_msg::msg::DeadlineNotification & msg)
{
  return tilde_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tilde_msg::msg::DeadlineNotification>()
{
  return "tilde_msg::msg::DeadlineNotification";
}

template<>
inline const char * name<tilde_msg::msg::DeadlineNotification>()
{
  return "tilde_msg/msg/DeadlineNotification";
}

template<>
struct has_fixed_size<tilde_msg::msg::DeadlineNotification>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tilde_msg::msg::DeadlineNotification>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tilde_msg::msg::DeadlineNotification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__TRAITS_HPP_
