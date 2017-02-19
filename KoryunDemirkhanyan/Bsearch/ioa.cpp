#include<iostream>
#include<cstdlib>

void input_array (int *array, int size)
{
    srand (time(0));
    for(int i = 0; i < size; i++)
    {
        array[i] = 1 + rand() % 100;
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}

void output_array (int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}

