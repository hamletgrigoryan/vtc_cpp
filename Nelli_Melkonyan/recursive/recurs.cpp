
#include <iostream>

int printDown( int n )
{
	if(n>1)
	{
		std::cout << n << " ";
	    printDown( n - 1 );
	}
	return 1;
	
}

int printUp(int n)
{
	if(n>1)
	{
		std::cout << printUp(n-1)<<" ";
	}
	return n;
}


int main()
{
	int number;
	std::cout << "Enter the number ";
	std::cin >> number;
	
	
	std::cout << printDown(number) << std::endl;

	std::cout << printUp(number) << std::endl;
	
	
	return 0;
}
