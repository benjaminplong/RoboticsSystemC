#include <stdlib.h>

enum Type {TEE,CROSS,CORNER,NONE};
typedef struct{
	int walls[4];
	Type type;
	int number;

} Intersection;
class World
{
public:
	World();
	//need some form of function list for input from all sensors
	Intersection locate();

private:
	//linked list of intersection nodes
};