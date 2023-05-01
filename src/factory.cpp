/*
 * OpenVMP, 2023
 *
 * Author: Roman Kuzmenko
 * Created: 2023-03-16
 *
 * Licensed under Apache License, Version 2.0.
 */

#include "remote_brake_switch/factory.hpp"

#include <exception>

#include "remote_brake_switch/interface.hpp"

namespace remote_brake_switch {

std::shared_ptr<remote_brake::Interface> Factory::New(rclcpp::Node *node) {
  rclcpp::Parameter use_remote;
  if (!node->has_parameter("use_remote")) {
    node->declare_parameter("use_remote", true);
  }
  node->get_parameter("use_remote", use_remote);

  rclcpp::Parameter is_remote;
  if (!node->has_parameter("brake_is_remote")) {
    node->declare_parameter("brake_is_remote", use_remote.as_bool());
  }
  node->get_parameter("brake_is_remote", is_remote);

  if (is_remote.as_bool()) {
    throw std::invalid_argument(
        "Remote brake interface "
        "is not implemented yet");
  } else {
    return std::make_shared<Interface>(node);
  }
}

}  // namespace remote_brake_switch
