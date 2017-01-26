#include <iostream>

int printDown(int from, int to)
{
	std::cout << to << "   ";
	return (from == to) ? to : printDown(from, to - 1);
}

int printUp(int from, int to)
{
	std::cout << from << "   ";
	return (from == to) ? from : printUp(from + 1, to);
}


int main()
{
	printDown(1, 10);
	std::cout << std::endl;

	printUp(1, 10);
	std::cout << std::endl;

	system("pause");
	return 0;
}