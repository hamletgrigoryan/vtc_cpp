#include <iostream>

//bool isPerfect(int n)
//{
//	long sum = 0;
//	for (int i = 1; i < n; i++)
//		if (n % i == 0)
//			sum += i;
//	return (sum == n) ? true : false;
//}

int main()
{
	int n = 100000;//INT_MAX;

	//for (int i = 1; i <= n; i++)
	//	if (isPerfect(i))
	//		std::cout << i << std::endl;

	for (int i = 1; i <= n; i++)
	{
		long sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}

		if (i == sum)
			std::cout << i <<std::endl;
	}

	system("pause");
}