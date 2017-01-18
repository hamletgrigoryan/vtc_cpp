
#include <iostream>
#include <cmath>
#include <limits>
int main()
{
	int maxInt = std::numeric_limits<int>::max();
	std::cout << "[" << 2 << ";" << maxInt << "]" << std::endl;
	std::cout << 2;
	for ( int i = 3; i <= maxInt; i+=2 )
	{
		int count = 0;
		for ( int j = 2; j <= sqrt(i); ++j)
		{
			if ( i % j == 0 )
			{
				++count;
				break;
			}
		}
		if ( count == 0 )
		{
			std::cout << i << ";";
		}
	}
	return 0;
}

