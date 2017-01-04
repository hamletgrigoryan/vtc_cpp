#include <iostream>

int main()
{
	unsigned int n;
	std::cout << "Enter n: ";
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n -  i; j++)
			std::cout << ' ';

		for (int j = 0; j < 2 * i + 1; j++)
			std::cout << '*';

		std::cout << std::endl;
	}

	return 0;
}
