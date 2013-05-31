#include "Path.h"

Path::Path() {
	this->cost = 0;
}

void Path::addNode(Point &p, double cost) {
	path.push_back(p);
	this->cost += cost;
}

double Path::getCost() const{
	return this->cost;
}

Point Path::getEndNode() {
	return path.back();
}

Point Path::getStartNode() {
	return path.front();
}

MyIterator Path::getBegin(){
	return path.begin();
}

MyIterator Path::getEnd(){
	return path.end();
}
