#include "auto_ptr.hpp"
#include <iostream>

auto_ptr::auto_ptr(int* ptr)
	:my_ptr(ptr)
{}

auto_ptr::~auto_ptr()
{
	if(my_ptr != NULL)
		delete m_ptr;
}

auto_ptr::auto_ptr(auto_ptr& object)
	:my_ptr(object.my_ptr)
	 ,object.my_ptr(0)
{}

int* auto_ptr::get_ptr() const
{
	return my_ptr;
}

int& auto_ptr::Operator*() const
{
	return *my_ptr;
}

int* auto_ptr::Operator->() const
{
	return this;
}

auto_ptr& Operator=(auto_ptr& object)
{
	if (this != &object) 
	{
		if (my_ptr != NULL)
		{ 
			delete my_ptr;
		}
		my_ptr = object.my_ptr;
		object.my_ptr = 0;    
	}
	return *this;
}

void auto_ptr::reset(int* ptr = 0) 
{
	if(my_ptr != NULL && ptr != NULL)
	{

		my_ptr = ptr;
	}
}

void auto_ptr::relese 
{
	my_ptr = NULL;
}

void auto_ptr::show()

	if ( my_ptr != NULL )
	{

		std::cout << "&my_ptr = " << this << " ";
		std::cout << "my_ptr = " << *this << std::endl;
	} else 
	{
		std::cout << "Null" << std::endl;
	}
}
