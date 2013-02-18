#include "IRSensor.h"

IRSensor::IRSensor(Orientation::Direction dir)
{
	//default void contstructor
	orientation = dir;
	pin = 0;
}

int IRSensor::get_distance(int pin)
{
	//gets the distance for the sensor
	pinMode(pin,INPUT);
	return(analogRead(pin));
}
