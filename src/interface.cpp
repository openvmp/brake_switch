/*
 * OpenVMP, 2023
 *
 * Author: Roman Kuzmenko
 * Created: 2023-02-24
 *
 * Licensed under Apache License, Version 2.0.
 */

#include "remote_brake_switch/interface.hpp"

#include "remote_brake_switch/node.hpp"
#include "remote_switch/interface_remote.hpp"

namespace remote_brake_switch {

Interface::Interface(rclcpp::Node *node) : remote_brake::Interface(node) {
  prov_ = std::make_shared<remote_switch::RemoteInterface>(node);

  RCLCPP_DEBUG(node_->get_logger(),
               "brake_switch::Interface::Interface(): done");
}

void Interface::command_handler_real_(
    const std::shared_ptr<remote_brake::srv::Command::Request> request,
    std::shared_ptr<remote_brake::srv::Command::Response> response) {
  (void)response;
  prov_->switch_single_cmd(request->engage);
}

}  // namespace remote_brake_switch
