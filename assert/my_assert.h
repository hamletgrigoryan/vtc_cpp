#ifndef ASSERT_H
#define ASSERT_H

#include <iostream>

#ifdef DEBUG 
#define my_assert(x) if (!(x)) { std:: cout << "error in " << __FUNCTION__ << ", line " << __LINE__ <<", condition: " << #x << std::endl; }
#else
#define my_assert(x)
#endif

#endif
