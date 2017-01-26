#include <iostream>
int tpel(int);
int i = 0;
int main()
{
	int n;
	std::cout<<"greq tiv ev sexmeq ENTER  ";
	std::cout<<"n=";
	std:: cin >> n;
	std::cout << tpel(n);
	return 0;
}
int tpel(int n)
{
	std::cout<<i;
	std::cout<<std::endl;
	++i;
	if(i < n)

	{
		tpel(n);// stex vor pakagci mej tiv em grum minchev et tivna \
tpum :  harc xi?
	}
}
