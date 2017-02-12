#include "ArrayFunctions.h"

int main()
{
	unsigned int size;
	std::cout << "Enter size of array: ";
	std::cin >> size;

	int* arr = createArray(size);
	printArray(arr, size);

	//system("pause");
	return 0;
}