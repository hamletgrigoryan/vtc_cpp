#include<my_assert.h>

int  main()
{
	{
	int max = (1<<8*sizeof(char)-1)-1;
	my_assert(max==CHAR_MAX);
	my_assert(-max-1 == CHAR_MIN);
	std::cout << "Max of char: " << max << std::endl;
	std::cout << "Min of char: " << -max-1 << std::endl << std::endl;
	}
}
