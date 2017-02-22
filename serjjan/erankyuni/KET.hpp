#include<iostream>

class point 
{
	private:
		double x;
		double y;
	public:
		point(double x, double y)
		{
			this ->x = x;
			this ->y = y;
		}
		void keti_kordinat()
		{
			std::cout << this->x << this->y <<std::endl;
		}
};
