#include <math.h>
#include "Orientation.h"

class IRSensor
{
public:
	IRSensor(Orientation::Direction dir);

	int get_distance();

private:
	Orientation::Direction orientation;
};