#include <iostream>

int main()
{
 std::string s;
 std::cout<<"Press any key - ";
 std::cin>>s;
    for(int a=1; a<=10; ++a)
    {   
        std::cout<<"_";
    }
    std::cout<<std::endl;
            for(int a=1; a<=10; ++a)
            {
                std::cout<<"|";
                    for (int n=0; n<a; ++n)
                        std::cout<<"x";
                            for(int n=0; n<10-a; ++n)
                                std::cout<<"-";
                                    for(int n=0; n<1; ++n)
                                        std::cout<<"|";
            std::cout<<std::endl;
            }
    for(int n=0; n<10; ++n)
        std::cout<<"_";
        std::cout<<std::endl;
return 0;
}
