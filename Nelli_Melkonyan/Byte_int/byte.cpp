#include <iostream>

int main()
{
	int number;
	std::cout << "enter the number ";
	std::cin >> number;
	int* ptr = &number;
	char* byte = (char*)ptr;
	for( int i = 0; i < sizeof(number); ++i)
	{
		std::cout << i + 1 << " byte  " << int(*byte) << std::endl;
		++byte;
	}
	return 0;
}
