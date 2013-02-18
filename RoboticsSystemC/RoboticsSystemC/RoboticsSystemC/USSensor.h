#include <math.h>
#include "Orientation.h"

class USSensor
{
public:
	USSensor(Orientation::Direction dir);
	int get_distance();

private:
	Orientation::Direction orientation;
};