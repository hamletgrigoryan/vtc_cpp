#include <iostream>
#include <cmath>
int main ()
{
	double x1, x2, x3, y1, y2, y3;
	double a, b, c, A, B, C;
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
	if  (A + B > C || A + C > B || B + C > A)
	{
		double x, y;
		std::cout<<"tpel keti kordinatner@";
		std::cout<<std::endl;
		std::cout<<"x=";
		std::cin>>x; 
		std::cout<<std::endl;  
		std::cout<<"y=";
		std::cin>>y;    
		a = ((x1 - x)*(y2 - y1) - (x2 - x1)*(y1 - y));
		b = ((x2 - x)*(y3 - y2) - (x3 - x2)*(y2 - y));
		c = ((x3 - x)*(y1 - y3) - (x1 - x3)*(y3 - y));
	}
	else  {
		std::cout<<" nman keterov erankyun chka";
	}

	if  ((a <= 0 && b <= 0 && c <= 0) || (a >= 0 && b >= 0 && c >= 0))
	{
		std::cout<<"ket@ gtnvum e erankyan nersum";
	}
	else
	{ 
		std::cout<<"ket@ chi gtnvum erankyan nersum";
	}
	return 0;
}
