/*
 * OpenVMP, 2023
 *
 * Author: Roman Kuzmenko
 * Created: 2023-02-24
 *
 * Licensed under Apache License, Version 2.0.
 */

#ifndef OPENVMP_BRAKE_SWITCH_INTERFACE_H
#define OPENVMP_BRAKE_SWITCH_INTERFACE_H

#include <memory>
#include <string>

#include "switch_interface/interface.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"
#include "brake/interface.hpp"
#include "brake/srv/command.hpp"

namespace brake_switch {

class Interface
    : public brake::Interface {
 public:
  Interface(rclcpp::Node *node);
  virtual ~Interface() {}

 protected:
  virtual void command_handler_real_(
      const std::shared_ptr<brake::srv::Command::Request> request,
      std::shared_ptr<brake::srv::Command::Response> response) override;

 private:
  std::shared_ptr<switch_interface::Interface> prov_;
};

}  // namespace brake_switch

#endif  // OPENVMP_BRAKE_SWITCH_INTERFACE_H
