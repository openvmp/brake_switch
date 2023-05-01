/*
 * OpenVMP, 2023
 *
 * Author: Roman Kuzmenko
 * Created: 2023-02-24
 *
 * Licensed under Apache License, Version 2.0.
 */

#include "rclcpp/rclcpp.hpp"
#include "remote_brake_switch/node.hpp"

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<remote_brake_switch::Node>();

  rclcpp::executors::MultiThreadedExecutor exec;
  exec.add_node(node);
  exec.spin();

  rclcpp::shutdown();
  return 0;
}
