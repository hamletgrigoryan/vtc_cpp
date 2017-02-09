#include <stdarg.h>
#include <iostream>
#include <string>

void print_f(const char *format, ...)
{
	va_list ap;
	
	va_start(ap, format);

	const char* f =  format;
	int i = 0;
	while(f[i] != '\0')
	{
		if(f[i]=='%' && f[i+1]=='d')
		{
		
				int x = va_arg (ap,int);
				std::cout << x ;
				i += 2;
		}else
		if(f[i]=='%' && f[i+1]=='s')
		{
			char *p = va_arg (ap, char *);
			std::cout <<  p ;
			i += 2;
		}else
		if(f[i] == '\n')
		{
			std::cout << std::endl;
			++i;
		}else
		{
			std::cout << f[i];
			++i;
		}
	}
	va_end (ap);
}

int main(void)
{
	print_f("Number are %d and %d\n string %s",55,22,"some text ");
	return 0;
}
