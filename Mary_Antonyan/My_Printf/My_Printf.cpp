#include <iostream>

void my_printf(char* regexp, ...)
{
	int num = 0;
	int i = 0;
	while (regexp[i] != '\0')
	{
		if (regexp[i] == '%')
		{
			num++;
		}
		++i;
	}

	//void* ptr = &regexp + 1;
	i = 0;
	int j = 1;
	while(regexp[i] != '\0' && j <= num)
	{
		if (regexp[i] == '%')
		{
			switch (regexp[++i])
			{
			case 'd': { std::cout << *(int*)(&regexp + i);   ++i; ++j; break; };
			case 'c': { std::cout << *(char*)(&regexp + i);  ++i; ++j; break;};
			case 'f': { std::cout << *(float*)(&regexp + i); ++i; ++j; break;};
			}
		}
		else
		{
			std::cout << regexp[i++];
		}
	}
}

int main()
{
	int a = 7;
	float b = 5;
	char c = 'k';

	my_printf("int: %d  float: %f  char: %c", a, b, c);
	std::cout << std::endl;
	system("pause");
	return 0;
}