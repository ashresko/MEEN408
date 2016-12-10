#include "SERVOMOTOR.h"

PWM servoPWM  // (pin_number, period, duty_cycle)

SERVOMOTOR::SERVOMOTOR()
:servoPWM(2, 1000000, 0)
{

}

SERVOMOTOR::~SERVOMOTOR() {

}

SERVOMOTOR::int getAngle();
SERVOMOTOR::void setAngle(int Anglee) {


};
