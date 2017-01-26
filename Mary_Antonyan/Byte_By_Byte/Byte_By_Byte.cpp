#include <iostream>

int main()
{
	int num = 98765432;
	void* numPtr = &num;

	for (int i = 0; i < sizeof(int); ++i)
	{
		char* part = (char*)numPtr + i * sizeof(char);
		short int res = (short int)*part;
		std::cout << res << std::endl;
	}

	return 0;
}