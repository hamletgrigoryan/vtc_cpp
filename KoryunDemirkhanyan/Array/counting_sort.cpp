#include <iostream>
#include <cstdlib>

const int size = 20;
const int array_null = 10;

void print(int* input)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << input[i] << ' ';
    }
}

void count_sort(int*  input)
{
    int count_array[array_null] = { 0 };
    for (int i = 0; i < size; ++i)
    {
        count_array[input[i]]++;
    }
    int index = 0;
    for (int j =0; j < array_null; ++j)
    {
        while (count_array[j]--)
        {
            input[index++] = j;
        }
    }
}

int main ()
{
    int input[size] = { 2, 4, 6, 4, 7, 1, 4, 9, 5, 3, 7, 2, 2, 6, 9, 3, 7, 3, 4, 4 };
    std::cout << "Input: ";
    print(input);
    count_sort(input);
    std::cout << std::endl;
    std::cout << "Output: ";
    print(input);
    std::cout << std::endl;
    return 0;
}
