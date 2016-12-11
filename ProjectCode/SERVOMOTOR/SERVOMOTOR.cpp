#include "SERVOMOTOR.h"

PWM servoPWM  // (pin_number, period, duty_cycle)

SERVOMOTOR::SERVOMOTOR()
:servoPWM(2, 10000000, 0)
{}

SERVOMOTOR::~SERVOMOTOR() {
}
SERVOMOTOR::int getAngle();

SERVOMOTOR::void setAngle(int Anglee) {
  if ((Anglee<theta_high) && (Anglee>theta_low)) {
    Angle = Anglee;
  } else {
    // error
  }

  int pulsewidth = 0;
  pulsewidth = (upper_limit-lower_limit)/(theta_high-theta_low) * Angle + lower_limit;

  servoPWM.setPWMPeriod(upper_limit);
  servoPWM.setPWMDutyCycle(pulsewidth);

}

SERVOMOTOR::void gripperOpen() {

}

SERVOMOTOR::void gripperClose() {

}