#include<iostream>
#include<limits>
#include<cmath>

int main () 
{
    int IntMax = std::numeric_limits<int>::max();
    std::cout << '[' << 2 << ", " << IntMax << ']' << std::endl;
    bool prime;
    for (int i = 2; i <= IntMax; ++i)
    {
        prime = true;
        for (int j = 2; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            { 
                prime = false;
            }  
        }   
        if  (prime) 
        {
             std::cout << i << ", ";
         }
     }
    std::cout << std::endl;
       
    return 0;
}
