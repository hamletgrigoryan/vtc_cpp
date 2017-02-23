#include "Triangle_Point.h"
#include <cmath>
Point::Point(int a, int b)
  :x(a)
  ,y(b)
{}
int Point::get_x()
{
  return x;
}
int Point::get_y()
{
  return y;
}
double Point::Side(Point other)
{
  return sqrt((get_x()-other.get_x())*(get_x()-other.get_x())+(get_y()-other.get_y())*(get_y()-other.get_y()));
}



double Triangle::Area(Point A, Point B, Point C)
{
  double AB, BC, AC;
  double S;
  AB = A.Side(B);
  BC = B.Side(C);
  AC = C.Side(A);
  if(AB < (BC + AC) && BC < (AB + AC) && AC < (AB + BC))
  {
     double p = (AB + BC + AC) / 2;
     S = sqrt((p - AB) * (p - BC) * (p - AC) * p);
     return S;
  }
  else
  return 0;
}
