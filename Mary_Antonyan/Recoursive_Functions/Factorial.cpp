#include <iostream>

long int factorial(unsigned int n)
{
	return (n == 0 || n == 1) ? 1 : n*factorial(n - 1);
}

int main()
{
	unsigned int n = 10;
	for (int i = 0; i <= n; i++)
	{
		std::cout << i << "! = " << factorial(i) << std::endl;
	}

	system("pause");
	return 0;
}