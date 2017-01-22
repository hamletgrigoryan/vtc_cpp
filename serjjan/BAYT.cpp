#include <iostream>

int main()
{

	int n;
	std::cin >> n;
	void* a = &n;
	char*bayt = (char*)a;
	for( int i = 0; i < sizeof(int); ++i)
	{

		std::cout << i + 1 << " bayt  " << int(*bayt) << std::endl;
		++bayt;
	}

	return 0;
}
