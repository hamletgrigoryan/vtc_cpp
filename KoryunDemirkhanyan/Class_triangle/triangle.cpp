#include "triangle.hpp"
#include <cmath>

triangle::
triangle (const point& a, const point& b, const point& c)
	: m_a(a)
	, m_b(b)
	, m_c(c)
{}

double triangle::
area() const
{
	double a = m_a.distance(m_b);
	double b = m_a.distance(m_c);
	double c = m_b.distance(m_c);
	double p = (a + b + c) / 2;
	return sqrt (p * (p - a) * (p - b) * (p - c));
}

bool triangle::
contains (const point& p) const
{
	// x -> p.x ,  y -> p.y
	// x1 -> a.x , y1 -> a.y
	// x2 -> b.x , y2 -> b.y
	// x3 -> c.x , y3 -> c.y
	double a = ((m_a.x() - p.x()) * (m_b.y() - m_a.y()) - 
		    (m_b.x() - m_a.x()) * (m_a.y() - p.y()));

	double b = ((m_b.x() - p.x()) * (m_c.y() - m_b.y()) - 
		    (m_c.x() - m_b.x()) * (m_b.y() - p.y()));

	double c = ((m_c.x() - p.x()) * (m_a.y() - m_c.y()) - 
   		    (m_a.x() - m_c.x()) * (m_c.y() - p.y()));

	return  (a <= 0 && b <= 0 && c <= 0) || (a >= 0 && b >= 0 && c >= 0);
}

