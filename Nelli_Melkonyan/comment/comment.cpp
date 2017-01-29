#include <iostream>
#include <string>

int main()
{
	std::string text;
	std::cout << "enter the text ";
	std::cin >> text;




	for (int i=0;i<text.size();++i)
	{
		if(text[i] == '/')
		{
			switch(text[i+1])
			{
				case '/':
					{
						int index = 2;
						int j = i + 2;
						for( int j = i+2; text[j] != '\n'; ++j)
						{
							++index;
						}
						text.erase(i, index+2);
						break;
					}
					
				case '*':
					{
						int index = 2;
						int j=i+2;
						for( int j = i+2; text[j] != '*' && text[j+1]!='/'; ++j)
						{
							++index;
						}
						text.erase(i, j);
						break;
					}	
			}
		}
	}
	
	

	std::cout << text << std::endl << std::endl;


	return 0;
}
