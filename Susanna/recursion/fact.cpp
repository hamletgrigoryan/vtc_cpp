#include <iostream>
long Factorial(int num){
if(num != 0)
return num * Factorial(num-1);
else
if(num == 0)
return 1;
}
int main(){
int n;
std::cout << "Nermucel tiv@" << std::endl;
std::cin >> n;
std::cout << Factorial(n) << std::endl;
return 0;
}
