#include <iostream>
#include "triangle.hpp"

int main()
{
	point p1(1,2);
	point p2(2,2);
	point p3(1,4);

	std::cout << "p1 -> p2 = " << p1.distance(p2) << "  " << "p1 -> p3 = " 
                  << p1.distance(p3) << "  " << "p2 -> p3 = " << p2.distance(p3) 
                  << std::endl;

	triangle t(p1, p2, p3);
	std::cout << "area = " << t.area() << std::endl;
	std::cout << t.contains(p1) << "  " << t.contains(point(1.5, 2.5)) <<
		    "  " << t.contains(point(3, 3)) << std::endl;
	return 0;
}
