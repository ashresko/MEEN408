#include "SERVOMOTOR.h"

<<<<<<< HEAD
PWM servoPWM  // (pin_number, period, duty_cycle)

SERVOMOTOR::SERVOMOTOR()
:servoPWM(2, 1000000, 0)
{

=======
PWM servoPWM;
SERVOMOTOR::SERVOMOTOR() {
>>>>>>> origin/blake-branch
}
SERVOMOTOR::~SERVOMOTOR() {
}
SERVOMOTOR::int getAngle();
<<<<<<< HEAD
SERVOMOTOR::void setAngle(int Anglee) {


};
=======
SERVOMOTOR::void setAngle();
>>>>>>> origin/blake-branch
