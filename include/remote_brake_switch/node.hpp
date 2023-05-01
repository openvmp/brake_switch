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
#include "remote_brake_switch/interface.hpp"

namespace remote_brake_switch {

class Node : public rclcpp::Node {
 public:
  Node();

 private:
  std::shared_ptr<Interface> intf_;
};

}  // namespace remote_brake_switch

#endif  // OPENVMP_BRAKE_SWITCH_NODE_H
