#include <math.h>
#include "Orientation.h"
#include "World.h"

class IRSensor
{
public:
	IRSensor(Orientation::Direction dir);

	int get_distance();

private:
	Orientation::Direction orientation;
};