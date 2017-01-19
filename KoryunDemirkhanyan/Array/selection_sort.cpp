#include <iostream>
#include <cstdlib>

int main()
{
    int size;
    std::cin >> size;

    int a[size] = {};
    int tmp;
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        a[i] = 1 + rand() % size;
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < size; ++i)
    {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

    for (int i = (size-1); i >= 0; --i)
    {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
