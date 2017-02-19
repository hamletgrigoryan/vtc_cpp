#include "triangle.h"
#include <iostream>

Point createPoint()
{
	double x, y;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;

	Point point(x, y);
	return point;
}

double getArea(Point topA, Point topB, Point topC)
{
	double AB = topA.distance(topB);
	double BC = topB.distance(topC);
	double AC = topC.distance(topA);

	double p = (AB + BC + AC) / 2;
	return sqrt(p*(p - AB)*(p - BC)*(p - AC));
} 

bool belongs(Triangle triangle, Point point, double epsilion)
{
	double s = getArea(triangle.getTopA(), triangle.getTopB(), triangle.getTopC());
	double s1 = getArea(triangle.getTopA(), triangle.getTopB(), point);
	double s2 = getArea(triangle.getTopA(), point, triangle.getTopC());
	double s3 = getArea(point, triangle.getTopB(), triangle.getTopC());

	return (s - s1 + s2 + s3 < epsilion) ? true : false;
}

int main()
{
	//Input data for triangle
	std::cout << "Input data for triangle:\n";
	Point topA = createPoint();
	Point topB = createPoint();
	Point topC = createPoint();

	//Create and initialize trinagle
	Triangle triangle(topA, topB, topC);

	//Input data for point, create and initialize point
	std::cout << "Input data for point:\n";
	Point point = createPoint();

	//Input accuracy ratio
	double epsilion;
	do
	{
		std::cout << "Enter the accuracy ratio: ";
		std::cin >> epsilion;
	} while (epsilion < 0 || epsilion > 1);

	//Print result
	if (belongs(triangle, point, epsilion))
	{
		std::cout << "The point belongs the triangle...\n";
	}
	else
	{
		std::cout << "The point does not belong the triangle...\n";
	}

	return 0;
}