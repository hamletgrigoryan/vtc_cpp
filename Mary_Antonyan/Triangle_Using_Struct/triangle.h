#pragma once
struct Triangle
{
private:
	double x1, y1, x2, y2, x3, y3;

public:
	void setx1(double);
	void sety1(double);
	void setx2(double);
	void sety2(double);
	void setx3(double);
	void sety3(double);

	double getx1();
	double gety1();
	double getx2();
	double gety2();
	double getx3();
	double gety3();
};