#include <iostream>
#include "Functions.h"
#include <cstdlib>
int main()
{
    int size;
    std::cin >> size;
    int* array = new int[size];
    initarray(array, size);
    printarray(array, size);
    qsort(array, size, sizeof(int), compare_up);
    int key;
    std::cout << "Nermuceq tiv" << std::endl;
    std::cin >> key;
    int* p = (int*)bsearch(&key, array, size, sizeof(int), bscompare);
    if(p != 0)
    {
       std::cout << key << "Tiv@ gtnvum e zangvacum" << std::endl;
    }
    else
    std::cout << "Tiv@ chi gtnvum zangvacum" << std::endl;
    return 0;
}
