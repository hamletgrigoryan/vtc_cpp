class Point
{
private:
  int x;
  int y;
public:
  Point(int, int);
  int get_x();
  int get_y();
  double Side(Point);
};
class Triangle
{
public:
  double Area(Point, Point, Point);
};

