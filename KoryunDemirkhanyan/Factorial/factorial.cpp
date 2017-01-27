#include<iostream>

 int fact (int n)
{
    if (n < 0)
    {
        return 0;
    }
    else 
        if (n == 0)
    {
        return 1;
    }
        else
    {
        return n = n * fact (n-1);
    }
}
int main ()
{
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;
    for (int i = 0; i < number; ++i)
    {
        std::cout << i << "! = " << fact(i) << std::endl;
    }
   return 0;
} 
