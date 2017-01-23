#include <iostream>
#include <string>

int main()
{
	std::string str = "int main()\n\
{\n\
//This is a /*comment*/for my program\n\
	if(isBalanced(str))\n\
		std::cout << \"YES\" << std::endl;\n\
	else\n\
		std::cout << \"NO\" << std::endl;\n\
/* And this is a comment too\n\
because I want to check whether my\n\
program works or not!!!\n\
*/\n\
	system(\"pause\");\n\
	return 0;\n\
}\n";

	std::cout << str << "\n**********\n\n";

	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '/' && str[i + 1] == '/')
		{
			int count = 2;
			int j = i + 2;
			while (str[j] != '\n')
			{
				count++;
				j++;
			}
			str.erase(i, count);
		}
		else if (str[i] == '/' && str[i + 1] == '*')
		{
			int count = 2;
			int j = i + 2;
			while (!(str[j] == '*' && str[j + 1] == '/'))
			{
				count++;
				j++;
			}
			str.erase(i, count + 2);
		}
		i++;
	}

	std::cout << str << std::endl << std::endl;

	system("pause");
	return 0;
}