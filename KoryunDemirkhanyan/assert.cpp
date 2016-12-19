#include <iostream>

//Debug - assert on  RELEASE - assert off

#ifdef DEBUG
#define my_assert(x) if(!(x)) { std::cout<<"error in" << _FUNCTION_<<",line"<< _LINE_ << x << std::endl; }
#else
#define my_assert(x)
#endif

int main()
{
        int x=-1;
        my_assert(x>0)
	return 0;
}

