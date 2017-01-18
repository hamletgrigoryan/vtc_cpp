#include <iostream>
#include <limits>
#include <cmath>

int main()
{
    int IntMax = std::numeric_limits<int>::max();
    std::cout << '[' << "1; " << IntMax << ']' << std::endl;
    for (int i = 1; i < IntMax; ++i)
    {
        int sum = 0;
        for (int j = 1; j < i; ++j)
        {
            if (i % j == 0)
            {
                sum += j;

            }
        }
        if (i == sum)
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
