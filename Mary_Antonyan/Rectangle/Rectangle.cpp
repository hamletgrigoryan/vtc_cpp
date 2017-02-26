#include "rectangle.h"
#include "triangle.h"

Rectangle::Rectangle(const Point& p1, const Point& p2, const Point& p3, const Point& p4)
	:m_p1(p1), m_p2(p2), m_p3(p3), m_p4(p4)
{}

bool Rectangle::contains(const Point& p) const
{
	Triangle tr1(m_p1, m_p2, m_p3);
	Triangle tr2(m_p2, m_p3, m_p4);
	Triangle tr3(m_p1, m_p2, m_p4);
	Triangle tr4(m_p1, m_p3, m_p4);
	return (tr1.contains(p) || tr2.contains(p) || tr3.contains(p) || tr4.contains(p));
}
