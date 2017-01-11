#include <iostream>
const int tox = 8;
const int syun = 3;
const char white = ' ';
const char black = '*';
const int  s = syun + 1;

int main()
{

	for(int i = 0; i <= tox*s; ++i)
	{
		for(int j = 0; j <=tox*s; ++j)
		{
			if(i % s == 0)
				std::cout << '_';
			else if (j % s == 0)
				std::cout << '|';
			else if ((i / s + j / s) % 2 == 0)
				std::cout << white;
			else std::cout << black;
		}
		std::cout << std::endl;
	}
}
