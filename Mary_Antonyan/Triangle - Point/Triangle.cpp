#include <iostream>

int main()
{
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

	double x, y;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;

	bool vec1 = ((x - x1)*(y2 - y1) - (x2 - x1)*(y - y1)) < 0.0f;
	bool vec2 = ((x - x2)*(y3 - y2) - (x3 - x2)*(y - y2)) < 0.0f;
	bool vec3 = ((x - x3)*(y1 - y3) - (x1 - x3)*(y - y3)) < 0.0f;

	if (vec1 == vec2 && vec2 == vec3)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}
