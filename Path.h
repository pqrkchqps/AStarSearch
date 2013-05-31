#ifndef PATH
#define PATH
#include "Point.h"
#include <vector>
#include <iterator>
typedef typename std::vector<Point>::iterator MyIterator;

class Path {
	public:
		Path();
		void addNode(Point &p, double cost);
		Point getEndNode();
		Point getStartNode();
		double getCost() const;
		MyIterator getBegin();
		MyIterator getEnd();
		bool operator < (const Path &p) const
		{
			return (cost < p.getCost());
		}

		bool operator > (const Path &p) const
		{
			return (cost > p.getCost());
		}


	private:
		std::vector<Point> path;
		double cost;
};
#endif
