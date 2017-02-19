#include<iostream>
#include<cstdlib>

void input_array (int *array, int size)
{
    srand (time(0));
    for(int i = 0; i < size; i++)
    {
        array[i] = 1 + rand() % 100;
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}

void output_array (int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}

const int* my_bsearch (const int* key, const int* array, size_t size)
{
    if ( array == 0 )
    {
        return NULL;
    }
    if ( array == 1 )
    {
        return (array == key) ? array : NULL;
    }
    int mid = size / 2;
        return array < key my_bsearch ?
               my_bsearch (key, array + mid + 1, size) :
               my_bsearch (key, array, mid);
}

int compare (const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main ()
{
    int n,key;
    std::cout << "Enter size of array: ";
    std::cin >> n;
    int *d_array = new int[n];

    input_array (d_array, n);
    
    qsort (d_array, n, sizeof(int), compare);
    output_array (d_array, n);

    std::cout << "Enter key: ";
    std::cin >> key;
    int* item = my_bsearch (key, d_array, n);
    if (item != NULL)
    {
        std::cout << key << "-is in array"; 
    }
    else
    {
        std::cout << key << "-is not in array";
    }
    std::cout << std::endl;
  
    delete [] d_array;

    return 0;
}
