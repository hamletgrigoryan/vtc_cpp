#include<iostream>
int main ()
{
    for(int x=0;x<4;++x)
    {
        for(int x=0;x<8;++x)
        {
            std::cout<<" ___";
        }
        std::cout<<std::endl;
        for(int x=0;x<4;++x)
        { 
             std::cout<<"|XXX|   ";
        }
         std::cout<<"|"<<std::endl;
        for(int x=0;x<4;++x)
        { 
            std::cout<<"|XXX|   ";
        }
        std::cout<<"|"<<std::endl;
        for(int x=0;x<4;++x)
        { 
            std::cout<<"|XXX|   ";
        }
        std::cout<<"|"<<std::endl;
        for(int x=0;x<8;++x)
        {
            std::cout<<" ___";
        }
        std::cout<<std::endl;
        for(int x=0;x<4;++x)
        { 
            std::cout<<"|   |XXX";
        }
        std::cout<<"|"<<std::endl;
        for(int x=0;x<4;++x)
        { 
            std::cout<<"|   |XXX";
        }
        std::cout<<"|"<<std::endl;
        for(int x=0;x<4;++x)
        { 
            std::cout<<"|   |XXX";
        }
        std::cout<<"|"<<std::endl;
    }    
    for(int x=0;x<8;++x)
        {
            std::cout<<" ___";
        }
    std::cout<<std::endl;
    
return 0;
}
