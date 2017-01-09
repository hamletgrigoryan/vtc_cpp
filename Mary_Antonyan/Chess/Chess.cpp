#include <iostream> 

int main()
{
	int size;
	std::cout << "Enter size: ";
	std::cin >> size;

	char black;
	std::cout << "Enter black character: ";
	std::cin >> black;

	char white;
	std::cout << "Enter white character: ";
	std::cin >> white;

	int unitSize;
	std::cout << "Enter size of unit: ";
	std::cin >> unitSize;

	for(int i = 0; i < size * (unitSize + 1) + 1; ++i)
		std::cout << '_';
	std::cout << std:: endl;
	
	for(int i = 0; i < size; ++i)
	{
		//std::cout << '|';
		for(int k = 0; k < unitSize; ++k)
		{
			std::cout << '|';
			for(int j = 0; j < size; ++j)
			{
				if((i + j) % 2 == 0)
					for(int n = 0; n < unitSize; ++n)
						std::cout << white;
				else
					for(int n = 0; n < unitSize; ++n)
						std::cout << black;

				std::cout << '|';
			}
		
			std::cout << std::endl;	
		}
	}
	
	for(int i = 0; i < size * (unitSize + 1) + 1; ++i)
                std::cout << '_';
	std::cout << std:: endl;

}
