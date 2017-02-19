#pragma once

struct Point
{
private:
	double x, y;

public:
	Point();
	Point(double, double);
	void setX(double);
	void setY(double);

	double getX();
	double getY();

	double distance(Point);
};
