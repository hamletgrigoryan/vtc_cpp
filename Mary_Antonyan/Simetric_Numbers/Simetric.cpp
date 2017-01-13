#include <iostream>

//bool isSimetric(int num)
//{
//	int simetric = 0;
//	int clone = num;
//
//	while (clone > 0)
//	{
//		int digit = clone % 10;
//		simetric = simetric * 10 + digit;
//		clone /= 10;
//	}
//
//	return (num == simetric) ? true : false;
//}

int main()
{
	int num;
	std::cout << "Enter number: ";
	std::cin >> num;

	/*if (isSimetric(num))
		std::cout << "Is simetric" << std::endl;
	else
		std::cout << "Is asimetric" << std::endl;*/

	int simetric = 0;
	int clone = num;

	while (clone > 0)
	{
		int digit = clone % 10;
		simetric = simetric * 10 + digit;
		clone /= 10;
	}

	if (num == simetric)
		std::cout << "Is simetric" << std::endl;
	else
		std::cout << "Is asimetric" << std::endl;

	system("pause");
}