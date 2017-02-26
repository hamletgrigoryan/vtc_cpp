#pragma once

#include "point.h"

class Rectangle
{
public:
	Rectangle(const Point&, const Point&, const Point&, const Point&);
	bool contains(const Point&) const;

private:
	Point m_p1;
	Point m_p2;
	Point m_p3;
	Point m_p4;
};
