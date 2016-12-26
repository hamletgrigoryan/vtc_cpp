#include"my_assert.h"

int  main()
{
	{
	int max=(1<<8*sizeof(char)-1)-1;
	my_assert(max==CHAR_MAX);
	my_assert(-max-1==CHAR_MIN);
	std::cout << "Max of char: " << max << std::endl;
	std::cout << "Min of char: " << -max-1 << std::endl << std::endl;
	}
        {
        int max=(1<<8*sizeof(unsigned char))-1;
        my_assert(max==UCHAR_MAX);
        std::cout << "Max of unsigned char: " << max << std::endl;
        std::cout << "Min of unsigned char: " << 0 << std::endl << std::endl;
        }
        {
        int max=(1<<8*sizeof(signed char)-1)-1;
        my_assert(max==SCHAR_MAX);
        my_assert(-max-1==SCHAR_MIN);
        std::cout << "Max of signed char: " << max << std::endl;
        std::cout << "Min of signed char: " << -max-1 << std::endl << std::endl;
        }
        {
        int max=(1<<8*sizeof(int)-1)-1;
        my_assert(max==INT_MAX);
        my_assert(-max-1==INT_MIN);
        std::cout << "Max of int: " << max << std::endl;
        std::cout << "Min of int: " << -max-1 << std::endl << std::endl;
        }
       // {
       // unsigned int max = (1 << 8 * sizeof(unsigned int))-1;
       // my_assert(max==UINT_MAX);
       // std::cout << "Max of unsigned int: " << max << std::endl;
       // std::cout << "Min of unsigned int: " << 0 << std::endl << std::endl;
       // }
	{
        int max=(1<<8*sizeof(signed int)-1)-1;
        my_assert(max==SINT_MAX);
        my_assert(-max-1==SINT_MIN);
        std::cout << "Max of signed int: " << max << std::endl;
        std::cout << "Min of signed int: " << -max-1 << std::endl << std::endl;
        }
	{
        int max=(1<<8*sizeof(short int)-1)-1;
        my_assert(max==SHRT_MAX);
        my_assert(-max-1==SHRT_MIN);
        std::cout << "Max of short int: " << max << std::endl;
        std::cout << "Min of short int: " << -max-1 << std::endl << std::endl;
        }
	{
        int max=(1<<8*sizeof(unsigned short int))-1;
        my_assert(max==USHRT_MAX);
        std::cout << "Max of unsigned short int: " << max << std::endl;
        std::cout << "Min of unsigned short int: " << 0 << std::endl << std::endl;
        }
	{
        int max=(1<<8*sizeof(signed short int)-1)-1;
        my_assert(max==SSHRT_MAX);
        my_assert(-max-1==SSHRT_MIN);
        std::cout << "Max of signed short int: " << max << std::endl;
        std::cout << "Min of signed short int: " << -max-1 << std::endl << std::endl;
	}
	return 0;

}
