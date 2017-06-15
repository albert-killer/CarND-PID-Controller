# CarND-PID-Controller
[![Udacity - Self-Driving Car NanoDegree](https://s3.amazonaws.com/udacity-sdc/github/shield-carnd.svg)](http://www.udacity.com/drive)

This is the project repository for **Project No. 4 PID Controller**, part of Term 2 _Sensor Fusion_ of Udacity Self-Driving Car Nanodegree program, submitted by Albert Killer in June 2017. 

The goal of this project was to implement a proportional–integral–derivative controller (PID controller) in C++. Via *uWebSockets* an interface was set up to communicate with Udacity's *Term 2 Simulator*. Speed and Cross Track Error (CTE) are provided by the simulator, the latter describing the distance of the vehicle to a reference value, in this case the center of the road. The controller is defined by following feedback loop:

![PID Controller](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2d/PID.svg/640px-PID.svg.png "A block diagram of a PID controller in a feedback loop")

On every new input value of CTE the PID controller updates respective errors, which determine the effect of the initially set up coefficients of the controller *Kp*, *Ki* and *Kd*. These coefficients have to be optimized for the application by either tuning them manually or applying a gradient decent method (aka *twiddle*) to investigate the optimal parameter values.   

control variable *steering value* = *Kp* * *p_error* + *Ki* * *i_error* + *Kd* * *d_error*

The PID controller concept consists of following terms:

* __p for proportional term__: how hard to pull back to the center, error directly defined by current CTE
* __i for integral term__: how consistantly the car should be pulling back to the center, error defined the sum of all crosstrack errors observed
* __d for differential term__: how smooth the car should approach target trajectory, error defined by differenc between current and previous CTE

The PID controller is one of many controllers available to effectively manipulate the steering of a self-driving car, providing the following advantages and disadvantages.  

__PID advantages__:
* Low computational cost which is interessting particularly for a limited computation embedded environment like on a self-driving car
* Easy to program

__PID disadvantages__:
* Less intuitive concept than other controllers
* Hyper parameter tuning by hand or by decent gradient if possible

Want to know more about PID Controllers? Have a look at this one: https://en.wikipedia.org/wiki/PID_controller
