#ifndef DCMOTOR_CONTROLLER_H
#define DCMOTOR_CONTROLLER_H

#include <unistd.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <PWM.h>
#include <EQEP.h>

class DCMOTOR_CONTROLLER{
  private:
    // Controller parameters
    float e;
    float e_i;
    float e_d;
    float e_prev;
    float k_p;
    float k_d;
    float k_i;

  public:
    DCMOTOR_CONTROLLER();
    ~DCMOTOR_CONTROLLER();



};

#endif
