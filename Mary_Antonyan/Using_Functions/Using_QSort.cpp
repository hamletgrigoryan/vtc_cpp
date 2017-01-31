#include <iostream>
#include <cstdlib>

int intCompare(const void* ptr1, const void* ptr2)
{
	return (*(int*)ptr1 - *(int*)ptr2);
}

int charCompare(const void* ptr1, const void* ptr2)
{
	return ((int)*(char*)ptr1 - (int)*(char*)ptr2);
}

int main()
{
	unsigned int intSize;
	std::cout << "Enter size of int array: ";
	std::cin >> intSize;
	int* intArr = new int(intSize);
	for (int i = 0; i < intSize; i++)
		std::cin >> intArr[i];

	unsigned int charSize;
	std::cout << "Enter size of char array: ";
	std::cin >> charSize;
	char* charArr = new char(charSize);
	for (int i = 0; i < charSize; i++)
		std::cin >> charArr[i];

	std::cout << "**********\nSorted arrays:\n";

	int(*intCompPtr)(const void*, const void*) = intCompare;
	qsort(intArr, intSize, sizeof(int), intCompPtr);
	for (int i = 0; i < intSize; i++)
		std::cout << intArr[i] << "  ";
	std::cout << std::endl;

	int(*charCompPtr)(const void*, const void*) = charCompare;
	qsort(charArr, charSize, sizeof(char), charCompPtr);
	for (int i = 0; i < charSize; i++)
		std::cout << charArr[i] << "  ";
	std::cout << std::endl;

	return 0;
}
