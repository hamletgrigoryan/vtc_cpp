#include <iostream>

int main()
{
	for (int i = 0; i < 16; i++)
		std::cout << '_';
	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 2; j++)
		{
			std::cout << '|';

			if (i % 2 == 1)
			{
				std::cout << "  ";
				for (int k = 0; k < 3; k++)
				{
					std::cout << "**  ";
				}
				std::cout << "**";
			}
			else
			{
				for (int k = 0; k < 4; k++)
				{
					std::cout << "**  ";
				}
			}

			std::cout << '|' << std::endl;
		}

	for (int i = 0; i < 16; i++)
		std::cout << '_';
	std::cout << std::endl;

	system("pause");
	return 0;
}
