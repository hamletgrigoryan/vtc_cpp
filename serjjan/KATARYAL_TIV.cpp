#include<iostream>
#include<limits>
int main ()
{
 int maxint = std::numeric_limits<int>::max();
	for (int i = 0;i <= maxint; ++i)
	{
		long s=0;
		for (int j = 1; j <= i / 2; ++j)
		{
			if(i % j == 0)
			{
				s += j;
			}
		}
		if( s== i)
		{
			std::cout<<i<<"; ";
		}
	}
	return 0;
}
