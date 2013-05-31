#include "Search.h"
#include "Map.h"
#include "Path.h"
#include "Point.h"
#include <iostream>
using namespace std;

int main() {
	cout << "Constructing start\n";
	Point start = Point(0,0,0);
	cout << "Constructing end\n";
	Point end = Point(10,10,0);
	cout << "Constructing astar\n";
	Search astar = Search(start, end);
	cout << "Begin Exploring Front\n";
	while(!astar.exploreFront()){	; }
	cout << "Cost: " << astar.getSolution().getCost();
	for (MyIterator i = (astar.getSolution()).getBegin();
				i != (astar.getSolution()).getEnd();
				i++)
cout << "\n X:"<< i->getX()<<" Y:"<< i->getY()<<" H:" << i->getH();
	return 0;
}
