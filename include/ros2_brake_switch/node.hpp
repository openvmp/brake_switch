/*
 * OpenVMP, 2023
 *
 * Author: Roman Kuzmenko
 * Created: 2023-02-24
 *
 * Licensed under Apache License, Version 2.0.
 */

#ifndef OPENVMP_BRAKE_SWITCH_NODE_H
#define OPENVMP_BRAKE_SWITCH_NODE_H

#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "ros2_brake_switch/interface.hpp"

namespace ros2_brake_switch {

class Node : public rclcpp::Node {
 public:
  Node();

 private:
  std::shared_ptr<Interface> intf_;
};

}  // namespace ros2_brake_switch

#endif  // OPENVMP_BRAKE_SWITCH_NODE_H
