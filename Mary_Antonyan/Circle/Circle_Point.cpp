#include "circle.h"

#include <iostream>

int main()
{
	Point center(0, 0);
	double radius = 5;
	Circle circle(center, radius);

	std::cout << circle.contains(center) << " " <<
		circle.contains(Point(1.5, 2.5)) << " " <<
		circle.contains(Point(6, 6)) << std::endl;

	system("pause");
	return 0;
}