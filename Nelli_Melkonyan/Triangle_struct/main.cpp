#include "tr_struct.hpp"
#include <iostream>

int main()
{
	int x1, x2, x3, y1, y2, y3;
	
	std::cout << "x1 = ";
	std::cin >> x1;

	std::cout <<"x2 = ";
	std::cin >> x2;

	std::cout << "x3 = ";
	std::cin >> x3;

	std::cout << "y1 = ";
	std::cin >> y1;
	
	std::cout << "y2 = ";
	std::cin >> y2;

	std::cout << "y3 = ";
	std::cin >> y3;

	Triangle object(x1 , y1 , x2 , y2 , x3 , y3);
   	object.Area();

	int x, y ;

	std::cout << "x = " ;
	std::cin >> x;

	std::cout << "y = ";
	std::cin >> y ;

	if(object.contain(x , y))
	{
		std::cout << "Contain" ;
	}else
	{
		std::cout << "Not contain ";
	}

	return 0;

}	
