#ifndef DCMOTOR_CONTROLLER_H
#define DCMOTOR_CONTROLLER_H

#include "DCMOTOR.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>

class DCMOTOR_CONTROLLER {
private:
  // Controller parameters
  float e;
  float e_i;
  float e_d;
  float e_prev;
  float k_p;
  float k_d;
  float k_i;
  // DC Motor
  DCMOTOR motor;

public:
  DCMOTOR_CONTROLLER();
  ~DCMOTOR_CONTROLLER();
  void run();
};

#endif
