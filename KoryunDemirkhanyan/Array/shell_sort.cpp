#include <iostream>
#include <cstdlib>
int main ()
{
    int size;
    std::cin >> size;
    srand(time(0));

    int array[size] = {};
    for(int i = 0; i < size; ++i)
    {
        array[i] = 1 + rand() % size;
        std::cout << array [i] << ' ';
    }
    std::cout << std::endl;

    int step = size / 2;
    while (step > 0)
    {
        for (int i = 0; i < size-step; ++i)
        {
            int j = i;
            while (j >= 0 && array[j] > array[j+step])
            {
                int tmp = array[j];
                array[j] = array[j + step];
                array[j + step] = tmp;
                --j;
            }
        }
        step = step / 2;
        }

    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
