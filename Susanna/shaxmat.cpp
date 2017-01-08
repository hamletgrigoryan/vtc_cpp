#include<iostream>
int main()
{
for(int i=0; i<8; ++i){
if(i%2==0){
	for(int j=0; j<4; ++j)
         std::cout<<'*'<<'*'<<' '<<' ';
std::cout<<std::endl;
          for(int j=0; j<4; ++j)
           std::cout<<'*'<<'*'<<' '<<' ';
std::cout<<std::endl;
	}
else{
for(int j=0; j<4; ++j)
 std::cout<<' '<<' '<<'*'<<'*';
std::cout<<std::endl;
for(int j=0; j<4; ++j)
 std::cout<<' '<<' '<<'*'<<'*';
std::cout<<std::endl;
}
}
return 0;
}
