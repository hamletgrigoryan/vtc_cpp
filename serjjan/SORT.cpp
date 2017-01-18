#include<iostream>
#include <algorithm>
#include <cstdlib>

int main ()
{
	int a[100];
	int MAX;
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		a[i] = 1 +  rand() % 100;
	}
	for (int i = 0; i <= 100; i++)
	{
		std::cout << a[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 100; i >= 0; --i)
	{
		for(int j = 0; j <= i; ++j)
		{
			if(a[j] > a[j+1])
			{

				MAX = a[j];
				a[j] = a[j+1];
				a[j+1] = MAX;
			}
		}
	}
	for(int i = 0; i <= 100; ++i)
	{
		std::cout << a[i] << "  ";
	}
	for(int i = 100; i >= 0; --i)
	{
		std::cout << a[i] << "  ";
	}
	std::cout <<std::endl;
	return 0;
}
