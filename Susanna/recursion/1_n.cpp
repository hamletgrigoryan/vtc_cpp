#include <iostream>
int Recursion(int n)
{
    if(n != 1)
    {
         std::cout << Recursion(n - 1) << " ";
    }
    return n;
}
int main()
{
    int num;
    std::cin >> num;
    std::cout << Recursion(num);
    return 0;
}
