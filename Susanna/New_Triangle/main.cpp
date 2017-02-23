#include <iostream>
#include "Triangle_Point.h"
int main()
{
   int x1, x2, x3, y1, y2, y3;
   std::cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
   Point A(x1, y1);
   Point B(x2, y2);
   Point C(x3, y3);
   Triangle D;
   if(D.Area(A, B, C) != 0)
   {
      std::cout << "S = " << D.Area(A, B, C) << std::endl;
   }
   else 
   std::cout << "Nermucvac keter@ erankyan gagatner chen" << std::endl;
   return 0;
}
