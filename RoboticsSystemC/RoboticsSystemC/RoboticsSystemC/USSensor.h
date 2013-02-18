#include <math.h>
#include "Orientation.h"
#include "World.h"

class USSensor
{
public:
	USSensor(Orientation::Direction dir);
	int get_distance(int pin);

private:
	Orientation::Direction orientation;
};
