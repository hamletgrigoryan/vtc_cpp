#include <iostream>
#include <cmath>
#include <limits>
int main()
{
	int maxInt = std::numeric_limits<int>::max();
	std::cout <<"[ " << 2 << ";" << maxInt << "]" << std::endl;
	for ( int i=2; i<= maxInt ; ++i )
	{
		int sum = 1;
		for ( int j = 2; j <= sqrt(i) ; ++j )
		{
			if ( i % j == 0 )
			{
				sum += j;
				double k;
				double l;
				k = sqrt (i);
				l = j;
				if ( l != k)
				{
					sum += i/j ;
				}
			}
			if ( sum > i )
			{
				break;
			}
		}

		if ( i == sum )
		{
			std::cout << i << ";" ;
		}
	}
	return 0;
}


		
