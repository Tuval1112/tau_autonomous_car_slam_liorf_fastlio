# Autonomous Car SLAM Project – LIO-RF & Fast-LIO

Welcome to the official repository for our SLAM system integration project, part of Tel Aviv University's autonomous vehicle initiative.

> **Team**: Tuval, Orit   
> **Advisor**: Roi Raich  
> **Lab**: Tel Aviv University

---

##  Project Overview

This project focuses on integrating real-time SLAM algorithms into a self-driving vehicle, allowing it to map and localize itself in dynamic environments using LiDAR and IMU sensors.

Our goal is to implement and test **LIO-RF** and **Fast-LIO**, two cutting-edge SLAM algorithms, using:
- **Ouster OS1-128 LiDAR**
- **INS-DL IMU**
- **Jetson Nano (on-car)**
- **KITTI / NCLT datasets** (for simulation & testing)
---

##  Algorithm Selection

We conducted a comprehensive comparison of multiple SLAM approaches and selected:

###  LIO-RF
- Optimized for dynamic environments.
- Uses IMU for initial estimation and scan matching.
- Includes loop closure with graph optimization.

###  Fast-LIO
- Efficient real-time LiDAR-Inertial Odometry using a Kalman filter.
- High-speed point cloud registration with incremental KD-tree mapping.

**Both were tested on datasets and deployed to the autonomous car for live evaluation.
**---

##  System Architecture

Our system consists of:
- ROS2-based SLAM framework
- Sensor integration: LiDAR + IMU
- 3D map generation
- Navigation-ready pose estimation

See the `/docs` folder or our poster for visual diagrams and results.

---

## 🛠️ Installation & Usage

### Requirements
- Ubuntu 20.04
- ROS2 Foxy / Humble
- Python 3.8+
- Git, CMake, colcon

### Setup Instructions
clone the git and build them through colcon build.
For further instructions for installation see liorf git and FastLio git
liorf git- https://github.com/YJZLuckyBoy/liorf
fast lio git- https://github.com/hku-mars/FAST_LIO
