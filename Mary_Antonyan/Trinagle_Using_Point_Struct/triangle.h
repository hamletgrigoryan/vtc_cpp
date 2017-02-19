#pragma once
#include "point.h"

struct Triangle
{
private:
	Point topA;
	Point topB;
	Point topC;

public:
	Triangle();
	Triangle(Point, Point, Point);
	void setTopA(Point);
	void setTopB(Point);
	void setTopC(Point);

	Point getTopA();
	Point getTopB();
	Point getTopC();
};