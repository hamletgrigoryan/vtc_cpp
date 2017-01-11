#include<iostream>
int main ()
{
const int board_size = 8;
const char white=' ';
const char black='*';
const int  size = 3;
const int s = size + 1;

for(int i = 0; i <= board_size * s; ++i) {
	for(int j = 0; j <= board_size * s; ++j) {
		if (i % s == 0) {
			std::cout << '_';
			} else if (j % s ==0) {
			    std::cout << '|';
                        } else if ((i / s + j / s) % 2 == 0) {
                            std::cout << white; 
	                } else {
                            std::cout << black;
				}
			}
			std::cout << std::endl; 
	}
return 0;
}
