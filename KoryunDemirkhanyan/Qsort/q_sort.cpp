#include<iostream>
#include<cstdio>
#include<cstdlib>

int compare (const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int array[5] = {8,3,5,1,4};
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    qsort (array, 5, sizeof(int), compare);
    for (int i = 0; i< 5; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
