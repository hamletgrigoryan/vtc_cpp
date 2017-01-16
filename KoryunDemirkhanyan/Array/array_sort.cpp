#include <iostream>
#include <algorithm>
#include <cstdlib>

int main()
{
    int a[100] = {};        
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        a[i] = rand() % 101;
    }
    for (int i = 0; i < 100; i++) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
    int min = a[0];
    for(int i = 0; i < 100; ++i) {
        if (a[i]<min) {
            min = a[i];
            std::cout << min << ' ';
        }
    
    }   
    std::cout << std::endl;
return 0;
}
