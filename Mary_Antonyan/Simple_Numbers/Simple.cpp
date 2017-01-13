#include <iostream>

//bool isSimple(int n)
//{
//	for (int i = 2; i <= n / 2; i++)
//	{
//		if (n % i == 0)
//			return false;
//	}
//
//	return true;
//}

int main()
{
	int n = 100;//INT_MAX;

	/*for (int i = 2; i <= n; i++)
	{
		if (isSimple(i))
			std::cout << i << std::endl;
	}*/

	for (int i = 2; i <= n; i++)
	{
		bool isSimple = true;
		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				isSimple = false;
				break;
			}
		}

		if (isSimple)
			std::cout << i << std::endl;
	}

	system("pause");
	return 0;
}
