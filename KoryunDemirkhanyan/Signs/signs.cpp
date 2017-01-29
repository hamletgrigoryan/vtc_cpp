#include <iostream>
#include <cstring>

int main ()
{
    char  text[] ="jxhc }cba jsc]sac scb)a hsbaasasd sd(shssd[s{fsdfv"; 
    std::cout << text << std::endl;
    char * p1 = strchr(text, '{');
    char * p2 = strchr(text, '}');
    char * f1 = strchr(text, '(');
    char * f2 = strchr(text, ')');
    char * m1 = strchr(text, '[');
    char * m2 = strchr(text, ']');
    int  place1 = p1 - text + 1;
    int  place2 = p2 - text + 1;
    int  place3 = f1 - text + 1;
    int  place4 = f2 - text + 1;
    int  place5 = m1 - text + 1;
    int  place6 = m2 - text + 1;
    for (int i = 0; i < sizeof(text); ++i)
    {

        if (place1 < place2 || place3 < place4 || place5 < place6 )
        {
            ++i;
        }
        else 
        {
            text[place1-1] = '}';
            text[place2-1] = '{';
            text[place3-1] = ')';
            text[place4-1] = '(';
            text[place5-1] = ']';
            text[place6-1] = '[';
        }
    }   
    std:: cout << text << std::endl;  
    return 0;
}
