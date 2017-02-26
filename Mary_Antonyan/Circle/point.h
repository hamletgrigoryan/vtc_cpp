#pragma once

class Point {

public:
	Point(double x, double y);
	double distance(const Point& p) const;

	double x() const { return m_x; }
	double y() const { return m_y; }

private:
	double m_x;
	double m_y;

};

