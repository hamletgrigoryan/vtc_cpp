#include "Functions.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
void initarray(int* array, int n)
{
   srand(time(NULL));
   for(int i = 0; i < n; ++i)
   {
     array[i] = 1 + rand() % 100;
   }  
}
void printarray(int* array, int n) 
{
   for(int i = 0; i < n; ++i)
   {
     std::cout << array[i] << "  ";
   } 
}
int compare_up(const void * x1, const void * x2)  
{
   return ( *(int*)x1 - *(int*)x2 );          
}
int bscompare(const void* a, const void* b)
{
   return ( *(int*)a - *(int*)b );
}  
