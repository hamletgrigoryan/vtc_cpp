#include <iostream>
#include <limits>
int main()
{
int n = std::numeric_limits<int>::max();
std::cout << "Kataryal tvern en" << std::endl;
for (int i = 1; i <= n; ++i){
int sum = 0;
for (int j = 1; j <= i/2; ++j){
if (i % j == 0){
sum = sum + j;
}
}
if (i == sum){
std::cout << i << std::endl;
}
}
return 0;
}
