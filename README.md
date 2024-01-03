# agi_sim
**A repo. which maintains simulation tools in gazebo for agi-robotics.**

**The main branch is  developed on ros1 noetic.**

![](imgs/gazebo_rviz.gif)

## Dependencies

1. ros1 noetic

2. gazebo11

3. velodyne

   ```bash
   sudo apt install ros-noetic-velodyne*
   ```

4. joystick

   ```bash
   sudo apt-get install ros-noetic-joy joystick
   ls -l /dev/input/js0
   sudo jstest /dev/input/js0
   rosrun joy joy_node
   rostopic echo joy
   ```

## Run

```bash
git clone https://github.com/zhan994/agi_sim.git
cd agi_sim
catkin_make

roslaunch agi_sim gazebo.launch
```

