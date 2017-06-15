#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  /*
  * Initialize PID.
  */
  this -> Kp = Kp;
  this -> Ki = Ki;
  this -> Kd = Kd;

  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;
}

void PID::UpdateError(double cte) {
  /*
  * Update the PID error variables given cross track error. // TWIDDLE
  *  p_error;
  *  i_error;
  *  d_error;
  */

  //double delta_p = 1.0;
  //double delta_i = 1.0;
  //double delta_d = 1.0;

  //int it;

  //while ((delta_p + delta_i + delta_d) > 0.001){
  d_error = cte - p_error; // p_error has the value of the previous cte
  p_error = cte;
  i_error += cte;


}

double PID::TotalError() {
  /*
  * Calculate the total PID error.
  */
  return Kp*p_error + Ki*i_error + Kd*d_error;
}

