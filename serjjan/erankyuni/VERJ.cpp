#include "erankyun.hpp"
#include <iostream>

int main()
{
	double x1, x2, x3, y1, y2, y3;//nerem muce koordinatner@
	
	std::cout << "x1 = ";
	std::cin >> x1;

	std::cout <<"x2 = ";
	std::cin >> x2;

	std::cout << "x3 = ";
	std::cin >> x3;

	std::cout << "y1 = ";
	std::cin >> y1;
	
	std::cout << "y2 = ";
	std::cin >> y2;

	std::cout << "y3 = ";
	std::cin >> y3;
	point a(x1, y1);//ste asel em vor sa pointi kordinatnern en
	point b(x2, y2);
	point c(x3, y3);
	tringle T(&a, &b, &c);//ste vercrel em kordinatneris hascener@ u  im/////erankyun klasi mi popoxakani mej pahe
	T.makeres();// hashvelem makeres@ veradardzre
//stexic el tvelem keti koordinatner@ u stuge mejna te che
	std::cout<<"S="<<S;
	double x, y;

	std::cout << "x = " ;
	std::cin >> x;

	std::cout << "y = ";
	std::cin >> y ;

	point d(x, y) ;
	tringle S(&d);//erevi sxala es tox@
	if(S.stugum(&d))
	{
		std::cout << "nersne" ;
	}else
	{
		std::cout << "dursne ";
	}

	return 0;

} 
