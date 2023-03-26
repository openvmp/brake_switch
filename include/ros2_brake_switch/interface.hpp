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

#include "rclcpp/rclcpp.hpp"
#include "remote_brake/interface.hpp"
#include "remote_brake/srv/command.hpp"
#include "remote_switch/interface.hpp"
#include "std_msgs/msg/int32.hpp"

namespace ros2_brake_switch {

class Interface : public remote_brake::Interface {
 public:
  Interface(rclcpp::Node *node);
  virtual ~Interface() {}

 protected:
  virtual void command_handler_real_(
      const std::shared_ptr<remote_brake::srv::Command::Request> request,
      std::shared_ptr<remote_brake::srv::Command::Response> response) override;

 private:
  std::shared_ptr<remote_switch::Interface> prov_;
};

}  // namespace ros2_brake_switch

#endif  // OPENVMP_BRAKE_SWITCH_INTERFACE_H
