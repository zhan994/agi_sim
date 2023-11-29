/**
 * \file joy_ctrl_node.cpp
 * \author Zhihao Zhan (zhanzhihao_dt@163.com)
 * \brief 手柄控制节点
 * \version 0.1
 * \date 2023-08-22
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "joy_ctrl.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "joy");
  ros::NodeHandle nh;
  JoyCtrl jc(nh);
  ros::spin();
  return 0;
}