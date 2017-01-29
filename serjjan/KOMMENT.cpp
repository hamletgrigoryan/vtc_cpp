#include<iostream>
#include<string>
int main ()
{
	std::string text;
	std::cout<<"grel text@";
	std::cin>>text; 
	std::cout<<std::endl;
	for(int i = 0; i < text.size() ;++i)
	{
		if (text[i] == '/');
		{
			if(text[i + 1] == '/')
			{
				int ntar = 2;
				for(int j = i + 2; text[j] != '/'; ++j)
				{
					++ntar;
				}
				text.erase (i, ntar);
			}
			else if	(text[i + 1] == '*') 
			{
				int ntar = 2;
				for(int j = i + 2; text[j] != '*' && text[j] != '/'; ++j)
				{
					++ntar;
				}
				text.erase(i, ntar + 2);
			}
		}
	}
	std::cout<<text<<std::endl;
	return 0;
}
