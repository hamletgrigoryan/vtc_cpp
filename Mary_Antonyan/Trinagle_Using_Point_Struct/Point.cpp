#include "Point.h"
#include <cmath>

Point::Point(){}

Point::Point(double x, double y) :x(x), y(y)
{ }

void Point::setX(double x)
{
	this->x = x;
}

void Point::setY(double y)
{
	this->y = y;
}

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

double Point::distance(Point point2)
{
	return sqrt((getX() - point2.getX())*(getX() - point2.getX()) + (getY() - point2.getY())*(getY() - point2.getY()));
}