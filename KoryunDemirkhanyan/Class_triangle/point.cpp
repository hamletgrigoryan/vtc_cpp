#include "point.hpp"
#include <cmath>

point::
point (double x, double y)
	: m_x(x)
	, m_y(y)
{}

double point::
distance (const point& p) const
{
	return sqrt((m_x - p.m_x) * (m_x - p.m_x) + (m_y - p.m_y) * (m_y - p.m_y));
}
