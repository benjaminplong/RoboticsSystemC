#include <math.h>

class Compass
{
public:
	Compass();
	//returns a value from 0 - 360 as an offset from north in degrees
	int get_orientation();
};