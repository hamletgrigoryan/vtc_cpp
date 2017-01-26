
#include <iostream>

int factorial( int n )
{

	if(n == 1 || n==0)
	{
		return 1;
	}

	return n *= factorial(n - 1);
}


int main()
{
	unsigned int number;
	std::cout << "Enter the number ";
	std::cin >> number;
	
	
	std::cout << factorial(number) << std::endl;

	return 0;
}
