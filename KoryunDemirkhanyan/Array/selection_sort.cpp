#include <iostream>
#include <cstdlib>

int main()
{
    int a[10] = {};
    int tmp;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 11;
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
    for (int i = 0; i < 10-1; ++i)
    {
        for (int j = i+1; j < 10; ++j)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << a[i] << ' ';
    }
    std::cout <<std::endl;

    return 0;
}
