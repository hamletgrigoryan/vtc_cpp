#pragma once
#include "point.h"

class Circle
{
public:
	Circle(const Point&, const double&);
	bool contains(const Point&) const;

private:
	Point m_p1;
	double m_r;
};