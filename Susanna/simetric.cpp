#include <iostream>
#include <cmath>
int main()
{
int tiv, tiv1, a, b, qanak = 0, k = 0, m;
std::cout << "Nermucel tiv@" << std::endl;
std::cin >> tiv;
tiv1 = tiv;
while (tiv1 != 0){
tiv1 = tiv1 / 10;
++qanak;
}
m = pow(10, qanak-1);
while (tiv != 0){
a = tiv / m;
b = tiv % 10;
tiv = (tiv % m)/10;
m = m / 100;
if (a != b){
k = 1;
break;
}
}
if (k == 0){
std::cout << "Tiv@ simetric e" << std::endl;
}
else{
std::cout << "Tiv@ simetric che" << std::endl;
}
return 0;
}
