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
  double gear_r;  // the motor's gear ratio
  double k_emf;   // emf motor constant  w = k_emf * Voltage
  double k_t;     // torque constant     Torque = k_t * current
  // Angle Tracking
  double angle;
  // Control Parameters
  int motorOn;

public:
  DCMOTOR(int PWMNumberr, int EQEPNumberr);
  ~DCMOTOR();
  // Some of the below are removed from DCMOTOR as they are really more of
  // DCMOTOR_CONTROLLER task
  //  void setAngle(int anglee);
  int getAngle();
  //  void setAngleOffset(int offsett);
  //  int  getAngleOffset();
  //  void setVelocity( int torquee);
  //  int  getVelocity();
  void setPWMPeriod(int Periodd);
  int getPWMPeriod();
  void setPWMDutyCycle(int DutyCyclee);
  int getPWMDutyCycle();
  void enable(int enablee); // disables or enables the motors
};

#endif
