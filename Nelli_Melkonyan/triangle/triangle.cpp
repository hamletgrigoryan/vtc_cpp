#include <iostream>
#include <cmath>

int main()
{
	int x_a, y_a;
	int x_b, y_b;
	int x_c, y_c;
	int x_d, y_d;
	
	std::cout << "x_a = ";
	std::cin >> x_a;
	
	std::cout << "y_a = ";
	std::cin >> y_a;
	
	std::cout << "x_b = ";
	std::cin >> x_b;
	
	std::cout << "y_b = ";
	std::cin >> y_b;
	
	std::cout << "x_c = ";
	std::cin >> x_c;
	
	std::cout << "y_c = ";
	std::cin >> y_c;
	
	std::cout << "x_d = ";
	std::cin >> x_d;
	
	std::cout << "y_d = ";
	std::cin >> y_d;
	
	int a = sqrt( pow( (x_a - x_b),2 ) + pow( (y_a - y_b),2 ));
	int b = sqrt( pow( (x_b - x_c),2 ) + pow( (y_b - y_c),2 ));
	int c = sqrt( pow( (x_a - x_c),2 ) + pow( (y_a - y_c),2 ));
	
	int p = (a + b + c) / 2;
	int s = sqrt(p * (p - a) * (p - b) * ( p - c));
	
	int a_d = sqrt( pow( (x_a - x_d),2 ) + pow( (y_a - y_d),2 ));
	int b_d = sqrt( pow( (x_b - x_d),2 ) + pow( (y_b - y_d),2 ));
	int c_d = sqrt( pow( (x_c - x_d),2 ) + pow( (y_c - y_d),2 ));
	
	int p_1 = (a + b_d + a_d) / 2;
	int s_1 = sqrt(p_1 * (p_1 - a) * (p_1 - b_d) * ( p_1 - a_d));
	
	int p_2 = (b + b_d + c_d) / 2;
	int s_2 = sqrt(p_2 * (p_2 - a) * (p_2 - a_d) * ( p_2 - c_d)); 
	
	int p_3 = (c + a_d + c_d) / 2;
	int s_3 = sqrt(p_3 * (p_3 - a) * (p_3 - b_d) * ( p_3 - c_d));
	
	if( (s_1 + s_2 + s_3) <= s )
	{
		std::cout << "yes";
	}else
	{
		std::cout << "no";
	}
	
	return 0;
}
