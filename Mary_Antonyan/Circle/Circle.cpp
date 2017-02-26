#define _USE_MATH_DEFINES

#include "circle.h"
#include <cmath>

Circle::Circle(const Point& center, const double& radius) : m_p1(center), m_r(radius)
{}

bool Circle::contains(const Point& p) const
{
	return (sqrt((p.x() - m_p1.x())*(p.x() - m_p1.x()) + (p.y() - m_p1.y())*(p.y() - m_p1.y())) <= m_r);
}