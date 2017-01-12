#include<iostream>
#include<limits>
int main () 
{
    int n = std::numeric_limits<int>::max();
    std::cout << '[' << 1 << ", " << n << ']' << std::endl;
    for (int i = 2; i < 100; ++i) { 
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0) { 
                break;
            } else { 
                if  (i == j + 1) {
                    std::cout << i << ", ";
                }
            }
        }
    }
        std::cout << std::endl;
       
    return 0;
}
