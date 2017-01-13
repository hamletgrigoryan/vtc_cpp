#include <iostream>
#include <ctime>

int* generateArray(int n)
{
	int* arr = new int[n];
	srand(time(0));

	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;

	return arr;
}

void printArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << "  ";
	std::cout << std::endl;
}

int main()
{
	int n = 20;
	int* arr = generateArray(n);
	printArray(arr, n);

	for (int i = 0; i < n - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[minIndex])
				minIndex = j;

		int tmp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = tmp;
	}

	printArray(arr, n);

	system("pause");
	return 0;
}