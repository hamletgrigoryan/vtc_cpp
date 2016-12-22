#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

int main (int argc, char*argv[])
{
std::cout<<"    data type    "<<"   byte   "<<"max value"<<"      "<<"min value"<<std::endl;

std::cout<<"bool               ="<<sizeof(bool)<<"      "<<(pow(2,sizeof(bool) * 8.0) - 1) << "            " << std::numeric_limits<bool>::min() << std::endl;

std::cout<<"char               ="<<sizeof(char)<<"      "<<(pow(2,sizeof(bool) * 8.0) - 1)  << "            " << std::numeric_limits<char>::min() << std::endl;

std::cout<<"short int          ="<<sizeof(short int)<<"      "<<(pow(2,sizeof(short int) * 8.0-1) - 1)  << "          " << std::numeric_limits<short int>::min() << std::endl;

std::cout<<"unsigned short int ="<<sizeof(unsigned short int)<<"      "<<(pow(2,sizeof(unsigned short int) * 8.0) - 1)  << "          " << std::numeric_limits<unsigned short int>::min() << std::endl;
std::cout<<"int                ="<<sizeof(int)<<"      "<<(pow(2,sizeof(int) * 8.0-1) - 1)  << "    "<< std::numeric_limits<int>::min() << std::endl;

std::cout<<"unsigned int       ="<<sizeof(unsigned int)<<"      "<<(pow(2,sizeof(unsigned int) * 8.0) - 1) << "    " << std::numeric_limits<unsigned int>::min() << std::endl;

std::cout<<"long int           ="<<sizeof(long int)<<"      "<<(pow(2,sizeof(long int) * 8.0-1) - 1)  << "    "<< std::numeric_limits<long int>::min() << std::endl;

std::cout<<"unsigned long int  ="<<sizeof(unsigned long int)<<"      "<<(pow(2,sizeof(unsigned long int) * 8.0) - 1) << "    " << std::numeric_limits<unsigned long int>::min() << std::endl;

std::cout<<"float              ="<<sizeof(float)<<"      "<<(pow(2,sizeof(float) * 8.0-1) - 1)  << "    "<< std::numeric_limits<float>::min() << std::endl;

std::cout<<"double             ="<<sizeof(double)<<"      "<<(pow(2,sizeof(double) * 8.0-1) - 1)  << "    "<< std::numeric_limits<double>::min() << std::endl;
return 0;
}

