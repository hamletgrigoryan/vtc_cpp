#pragma once

#include "point.h"

class Triangle {

public:
	Triangle(const Point& a, const Point& b, const Point& c);
	bool contains(const Point& p) const;

private:
	Point m_a;
	Point m_b;
	Point m_c;

};