#ifndef POINT
#define POINT
#include <iostream>
class Point {
	public:
		Point(double x, double y, double h);
		Point& operator=( const Point& rhs ) {
      x = rhs.x;
      y = rhs.y;
      h = rhs.h;
      return *this;
		};
		double getX();
		double getY();
		double getH();
		void setX(double x);
		void setY(double y);
		void setH(double h);

	private:
		double x;
		double y;
		double h;
};
#endif
