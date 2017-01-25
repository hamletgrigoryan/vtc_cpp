#include <iostream>
#include <cmath>
int main ()
{
	double x1, x2, x3, y1, y2, y3;
	double A, B, C, A1, B1, C1;
	std::cout<< "tpel erankyan gagatneri kordinatner@";
	std::cout<< std::endl;
	std::cout << "x1=";
	std::cin >> x1;
	std::cout <<"x2=";
	std::cin >> x2;
	std::cout << "x3=";
	std::cin >> x3;
	std::cout << "y1=";
	std::cin >> y1;
	std::cout << "y2=";
	std::cin >> y2;
	std::cout << "y3=";
	std::cin >> y3;
	A = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	B = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	C = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
	if  (A + B > C && A + C > B && B + C > A){
		double x,y;
		std::cout<<"tpel keti kordinatner@";
		std::cout<<"x=";
                std::cin>>x; 
                std::cout<<std::endl;  
		std::cout<<"y=";
                std::cin>>y; 
		A1 = sqrt((x1 - x)*(x1 - x) + (y1 - y)*(y1 - y));
		B1 = sqrt((x - x2)*(x - x2) + (y - y2)*(y - y2));
		C1 = sqrt((x - x3)*(x - x3) + (y - y3)*(y - y3));
	}
	if (A1 <= A && B1 <= B && C1 <= C){
		std::cout <<" ket@ gtnvume erankyan nersum "; 
        }
else
{ 
std::cout<<"ket@ chi gtnvum erankyan nersum";
}
	return 0;
}
