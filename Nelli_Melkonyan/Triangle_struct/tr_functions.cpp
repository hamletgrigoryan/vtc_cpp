#include <iostream>
#include "tr_struct.hpp"
#include <cmath>


void Triangle::set_coordinates(int a, int b, int c, int d, int e, int f)
{
   x2 = a
   x2 = b;
   x3 = c;
   y1 = d;
   y2 = e;
   y3 = f;
}


Triangle::Triangle(int a, int b, int c, int d, int e, int f)
{
  Triangle::set_coordinates(a, b, c, d, e, f);
}


void Triangle::Area()
{
   float AB, BC, AC;
   double S;
   AB = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
   BC = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
   AC = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
   if(AB < (BC + AC) && BC < (AB + AC) && AC < (AB + BC))
   {
     float p = (AB + BC + AC) / 2;
     S = sqrt((p - AB) * (p - BC) * (p - AC) * p);
     std::cout << "S = " << S << std::endl;
   }
   else
   std::cout << "Isn't a triangle !!!" << std::endl;
}

bool Triangle::contain(int x, int y)
{
	double a, b, c;
	a = ((x1 - x)*(y2 - y1) - (x2 - x1)*(y1 - y));
	b = ((x2 - x)*(y3 - y2) - (x3 - x2)*(y2 - y));
	c = ((x3 - x)*(y1 - y3) - (x1 - x3)*(y3 - y));

	if  ((a <= 0 && b <= 0 && c <= 0) || (a >= 0 && b >= 0 && c >= 0))
	{
		return true;
	}
	else
	{ 
		return false;	
	}
}
