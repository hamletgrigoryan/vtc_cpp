#include <iostream>
#include <string.h>
#include <cstdlib>

bool isBalanced(std::string str)
{
	int top = 0;
	char* stack = new char(str.length());

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '{' || str[i] == '[' || str[i] == '(')
		{
			top++;
			stack[top] = str[i];
		}
		else if (str[i] == '}')
		{
			if (stack[top] == '{')
				top--;
			else 
				return false;
		}
		else if (str[i] == ']')
		{
			if (stack[top] == '[') 
				top--;
			else 
				return false;
		}
		else if (str[i] == ')')
		{
			if (stack[top] == '(') 
				top--;
			else 
				return false;
		}

	}

	return (top == 0) ? true : false;
}

int main()
{
	std::string str = "{anj()b[]g({[)]})[]}";
	if (isBalanced(str))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;

	system("pause");
	return 0;
}
