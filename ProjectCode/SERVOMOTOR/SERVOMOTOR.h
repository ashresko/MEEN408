#ifndef SERVOMOTOR_H
#define SERVOMOTOR_H

#include "PWM.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>

class SERVOMOTOR {
private:
  PWM servoPWM;  // pwm which will send control signal to servomotor

public:
  SERVOMOTOR();
  ~SERVOMOTOR();
  int getAngle();
  void setAngle(int Anglee);

};

#endif
