/*
 * OpenVMP, 2023
 *
 * Author: Roman Kuzmenko
 * Created: 2023-02-24
 *
 * Licensed under Apache License, Version 2.0.
 */

#include "brake_switch/interface.hpp"

#include "switch_interface/interface_remote.hpp"
#include "brake_switch/node.hpp"

namespace brake_switch {

Interface::Interface(rclcpp::Node *node)
    : brake::Interface(node) {
  prov_ = std::make_shared<switch_interface::RemoteInterface>(node);

  RCLCPP_DEBUG(node_->get_logger(),
               "brake_switch::Interface::Interface(): done");
}

void Interface::command_handler_real_(
  const std::shared_ptr<brake::srv::Command::Request> request,
    std::shared_ptr<brake::srv::Command::Response> response) {
  (void)response;
  prov_->switch_single_cmd(request->engage);
}

}  // namespace brake_switch
