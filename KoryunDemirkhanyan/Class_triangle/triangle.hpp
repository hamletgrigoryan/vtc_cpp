#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "point.hpp"

class triangle {

public:
	triangle (const point& a, const point& b, const point& c);
	double area() const;
	bool contains(const point& p) const;
private:
	point m_a;
	point m_b;
	point m_c;
};

#endif
