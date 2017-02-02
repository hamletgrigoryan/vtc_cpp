#include<iostream>
#include<cstdio>
#include<cstdlib>

int compare (const void *a, const void *b)
{
    return (*(char*)a, *(char*)b);
}

int main()
{
    char  array[5] = {'e','d','c','b','a'};
    for (int i = 0; i < 5; ++i)
    {
        printf ("%c ", array[i]);
    }
    printf ("\n");

    qsort (array, 5, sizeof(char), compare);
    for (int i = 0; i < 5; ++i)
    {
        printf("%c ", array[i]);
    }
    printf ("\n");

    return 0;
}

