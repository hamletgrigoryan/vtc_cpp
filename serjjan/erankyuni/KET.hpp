class point 
{
	int x;
	int y;
	public:
	point(int a, int b)
	{
		x = a;
		y = b;
	}
	double  setX(int a)
	{
		x = a;
	};
	double setY(int a)
	{
		y = a;
	};
        double getX() 
	{
		return x;
	};
	double getY()
	{
		return y;
	};
};
