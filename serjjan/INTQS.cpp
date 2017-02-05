#include <iostream>
#include<cstdlib>
int ajox(const void * a, const void * b)
{
        return ( *(int*)a - *(int*)b );
}
int nvazox(const void * a, const void * b)
{
        if(( *(int*)a - *(int*)b) < 0)
        return 1;
        else
        if(( *(int*)a - *(int*)b) > 0)
        return -1;
        else
        return 0;
}
int main()
{
        int size;
        std::cin >> size;
        int a[size];
        for (int i = 0; i < size; ++i)
        {
                std::cin >> a[i];
        }
        qsort(a, size, sizeof(int), ajox);
        for(int i = 0; i < size; ++i)
        {
                std::cout << a[i] << "  ";
        }
        std::cout << std::endl;
        qsort (a, size, sizeof(int), nvazox);
        for(int i = 0; i < size; ++i)
        {
                std::cout << a[i] << "  ";
        }
        std::cout << std::endl;
return 0;
}
