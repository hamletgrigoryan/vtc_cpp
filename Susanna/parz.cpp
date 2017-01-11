#include <iostream>
#include <limits>
int main()
{
int n = std::numeric_limits<int>::max();
std::cout << 2 << std::endl;
for (int i = 3; i <= n; ++i){
int q=0;
for (int j = 2; j <= i/2; j++){
if (i % j == 0){
q == 1;
}
break;
}
if (q == 0){
std::cout << i << std::endl;
}
}
return 0;
}


