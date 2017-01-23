#include<iostream>

int main ()
{
unsigned int num = 987654321;
unsigned char* numPtr = (unsigned char*) &num;
for(int i = 0; i < sizeof(int); ++i)
{
std::cout << (unsigned int)(*(numPtr + i)) << ' ' << *((unsigned int*)(numPtr + i)) << std::endl;
}
return 0;
}
