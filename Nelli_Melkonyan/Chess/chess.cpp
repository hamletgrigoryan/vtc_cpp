#include <iostream>
int main()
{
    const int board_size_top = 8;
    const int board_size_left = 8;
    const int size= 2;
    const int extra_size = size + 1;
    const char white = '@';
    const char black = '*';
    for ( int i = 0; i <= (board_size_left * extra_size ); ++i )
    {
        for ( int j = 0; j <= (board_size_top * extra_size ); ++j )
        {
            if ( i % extra_size == 0 )
            {
                std::cout << "-";
            }else if ( j  %  extra_size == 0 )
            {
                std::cout << "|";
            }else if ( ( ( i / extra_size ) + ( j / extra_size ) ) % 2 == 0 )
            {
                std::cout << white;
            }else
            {
                std::cout << black;
            }
        }
        std::cout << std::endl;
    }
}
