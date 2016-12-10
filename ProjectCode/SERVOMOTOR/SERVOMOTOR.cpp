#include "SERVOMOTOR.h"

PWM servoPWM  // (pin_number, period, duty_cycle)

SERVOMOTOR::SERVOMOTOR()
:servoPWM(2, 10000000, 0)
{

SERVOMOTOR::~SERVOMOTOR() {
}
SERVOMOTOR::int getAngle();

SERVOMOTOR::void setAngle(int Anglee) {
  // check that input is valid here
  Angle = Anglee;

  int pulsewidth = 0;

  pulsewidth =

};
