#include <iostream>
#include <climits>
#include <cstdlib>
#include <cfloat>
using namespace std;

int main()
{
	cout << "Size of bool: " << sizeof(bool) << endl << endl;

	cout << "Max of char: " << CHAR_MAX << endl;
	cout << "Min of char: " << CHAR_MIN << endl;
	cout << "Size of char: " << sizeof(char) << endl << endl;

	cout << "Max of unsigned char: " << UCHAR_MAX << endl;
	cout << "Min of unsigned char: " << 0 << endl;
	cout << "Size of unsigned char: " << sizeof(unsigned char) << endl << endl;

	cout << "Max of short int: " << SHRT_MAX << endl;
	cout << "Min of short int: " << SHRT_MIN << endl;
	cout << "Size of short int: " << sizeof(short) << endl << endl;

	cout << "Max of unsigned short int: " << USHRT_MAX << endl;
	cout << "Min of unsigned short int : " << 0 << endl;
	cout << "Size of unsigned short int: " << sizeof(unsigned short int) << endl << endl;


	cout << "Max of int: " << INT_MAX << endl;
	cout << "Min of int: " << INT_MIN << endl;
	cout << "Size of int: " << sizeof(int) << endl << endl;

	cout << "Max of unsigned int: " << UINT_MAX << endl;
	cout << "Min of unsigned int: " << 0 << endl;
	cout << "Size of unsigned int: " << sizeof(unsigned int) << endl << endl;

	cout << "Max of long int: " << LONG_MAX << endl;
	cout << "Min of long int: " << LONG_MIN << endl;
	cout << "Size of long int: " << sizeof(long int) << endl << endl;

	cout << "Max of unsigned long int: " << ULONG_MAX << endl;
	cout << "Min of unsigned long int: " << 0 << endl;
	cout << "Size of unsigned long int: " << sizeof(unsigned long int) << endl << endl;

	cout << "Max of float: " << FLT_MAX << endl;
	cout << "Min of float: " << FLT_MIN << endl;
	cout << "Size of float: " << sizeof(float) << endl << endl;

	cout << "Max of double: " << DBL_MAX << endl;
	cout << "Min of double: " << DBL_MIN << endl;
	cout << "Size of double: " << sizeof(double) << endl << endl;

	cout << "Max of long double: " << LDBL_MAX<< endl;
	cout << "Min of long double: " << LDBL_MIN << endl;
	cout << "Size of long double: " << sizeof(long double) << endl << endl;

	cout << "Max of wchar_t: " << WCHAR_MAX << endl;
	cout << "Min of wchar_t: " << WCHAR_MIN << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl << endl;

	system("pause");
	return 0;
}
