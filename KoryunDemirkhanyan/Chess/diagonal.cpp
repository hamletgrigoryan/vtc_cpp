#include <iostream>

int main()
{  
    std::string P;
    std::cout<<"Press any key - ";
    std::cin>>P;
    for (int x=1; x<=10; ++x)
    {
    std::cout<<"_";
    }
    std::cout<<std::endl;
    std::cout<<"|";
        for (int x=1; x<=10; ++x) 
        {
            if (x==1) std::cout<<"*";
            else
                if (x==10) std::cout<<"|";
                else
                    std::cout<<" ";
        }
        std::cout<<std::endl;
        std::cout<<"|";
        for (int x=1; x<=10; ++x) 
        {
            if (x==1) std::cout<<"**";
            else
                if (x==9) std::cout<<"|";
                else
                    std::cout<<" ";
        }
        std::cout<<std::endl;
        std::cout<<"|";
        for (int x=1; x<=10; ++x) 
        {
            if (x==1) std::cout<<"***";
            else
                if (x==8) std::cout<<"|";
                else
                    std::cout<<" ";
        }
        std::cout<<std::endl;
        std::cout<<"|";
        for (int x=1; x<=10; ++x) 
        {
            if (x==1) std::cout<<"****";
            else
                if (x==7) std::cout<<"|";
                else
                    std::cout<<" ";
        }
        std::cout<<std::endl;
        std::cout<<"|";
        for (int x=1; x<=10; ++x) 
        {
            if (x==1) std::cout<<"*****";
            else
                if (x==6) std::cout<<"|";
                else
                    std::cout<<" ";
        }
        std::cout<<std::endl;
        std::cout<<"|";
        for (int x=1; x<=10; ++x) 
        {
            if (x==1) std::cout<<"******";
            else
                if (x==5) std::cout<<"|";
                else
                    std::cout<<" ";
        }
        std::cout<<std::endl;
        std::cout<<"|";
        for (int x=1; x<=10; ++x) 
        {
            if (x==1) std::cout<<"*******";
            else
                if (x==4) std::cout<<"|";
                else
                    std::cout<<" ";
        }
        std::cout<<std::endl;
        std::cout<<"|";
        for (int x=1; x<=10; ++x) 
        {
            if (x==1) std::cout<<"********";
            else
                if (x==3) std::cout<<"|";
                else
                    std::cout<<" ";
        }
        std::cout<<std::endl;
        std::cout<<"|";
        for (int x=1; x<=10; ++x) 
        {
            if (x==1) std::cout<<"*********";
            else
                if (x==2) std::cout<<"|";
                else
                    std::cout<<" ";
        }
        std::cout<<std::endl;
    for (int x=1; x<=10; ++x)
    {
    std::cout<<"_";
    }    
    std::cout<<std::endl;    
        
return 0;
}
