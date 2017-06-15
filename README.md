# CarND-PID-Controller
[![Udacity - Self-Driving Car NanoDegree](https://s3.amazonaws.com/udacity-sdc/github/shield-carnd.svg)](http://www.udacity.com/drive)

This is the project repository for **Project No. 4 PID Controller**, part of Term 2 _Sensor Fusion_ of Udacity Self-Driving Car Nanodegree program, submitted by Albert Killer in June 2017. 

The goal of this project was to implement a proportional–integral–derivative controller (PID controller) in C++. Via *uWebSockets* an interface was set up to communicate with Udacity's *Term 2 Simulator*. Speed and Cross Track Error (CTE) are provided by the simulator, the latter describing the distance of the vehicle to a reference value, in this case the center of the road. 

The  and use at for creating steering angle

![PID Controller](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2d/PID.svg/640px-PID.svg.png "A block diagram of a PID controller in a feedback loop")


PID advantages:
* Low computational cost which is interessting particularly for a limited computation embedded environment like on a self-driving car
* Easy to program

PID disadvantages:
* Less intuitive concept than other controllers
* Hyper parameter tuning by hand or by decent gradient if possible


Want to know more about PID Controllers? Have a look at this one: https://en.wikipedia.org/wiki/PID_controller
