#include <iostream>
#include "ERANKYUN.hpp"
#include <cmath>

// ste chem haskace inch grem vonc anem vor kordinatner@ poxancvi ev im klassnerum terutyun chexni



int tringle::makeres()
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
   std::cout << "erankyun che" << std::endl;
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
