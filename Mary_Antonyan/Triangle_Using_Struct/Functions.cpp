#include <cmath>
#include "functions.h"

double getLength(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

double getSurface(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double side1 = getLength(x1, y1, x2, y2);
	double side2 = getLength(x1, y1, x3, y3);
	double side3 = getLength(x2, y2, x3, y3);
	double p = (side1 + side2 + side3) / 2;

	return sqrt(p*(p - side1)*(p - side2)*(p - side3));
}