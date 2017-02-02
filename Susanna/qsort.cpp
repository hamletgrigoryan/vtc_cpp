#include <iostream>
#include <cstdlib>
int compare_up(const void * x1, const void * x2)  
{
	return ( *(int*)x1 - *(int*)x2 );          
}
int compare_down(const void * x1, const void * x2)
{
	if(( *(int*)x1 - *(int*)x2) < 0)
	return 1;
	else
	if(( *(int*)x1 - *(int*)x2) > 0)
	return -1;
	else 
	return 0;
}
int compare_char(const void * x1, const void * x2)
{
return ( *(char*)x1 - *(char*)x2 );
}
int main()
{
	int size;
	std::cin >> size;
	int array[size];
	char a[size];
	for(int i = 0; i < size; ++i)
	{
		std::cin >> array[i];
	}
	 for(int i = 0; i < size; ++i)
        {
                std::cin >> a[i];
        }
	qsort(array, size, sizeof(int), compare_up);
	for(int i = 0; i < size; ++i)
	{ 
        	std::cout << array[i] << "  ";
	}  
	std::cout << std::endl;
	qsort(array, size, sizeof(int), compare_down);
	for(int i = 0; i < size; ++i)
        {
                std::cout << array[i] << "  ";
        }
	std::cout << std::endl;
	qsort(a, size, sizeof(char), compare_char);
	for(int i = 0; i < size; ++i)
        {
                std::cout << a[i] << "  ";
        }

	return 0;
}

     
