cmake_minimum_required(VERSION 3.0.2)
project(joy_ctrl)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  roscpp
  sensor_msgs
  std_msgs
)

catkin_package()

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(joy_ctrl_node 
  src/joy_ctrl_node.cpp
  src/joy_ctrl.cpp
)

target_link_libraries(joy_ctrl_node ${catkin_LIBRARIES})
