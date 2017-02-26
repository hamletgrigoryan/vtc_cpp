#include "rectangle.h"

#include <iostream>

int main()
{
	Point p1(0, 0);
	Point p2(3, 0);
	Point p3(3, 5);
	Point p4(5, 0);

	Rectangle rectangle(p1, p2, p3, p4);

	std::cout << rectangle.contains(p1) << " " <<
		rectangle.contains(Point(6, 6)) << " " <<
		rectangle.contains(Point(1.5, 2.5)) << std::endl;

	system("pause");
	return 0;
}