#include <iostream>
#include <limits>
#include <cmath>

int main()
{
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;
    int sim = 0;
    int mun = num;
    while (mun != 0) 
    {
        int qanak = mun % 10;
        sim = sim * 10 + qanak;
        mun /=10;
    }
    if (num == sim)
    {
        std::cout << "True" << std::endl;
    }
        else
        {
            std::cout << "False" << std::endl;
        }
return 0;
}
