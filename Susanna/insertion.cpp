#include <iostream>
#include <cstdlib>
#include <ctime>
void initarray(int* array, int n);
void printarray(int* array, int n);
int main()
{
int size;
std::cout << "Nermucel zangvaci chap@" << std::endl;
std::cin >> size;
int a[size];
initarray(a, size);
printarray(a, size);
std::cout << std::endl;
for(int i = 1; i < size; ++i){
for(int j = 0; j < i; ++j){
if (a[i] < a[j]){
int clone = a[j];
a[j] = a[i];
a[i] = clone;
}
}
}
printarray(a, size);
std::cout << std::endl;
return 0;
}
void initarray(int* array, int n){
srand(time(NULL));
for(int i = 0; i < n; ++i){
array[i] = 1 + rand() % 100;
}
}
void printarray(int* array, int n){
for(int i = 0; i < n; ++i){
std::cout << array[i] << "  ";
}
}
