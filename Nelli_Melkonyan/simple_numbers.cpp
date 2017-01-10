#include <iostream>
#include <cmath>
#include <limits>
int main()
{
	int maxInt = std::numeric_limits<int>::max();
	std::cout << "[" << 2 << ";" << maxInt << "]" << std::endl;
	for ( int i = 2; i <= maxInt; ++i )
	{
		int count = 0;
		for ( int j = 2; j <= sqrt(i); ++j)
		{
			if ( i % j == 0 )
			{
				++count;
			}
		}
		if ( count == 0 )
		{
			std::cout << i << ";";
		}
	}
	return 0;
}

