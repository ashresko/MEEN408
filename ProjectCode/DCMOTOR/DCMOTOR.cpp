#include "DCMOTOR.h"

DCMOTOR::DCMOTOR(int PWMNumberr, int EQEPNumberr)
	:motorPWM(PWMNumberr,1000000,0), motorEQEP(EQEPNumberr)
	{}
DCMOTOR::void setAngle(int anglee);
DCMOTOR::int  getAngle();
DCMOTOR::void setAngleOffset(int offsett);
DCMOTOR::int  getAngleOffset();
DCMOTOR::void setVelocity( int torquee);
DCMOTOR::int  getVelocity();
DCMOTOR::void setPWMPeriod();
DCMOTOR::int  getPWMPeriod();
DCMOTOR::void setPWMDutyCycle();
DCMOTOR::int  getPWMDutyCycle();
DCMOTOR::void enable(int enablee);
