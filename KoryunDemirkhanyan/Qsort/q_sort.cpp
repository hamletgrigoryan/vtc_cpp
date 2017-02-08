#include<iostream>
#include<cstdio>
#include<cstdlib>

int compare (const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int n;
    std::cin >> n;
    int array[n] = {};
    srand(time(0));
    for (int i = 0; i < n; ++i)
    {
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }
    printf("\n");

    qsort (array, n, sizeof(int), compare);
    for (int i = 0; i< n; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
