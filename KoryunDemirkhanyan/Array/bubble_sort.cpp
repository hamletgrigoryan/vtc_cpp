#include <iostream>
#include <cstdlib>

int main()
{
    int a[100] = {};
    int tmp;    
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        a[i] = rand() % 101;
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
    for (int i = 0; i < 100; ++i) 
    {
        for(int j = i+1; j < 100; ++j) {
            if (a[i] > a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 100; ++i) 
    {
        std::cout << a[i] << ' ';
    }            
    std::cout << std::endl;
    return 0;
}
