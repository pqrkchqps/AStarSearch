#include "Map.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

std::vector<Point> Map::getNeighbors(Point &x) {
	std::vector<Point> neighbors;
  srand (time(NULL));
	double hi = 0;
	for (double xi = -1; xi < 2; xi++)
		for (double yi = -1; yi < 2; yi++) {
			hi = rand();
			if (xi != 0 && yi != 0)
				neighbors.push_back(
								Point(x.getX()+xi,
											x.getY()+yi,
											x.getH()+hi));
		}
	return neighbors;
}

