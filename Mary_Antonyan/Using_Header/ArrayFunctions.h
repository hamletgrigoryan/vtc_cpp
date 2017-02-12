#pragma once
#include <iostream>
#include <ctime>

int* createArray(const unsigned int size)
{
	int* arr = new int[size];
	srand(time(0));
	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 100;
	}

	return arr;
}

void printArray(const int* arr, const unsigned int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << "  ";
	}
	std::cout << std::endl;
}
