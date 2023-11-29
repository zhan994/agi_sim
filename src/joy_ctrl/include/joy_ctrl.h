/**
 * \file joy.h
 * \author Zhihao Zhan (zhanzhihao_dt@163.com)
 * \brief 手柄控制
 * \version 0.1
 * \date 2023-08-22
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef JOY_CTRL_H
#define JOY_CTRL_H

#include <iostream>
#include <ros/ros.h>
#include <sensor_msgs/Joy.h>
#include <geometry_msgs/Twist.h>

class JoyCtrl
{
public:
  /**
   * \brief Construct a new JoyCtrl object
   *
   */
  JoyCtrl(ros::NodeHandle &nh);

private:
  /**
   * \brief 手柄响应回调
   *
   * \param msg
   */
  void Callback(const sensor_msgs::Joy::ConstPtr &msg);

  ros::NodeHandle nh_;
  ros::Subscriber sub_;
  ros::Publisher pub_;
  double linear_velocity_, angular_velocity_;
  int linear_axes_, angular_axes_;
  geometry_msgs::Twist v_;
};

#endif // JOY_CTRL_H