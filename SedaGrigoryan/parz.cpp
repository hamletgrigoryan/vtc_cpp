#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int main()
{
	int max_Int = numeric_limits<int>::max();
	for ( int i = 2; i <= max_Int; ++i )
	{
		int k = 0;
		for ( int j = 2; j <= sqrt(i); ++j)
		{
			if ( i % j == 0 )
			{
				++k;
				break;
			}
		}
		if ( k == 0 )
		{
			cout << i << "\n";
		}
	}
	return 0;
}
