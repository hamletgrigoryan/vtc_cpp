#include <iostream>
#include "triangle.h"
#include "Point.h"
#include "functions.h"

int main()
{
	//Input data for triangle
	std::cout << "Input data for triangle:\n";
	double x1, y1, x2, y2, x3, y3;
	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "y1 = ";
	std::cin >> y1;
	std::cout << "x2 = ";
	std::cin >> x2;
	std::cout << "y2 = ";
	std::cin >> y2;
	std::cout << "x3 = ";
	std::cin >> x3;
	std::cout << "y3 = ";
	std::cin >> y3;

	//Initialize trinagle
	Triangle triangle;
	triangle.setx1(x1);
	triangle.setx2(x2);
	triangle.setx3(x3);
	triangle.sety1(y1);
	triangle.sety2(y2);
	triangle.sety3(y3);

	//Input data for point
	std::cout << "Input data for point:\n";
	double x, y;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;

	//Initialize point
	Point point;
	point.setX(x);
	point.setY(y);

	//Input accuracy ratio
	double epsilion;
	do
	{
		std::cout << "Enter the accuracy ratio: ";
		std::cin >> epsilion;
	} while (epsilion < 0 || epsilion > 1);

	//Count surfaces
	double s1 = getSurface(triangle.getx1(), triangle.gety1(), triangle.getx2(), triangle.gety2(), point.getX(), point.getY());
	double s2 = getSurface(triangle.getx1(), triangle.gety1(), triangle.getx3(), triangle.gety3(), point.getX(), point.getY());
	double s3 = getSurface(triangle.getx2(), triangle.gety2(), triangle.getx3(), triangle.gety3(), point.getX(), point.getY());
	double s = getSurface(triangle.getx1(), triangle.gety1(), triangle.getx2(), triangle.gety2(), triangle.getx3(), triangle.gety3());

	if (s1 + s2 + s3 - s <= epsilion)
	{
		std::cout << "The point belongs the triangle...\n";
	}
	else
	{
		std::cout << "The point does not belong the triangle...\n";
	}

	system("pause");
	return 0;
}