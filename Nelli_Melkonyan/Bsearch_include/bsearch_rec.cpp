#include <iostream>
#include <cstdlib>
#include <ctime>
#include "array_functions.cpp"

int compare_int(const void* ptr1, const void* ptr2)
{
	return (*(int*)ptr1 - *(int*)ptr2);
}

int compare_char(const void* ptr1, const void* ptr2)
{
	return ((int)*(char*)ptr1 - (int)*(char*)ptr2);
}

void* my_bsearch ( void*key,  void* array, size_t array_size , size_t size_of_element, int compar (const void* pkey, const void* pelem))
{
	if( array_size == 0 )
	{
		return NULL;
	}
	
	int mid = array_size / 2;
	if( array_size == 1)
	{
		if(compar(key,(char*)array) == 0)
    	{
			return (char*)array;
		}else
		{
			return NULL;
		}
	}
		
	if(compar(key,(char*)array+size_of_element*mid) == 0)
	{
		return ((char*)array+size_of_element*mid);
	}else
		
	if(compar(key,(char*)array+size_of_element*mid) < 0)
	{
		return my_bsearch (key, array, mid,size_of_element , compar);
	}else
	if(compar(key,(char*)array+size_of_element*mid) > 0)
	{
		return my_bsearch (key, (char*)array+size_of_element*mid , array_size - mid,size_of_element , compar);
	}
	
	return NULL;
}


int main()
{
	int size;
	
	
	std::cout << "enter size of int_array ";
	std::cin >> size;
	int* int_array = new int(size);

	init_int_array(int_array, size);
	qsort(int_array, size, sizeof(int), compare_int);
	output_int_array(int_array,size);
	
	int int_key;
	std::cout << std::endl << "search element in int_array ";
	std::cin >> int_key;
	int* int_search = (int*) my_bsearch (&int_key, int_array, size, sizeof (int), compare_int);
 	if (int_search!=NULL)
 	{
 		std::cout << int_key << "  is in array";
	}
    
  	else
  	{
  		std::cout << int_key << "  is not in array";
	}
    	
	std::cout << std::endl;
	
	return 0;
}
