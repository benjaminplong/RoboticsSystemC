#include "USSensor.h"

USSensor::USSensor(Orientation::Direction dir)
{
	orientation = dir;
	pin = 0;
}

int USSensor::get_distance(int pin)
{
	pinMode(pin,INPUT);
	return(analogRead(pin));
}
