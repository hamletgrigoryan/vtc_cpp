#include <iostream>
int n;
int tpel(int i = n)
{
	std::cout<<i;
	std::cout<<std::endl;
	--i;
	if(i > 0) 
	{
		tpel(i);
	}
	else {
		return 1;
	} 
}

int main()
{
	std::cout<<"greq tiv ev sexmeq ENTER  ";
	std::cout<<"n=";
	std:: cin >> n;
	std::cout << tpel(i);
	return 0;
}
/*#include<iostream>
  int main ()
  {
  for (int i = 200; i > 0;--i)
  std::cout <<i;
  return 0;
  }*/
