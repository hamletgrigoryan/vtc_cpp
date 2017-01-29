#include <iostream> 
#include <string>

int main()
 { 
	std::string tox; 
	std::cout << "grel tox@";
	std::cin >> tox;
	int i = 0;
	char a[tox.size()]; 
	for (int j = 0; j < tox.size() ;++j)
	{     
		char c = tox[j];
		switch (c)
		{ 
			case '(':
			case '{':
			case '[': 
				++i;
				a[i] = c; 
				break; 

			case ')':  
				if(a[i] == '(')
				{
					--i;
				}
				break; 

			case '}':  
				if(a[i] == '{')
				{
					--i;
				}
				break; 

			case ']':  
				if(a[i] == '[')
				{
					--i;
				}
				break; 
		} 
	} 

	if(i == 0)
	{
		std::cout << "jisht";

	}else
	{
		std::cout << "sxal";
	}
        std::cout<<std::endl;    
	return 0;
 }
