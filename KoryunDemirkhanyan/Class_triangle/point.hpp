#ifndef POINT_HPP
#define POINT_HPP

class point {

public:
	point (double x, double y);
	double distance (const point& p) const;
	
	double x() const { return m_x; }
	double y() const { return m_y; }

private:
	double m_x;
	double m_y;

};

#endif

