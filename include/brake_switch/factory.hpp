/*
 * OpenVMP, 2023
 *
 * Author: Roman Kuzmenko
 * Created: 2023-03-16
 *
 * Licensed under Apache License, Version 2.0.
 */

#ifndef OPENVMP_BRAKE_SWITCH_FACTORY_H
#define OPENVMP_BRAKE_SWITCH_FACTORY_H

#include <memory>

#include "brake_switch/interface.hpp"
#include "rclcpp/rclcpp.hpp"

namespace brake_switch {

class Factory {
 public:
  static std::shared_ptr<brake::Interface> New(rclcpp::Node *node);
};

}  // namespace brake_switch

#endif  // OPENVMP_BRAKE_SWITCH_FACTORY_H