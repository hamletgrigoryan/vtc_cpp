#include <iostream>

void print(int n)
{
	if(n >= 1)
	{
		std::cout << n << " \t ";
		print(n - 1);
		std::cout << n << " \t ";
	}
}

int main()
{
	int n = 10;	
	print(n);
	return 0;
}
