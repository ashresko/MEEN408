#include "SERVOMOTOR.h"

SERVOMOTOR::SERVOMOTOR()
:servoPWM(2, 10000000, 0)
{}

// SERVOMOTOR::int getAngle();

void SERVOMOTOR::setAngle(int Anglee) {
  if ((Anglee<theta_high) && (Anglee>theta_low)) {
    Angle = Anglee;
    int pulsewidth = 0;
    pulsewidth = (upper_limit-lower_limit)/(theta_high-theta_low) * Angle + lower_limit;
    servoPWM.setPWMDutyCycle(pulsewidth);
  } else {
    std::cout << "Angle could not be set"; // error
  }
}

SERVOMOTOR::void gripperOpen() {
  SERVOMOTOR::setAngle(theta_high)
}

SERVOMOTOR::void gripperClose() {
  SERVOMOTOR::setAngle(theta_low)
}
