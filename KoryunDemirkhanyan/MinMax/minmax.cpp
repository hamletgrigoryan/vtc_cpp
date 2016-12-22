#include <iostream>
#include <limits>

	int main ()
	{
std::cout<<"Type\t\t"<<"byte\t"<<"max\t"<<"min"<<std::endl;

std::cout<<"bool\t\t="<<sizeof(bool)<<"\t"<<std::numeric_limits<bool>::max()<<"\t"<<std::numeric_limits<bool>::min() << std::endl;

std::cout<<"char\t\t="<<sizeof(char)<<"\t"<<std::numeric_limits<char>::max()<<"\t"<<std::numeric_limits<char>::min() << std::endl;		

std::cout<<"unsigned char\t="<<sizeof(unsigned char)<<"\t"<<std::numeric_limits<unsigned char>::max()<<"\t"<<std::numeric_limits<unsigned char>::min() << std::endl;

std::cout<<"signed char\t="<<sizeof(signed char)<<"\t"<<std::numeric_limits<signed char>::max()<<"\t"<<std::numeric_limits<signed char>::min() << std::endl;

std::cout<<"int\t\t="<<sizeof(int)<<"\t"<<std::numeric_limits<int>::max()<<"\t"<<std::numeric_limits<int>::min() << std::endl;

std::cout<<"unsigned int\t="<<sizeof(unsigned int)<<"\t"<<std::numeric_limits<unsigned int>::max()<<"\t"<<std::numeric_limits<unsigned int>::min() << std::endl;

std::cout<<"signed int\t="<<sizeof(signed int)<<"\t"<<std::numeric_limits<signed int>::max()<<"\t"<<std::numeric_limits<signed int>::min() << std::endl;

std::cout<<"short int\t="<<sizeof(short int)<<"\t"<<std::numeric_limits<short int>::max()<<"\t"<<std::numeric_limits<short int>::min() << std::endl;

std::cout<<"unsig short int\t="<<sizeof(unsigned short int)<<"\t"<<std::numeric_limits<unsigned short int>::max()<<"\t"<<std::numeric_limits<unsigned short int>::min() << std::endl;

std::cout<<"sig short int\t="<<sizeof(signed short int)<<"\t"<<std::numeric_limits<signed short int>::max()<<"\t"<<std::numeric_limits<signed short int>::min() << std::endl;

std::cout<<"long int\t="<<sizeof(long int)<<"\t"<<std::numeric_limits<long int>::max()<<"\t"<<std::numeric_limits<long int>::min() << std::endl;

std::cout<<"sig long int\t="<<sizeof(signed long int)<<"\t"<<std::numeric_limits<signed long int>::max()<<"\t"<<std::numeric_limits<signed long int>::min() << std::endl;

std::cout<<"unsig long int\t="<<sizeof(unsigned long int)<<"\t"<<std::numeric_limits<unsigned long int>::max()<<"\t"<<std::numeric_limits<unsigned long int>::min() << std::endl;

std::cout<<"float\t\t="<<sizeof(float)<<"\t"<<std::numeric_limits<float>::max()<<"\t"<<std::numeric_limits<float>::min() << std::endl;

std::cout<<"double\t\t="<<sizeof(double)<<"\t"<<std::numeric_limits<double>::max()<<"\t"<<std::numeric_limits<double>::min() << std::endl;

std::cout<<"long double\t="<<sizeof(long double)<<"\t"<<std::numeric_limits<long double>::max()<<"\t"<<std::numeric_limits<long double>::min() << std::endl;

std::cout<<"wchar_t\t\t="<<sizeof(wchar_t)<<"\t"<<std::numeric_limits<wchar_t>::max()<<"\t"<<std::numeric_limits<wchar_t>::min() << std::endl;
	return 0;
	}

