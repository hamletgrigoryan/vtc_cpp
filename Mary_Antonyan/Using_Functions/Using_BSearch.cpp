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
	int* intArr = new int[intSize];
	for (int i = 0; i < intSize; i++)
		std::cin >> intArr[i];

	unsigned int charSize;
	std::cout << "Enter size of char array: ";
	std::cin >> charSize;
	char* charArr = new char[charSize];
	for (int i = 0; i < charSize; i++)
		std::cin >> charArr[i];

	int intKey;
	std::cout << "Enter int key: ";
	std::cin >> intKey;

	char charKey;
	std::cout << "Enter char key: ";
	std::cin >> charKey;

	int(*intCompPtr)(const void*, const void*) = intCompare;
	int* intItem = (int*)bsearch(&intKey, intArr, intSize, sizeof(int), intCompPtr);
	if (intItem != NULL)
		std::cout << intKey << " is in int array" << std::endl;
	else
		std::cout << intKey << " is not in int array" << std::endl;

	int(*charCompPtr)(const void*, const void*) = charCompare;
	char* charItem = (char*)bsearch(&charKey, charArr, charSize, sizeof(char), charCompPtr);
	if (charItem != NULL)
		std::cout << charKey << " is in char array" << std::endl;
	else
		std::cout << charKey << " is not in int array" << std::endl;

	system("pause");
	return 0;
}