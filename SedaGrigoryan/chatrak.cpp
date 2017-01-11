#include<iostream>
using namespace std;
int main()
{
for(int i=0; i<8; i++){
if(i%2==0){
	for(int j=0; j<4; j++)
         cout<<"**  ";
cout<<endl;
          for(int j=0; j<4; j++)
           cout<<"**  ";
cout<<endl;
	}
else{
for(int j=0; j<4; j++)
 cout<<"  **";
cout<<endl;
for(int j=0; j<4; j++)
 cout<<"  **";
cout<<endl;
}
}
return 0;
}
