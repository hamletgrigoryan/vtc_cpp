#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

int main()
{
	double x1, x2, x3, y1, y2, y3;
	double a, b, c;
	do
	{
		std::cout << "Enter the coordinates of triangle: " << std::endl;
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

		a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
		c = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
		//std::cout << "a= " << a << std::endl;
		//std::cout << "b= " << b << std::endl;
		//std::cout << "c= " << c << std::endl;
	} while (a + b <= c || a + c <= b || b + c <= a);

	std::cout << "**********" << std::endl << "Enter the coordinates of point: " << std::endl;

	double x, y;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;

	double vecX1 = x - x1;
	double vecY1 = y - y1;
	double vecX2 = x - x2;
	double vecY2 = y - y2;
	double vecX3 = x - x3;
	double vecY3 = y - y3;

	double vec1 = sqrt(vecX1*vecX1 + vecY1*vecY1);
	double vec2 = sqrt(vecX2*vecX2 + vecY2*vecY2);
	double vec3 = sqrt(vecX3*vecX3 + vecY3*vecY3);

	double cosAlpha = (vecX1*vecX2 + vecY1*vecY2) / (vec1*vec2);
	double cosBetta = (vecX2*vecX3 + vecY2*vecY3) / (vec2*vec3);
	double cosGamma = (vecX1*vecX3 + vecY1*vecY3) / (vec1*vec3);

	double alpha = acos(cosAlpha);
	double betta = acos(cosBetta);
	double gamma = acos(cosGamma);

	if (alpha + betta + gamma == 2 * M_PI)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;

	return 0;
	}