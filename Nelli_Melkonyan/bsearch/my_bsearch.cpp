#include <iostream>
#include <cstdlib>
#include <ctime>

void init_int_array( int*array, int size)
{
	srand(time(0));
	for(int i = 0; i < size; ++i)
	{
		array[ i ] = rand() % 100;
	}
}


void init_char_array( char*array, int size)
{
	srand(time(0));
	for(int i = 0; i < size; ++i)
	{
		array[ i ] = 'a' + rand() % 24;
	}
}


void output_int_array(int*array, int size)
{
	for(int i = 0; i < size; ++i)
	{
		std::cout << array[ i ] << " ";
	}
}

void output_char_array(char*array, int size)
{
	for(int i = 0; i < size; ++i)
	{
		std::cout << array[ i ] << " ";
	}
}

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
	int low,mid;
	low = 0;
	int high = array_size - 1;
	while (low <= high) 
	{
	
		mid = (low + high) / 2;
	
		
		if(compar(key,array+size_of_element*mid) == 0)
		{
			return (array+size_of_element*mid);
		}else
		
		if(compar(key,array+size_of_element*mid) < 0)
		{
			high = mid - 1;
		}else
		if(compar(key,array+size_of_element*mid) > 0)
		{
			low = mid + 1;
		}
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
	std::cout << std::endl;
	
/*	std::cout << "enter size of char_array ";
	std::cin >> size;
	char* char_array = new char(size);
	
	init_char_array(char_array, size);
	qsort(char_array, size, sizeof(char), compare_char);
	output_char_array(char_array,size);
	
	char char_key;
	std::cout << std::endl << "search element in char_array ";
	std::cin >> char_key;
	char* char_search = (char*) bsearch (&char_key, char_array, size, sizeof (int), compare_char);
 	if (char_search!=NULL)
 	{
 		std::cout << char_key << "  is in array";
	}
    
  	else
  	{
  		std::cout << char_key << "  is not in array";
	}
*/	
	std::cout << std::endl;
	
	return 0;
}
