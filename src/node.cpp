/*
 * OpenVMP, 2023
 *
 * Author: Roman Kuzmenko
 * Created: 2023-02-24
 *
 * Licensed under Apache License, Version 2.0.
 */

#include "brake_switch/node.hpp"

namespace brake_switch {

Node::Node() : rclcpp::Node::Node("brake_switch") {
  intf_ = std::make_shared<Interface>(this);
}

}  // namespace brake_switch