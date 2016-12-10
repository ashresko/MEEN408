#ifndef DCMOTOR_H
#define DCMOTOR_H

#include "EQEP.h"
#include "PWM.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>

class DCMOTOR {
private:
  // Motor Parameters
  PWM motorPWM;   // pwm to do basic control signal to motor
  EQEP motorEQEP; // for reading back the angle
  double gear_r;  // the motor's gear ratio. Not sure how to use this right now.
  double k_emf;   // emf motor constant  w = k_emf * Voltage
  double k_t;     // torque constant     Torque = k_t * current
  // Angle Tracking
  double angle;
  // Control Parameters
  int motorOn;

public:
  DCMOTOR(int PWMNumberr, int EQEPNumberr);
  ~DCMOTOR();
  int getAngle();
  void setPWMPeriod(int Periodd);
  int getPWMPeriod();
  void setPWMDutyCycle(int DutyCyclee);
  int getPWMDutyCycle();
  double setk_emf(double k_emff);
  double getk_emf();
  double setk_t(double k_tt);
  double getk_t();
  void enable(int enablee); // disables or enables the motors
};

#endif
