#ifndef ASSERT_H
#define ASSERT_H

#include<iostream>

//Debug - assert on  RELEASE - assert off

#ifdef DEBUG
#define my_assert(x) if(!(x)) { std::cout<<"error in" << _FUNCTION_<<",line"<< _LINE_ <<", condition:"<< #x << std::endl; }
#else
#define my_assert(x)
#endif

#endif
