#include<iostream>

class point { 
public:
    point (double x, double y) {
        this->x = x;
        this->y = y;
    }
    void print_coordinates() {
        std::cout << this->x << " : " << this->y << std::endl; 
    }
    double distance (point from) {
        sqrt(pow((this->x - from.x), 2) + (pow((this->y - from.y), 2)))
    }
private:
    double x;
    double y;
};

class triangle {

    point* a;
    point* b;
    point* c;
    
    public:

    triangle (point *a, point *b, point *c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }


    void print_gagat ()
    {
    a->print_coordinates();
    b->print_coordinates();
    c->print_coordinates();
        
    }    
};


int main ()

{
double x,y,x1,y1,x2,y2;
std::cin >> x >> y;
std::cin >> x1 >> y1;
std::cin >> x2 >> y2;
point a(x,y); 
point b(x1,y1); 
point c(x2,y2); 
triangle t = triangle(&a, &b, &c);
t.print_gagat();
double ab = a.distance(b);
    return 0;
}
