#include <iostream>
#include "my_assert.h"
#include <ctime>

int intCompare(const void* ptr1, const void* ptr2)
{
	return *(int*)ptr1 - *(int*)ptr2;
}

int* my_bsearch(const void* key, const void* base, size_t num, size_t size, int(*compar)(const void*, const void*))
{
	int start = 0;
	int end = num - 1;
	int mid;

	while (start <= end)
	{
		mid = (start + end) / 2;
		if (compar(key, (char*)base + mid*size) == 0)
		{
			return (int*)((char*)base + mid*size);
		}
		else if (compar(key, (char*)base + mid*size) > 0)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		//std::cout << "Start: " << start << " end: " << end << " mid: " << mid << " elem: " << *(int*)((char*)base + mid*size) << "\n";
	}
	return NULL;
}

int main()
{
	srand(time(0));
	int n = 20;
	int* base = new int[n];

	for (int i = 0; i < n; i++)
	{
		base[i] = rand() % 10;
		std::cout << base[i] << "  ";
	}
	std::cout << std::endl;

	//base[5] = 8;
	int intKey = 8;

	qsort(base, n, sizeof(int), intCompare);
	for (int i = 0; i < n; i++)
	{
		std::cout << base[i] << "  ";
	}
	std::cout << std::endl;

	my_assert(my_bsearch(&intKey, base, n, sizeof(int), intCompare) == bsearch(&intKey, base, n, sizeof(int), intCompare));
	int* res = my_bsearch(&intKey, base, n, sizeof(int), intCompare);
	if (res == NULL)
	{
		std::cout << intKey << " is not in int array" << std::endl;
	}
	else
	{
		std::cout << *res << " is in int array" << std::endl;
	}

	delete base;
	system("pause");
	return 0;
}

