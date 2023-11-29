#include "joy_ctrl.h"

JoyCtrl::JoyCtrl(ros::NodeHandle &nh) : nh_(nh)
{
  nh_.param<int>("linear_axes", linear_axes_, 7);
  nh_.param<int>("angular_axes", angular_axes_, 6);
  nh_.param<double>("linear_velocity", linear_velocity_, 0.6);
  nh_.param<double>("angular_velocity", angular_velocity_, 0.5);

  pub_ = nh_.advertise<geometry_msgs::Twist>("/cmd_vel", 1);
  sub_ = nh_.subscribe<sensor_msgs::Joy>("/joy", 10, &JoyCtrl::Callback, this);
}

void JoyCtrl::Callback(const sensor_msgs::Joy::ConstPtr &msg)
{

  v_.linear.x = (msg->axes[linear_axes_]) * linear_velocity_;
  v_.angular.z = (msg->axes[angular_axes_]) * angular_velocity_;

  ROS_INFO("linear x:%.3lf  angular:%.3lf", v_.linear.x, v_.angular.z);
  pub_.publish(v_);
}