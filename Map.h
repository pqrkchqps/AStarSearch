#ifndef MAP
#define MAP

#include <vector>
#include "Point.h"

class Map {
	public:
		static std::vector<Point> getNeighbors(Point &x);
};
#endif
