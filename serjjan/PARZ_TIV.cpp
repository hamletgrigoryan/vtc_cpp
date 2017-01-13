#include<iostream>
#include<limits>
int main ()
{
int maxint = std::numeric_limits<int>::max();
	for (int i=2; i<=maxint;++i)
	{
		int a= 0;

		for(int j=2; j<= i/2; ++j)
		{
			if(i % j==0)
			{
				++a;
			}
		}
		if (a==2)
		{

			std::cout<<i<<"; ";
		}
	}
	return 0;
}
