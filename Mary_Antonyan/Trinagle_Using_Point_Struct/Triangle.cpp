#include "triangle.h"
#include <cmath>

Triangle::Triangle(){ }

Triangle::Triangle(Point topA, Point topB, Point topC)
{
	this->topA.setX(topA.getX());
	this->topA.setY (topA.getY());

	this->topB.setX(topB.getX());
	this->topA.setY (topA.getY());

	this->topC.setX(topC.getX());
	this->topC.setY(topC.getY());
}

void Triangle::setTopA(Point topA)
{
	this->topA.setX(topA.getX());
	this->topA.setY(topA.getY());
}

void Triangle::setTopB(Point topB)
{
	this->topB.setX(topB.getX());
	this->topA.setY(topB.getY());
}

void Triangle::setTopC(Point topC)
{
	this->topC.setX(topC.getX());
	this->topC.setY(topC.getY());
}

Point Triangle::getTopA()
{
	Point newPoint(topA.getX(), topA.getY());
	return newPoint;
}

Point Triangle::getTopB()
{
	Point newPoint(topB.getX(), topB.getY());
	return newPoint;
}

Point Triangle::getTopC()
{
	Point newPoint(topC.getX(), topC.getY());
	return newPoint;
}

