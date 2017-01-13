#include <iostream>

int main()
{
	int boardSize = 10;
	char white = ' ';
	char black = '@';
	int unitSize = 6;
	int size = unitSize + 1;

	for(int i = 0; i <= boardSize*size; ++i)
	{
		for(int j = 0; j <= boardSize*size; ++j)
		{
			if(i % size == 0)
				std::cout << '_';
			else if (j % size == 0)
				std::cout << '|';
			else if ((i / size + j / size) % 2 == 0)
				std::cout << white;
			else std::cout << black;
		}
		std::cout << std::endl;
	}
}
