#include "triangle.h"
#include <cmath>

Triangle::Triangle(const Point& a, const Point& b, const Point& c)
	: m_a(a)
	, m_b(b)
	, m_c(c)
{}

bool Triangle::contains(const Point& p) const
{
	double a = (m_a.x() - p.x()) * (m_b.y() - m_a.y()) - (m_b.x() - m_a.x()) * (m_a.y() - p.y());
	double b = (m_b.x() - p.x()) * (m_c.y() - m_b.y()) - (m_c.x() - m_b.x()) * (m_b.y() - p.y());
	double c = (m_c.x() - p.x()) * (m_a.y() - m_c.y()) - (m_a.x() - m_c.x()) * (m_c.y() - p.y());
	return (a <= 0 && b <= 0 && c <= 0) || (a >= 0 && b >= 0 && c >= 0);
}