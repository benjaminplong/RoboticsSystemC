#include "World.h"
#include "Orientation.h"

class Person
{
public:
	Person(int start,Orientation::Direction dir);
	void move(int nextNode);
	int get_position() {return location;}


private:
	int location;
	int theta;
	Orientation::Direction orientation;
	int *pastLocations;
};