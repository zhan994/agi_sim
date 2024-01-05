cmake_minimum_required(VERSION 3.0.2)
project(teleop_twist_keyboard_cpp)
find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  roscpp
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES teleop_twist_keyboard_cpp
#  CATKIN_DEPENDS geometry_msgs roscpp
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(teleop_node src/teleop_twist_keyboard_cpp.cpp)
target_link_libraries(teleop_node ${catkin_LIBRARIES})

