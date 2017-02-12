#include <iostream>
#include <cstdlib>
#include <ctime>
#include "array_functions.hpp"

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
