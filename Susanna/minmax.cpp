#include <iostream>
#include <limits>
int main()
{
    int imin = std::numeric_limits<int>::min(); 
    int imax = std::numeric_limits<int>::max();
    unsigned int uimin=std::numeric_limits<unsigned int>::min();
    unsigned int uimax=std::numeric_limits<unsigned int>::max();
    short shmin=std::numeric_limits<short>::min();
    short shmax=std::numeric_limits<short>::max();
    unsigned short ushmin=std::numeric_limits<unsigned short>::min();
    unsigned short ushmax=std::numeric_limits<unsigned short>::max();
    long lmin=std::numeric_limits<long>::min();
    long lmax=std::numeric_limits<long>::max();
    unsigned long ulmin=std::numeric_limits<unsigned long>::min();
    unsigned long ulmax=std::numeric_limits<unsigned long>::max();
    float flmin=std::numeric_limits<float>::min();
    float flmax=std::numeric_limits<float>::max();
    double dmin=std::numeric_limits<double>::min();
    double dmax=std::numeric_limits<double>::max();
    long double ldmin=std::numeric_limits<long double>::min();
    long double ldmax=std::numeric_limits<long double>::max();
    char chmin=std::numeric_limits<char>::min();
    char chmax=std::numeric_limits<char>::max();
    unsigned char uchmin=std::numeric_limits<unsigned char>::min();
    unsigned char uchmax=std::numeric_limits<unsigned char>::max();
    std::cout<<"min int"<<imin<<"\n";
    std::cout<<"max int"<<imax<<"\n";
     std::cout<<"min unsigned int"<<uimin<<"\n";
      std::cout<<"max unsigned int"<<uimax<<"\n";
       std::cout<<"min short"<<shmin<<"\n";
        std::cout<<"max short"<<shmax<<"\n";
         std::cout<<"min unsigned short"<<ushmin<<"\n";
          std::cout<<"max unsigned short"<<ushmax<<"\n";
           std::cout<<"min long"<<lmin<<"\n";
            std::cout<<"max long"<<lmax<<"\n";
             std::cout<<"min unsigned long"<<ulmin<<"\n";
              std::cout<<"max unsigned long"<<ulmax<<"\n";
               std::cout<<"min float"<<flmin<<"\n";
                std::cout<<"max float"<<flmax<<"\n";
                 std::cout<<"min double"<<dmin<<"\n";
                  std::cout<<"max double"<<dmax<<"\n";
                   std::cout<<"min long double"<<ldmin<<"\n";
                    std::cout<<"max long double"<<ldmax<<"\n";
                     std::cout<<"min char"<<chmin<<"\n";
                      std::cout<<"max char"<<chmax<<"\n";
                       std::cout<<"min unsigned char"<<uchmin<<"\n";
                        std::cout<<"max unsigned char"<<uchmax<<"\n";
    return 0;
}
