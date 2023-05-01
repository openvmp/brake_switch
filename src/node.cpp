/*
 * OpenVMP, 2023
 *
 * Author: Roman Kuzmenko
 * Created: 2023-02-24
 *
 * Licensed under Apache License, Version 2.0.
 */

#include "remote_brake_switch/node.hpp"

namespace remote_brake_switch {

Node::Node() : rclcpp::Node::Node("brake_switch") {
  intf_ = std::make_shared<Interface>(this);
}

}  // namespace remote_brake_switch