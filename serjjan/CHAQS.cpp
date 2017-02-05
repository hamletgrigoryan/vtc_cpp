#include<iostream>
#include<cstdlib>
int Char(const void * a, const void * b)
{
return ( *(char*)a - *(char*)b );
}
int main()
{
        int size;
        std::cin >> size;
        char a[size];
         for(int i = 0; i < size; ++i)
        {
                std::cin >> a[i];
        }
        std::cout << std::endl;
        qsort(a, size, sizeof(char), Char);
        for(int i = 0; i < size; ++i)
        {
                std::cout << a[i] << "  ";
        }

        return 0;
}
          
