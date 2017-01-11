#include <iostream>
int main()
{
	int number;
	std::cout << "Please enter number" ;
	std::cin >> number;
	int number_1 = number;
	int sim_number = 0;
	while ( number_1 != 0 )
	{
		int a = number_1 % 10;
		sim_number *= 10;
		sim_number += a;
		number_1 /= 10;
	}
	if ( sim_number == number )
	{
		std::cout << number << " is simetric " ;
	}else
	{
		std::cout << number << " isn't simetric ";
	}
	return 0;
}

