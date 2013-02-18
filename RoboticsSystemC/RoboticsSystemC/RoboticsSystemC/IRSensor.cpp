#include "IRSensor.h"

IRSensor::IRSensor(Orientation::Direction dir)
{
	//default void contstructor
	orientation = dir;
}

int IRSensor::get_distance()
{
	//gets the distance for the sensor
	return 0;
}