#include <iostream>
#include <ctime>

int* generateArray(int size)
{
	int* arr = new int[size];
	srand(time(0));

	for (int i = 0; i < size; i++)
		arr[i] = rand() % 100;

	return arr;
}

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << "  ";
	std::cout << std::endl;
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}

void mergeHelper(int* arr, int left, int right, int* temp)
{
	if (right == left + 1)
		return;
	else
	{
		int i = 0;
		int length = right - left;
		int midpoint = length / 2;
		//leftPos and rightPos are the positions in the left and right subarrays
		int leftPos = left, rightPos = left + midpoint;

		//sort each subarray 
		mergeHelper(arr, left, left + midpoint, temp);
		mergeHelper(arr, left + midpoint, right, temp);

		//merge the arrays together using scratch for temporary storage
		for (i = 0; i < length; i++)
		{
			if (leftPos < left + midpoint &&
				(rightPos == right || max(arr[leftPos], arr[rightPos]) == arr[leftPos]))
			{
				temp[i] = arr[leftPos];
				leftPos++;
			}
			else
			{
				temp[i] = arr[rightPos];
				rightPos++;
			}
		}

		//Copy the sorted subarray back to the input array
		for (i = left; i < right; i++)
			arr[i] = temp[i - left];
		//temp[i - left] pah@ chhaskaca
	}
}

int mergeSort(int* arr, int size)
{
	int* temp = new int(size);
	if (temp != NULL)
	{
		mergeHelper(arr, 0, size, temp);
		delete temp;
		return 1;
	}
	else return 0;
}

int main()
{
	int n = 20;
	int* arr = generateArray(n);
	printArray(arr, n);

	if (mergeSort(arr, n))
		printArray(arr, n);
	else
		std::cout << "Unsuccessful" << std::endl;

	return 0;
}