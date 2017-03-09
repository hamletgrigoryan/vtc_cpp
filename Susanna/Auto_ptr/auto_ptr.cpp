#include "auto_ptr.hpp"

auto_ptr::auto_ptr(int* ptr)
  :m_ptr(ptr)
{}

auto_ptr::~auto_ptr()
{
  if(m_ptr != 0)
    delete m_ptr;
}

auto_ptr::auto_ptr(auto_ptr& object)
  :m_ptr(object.m_ptr)
  ,object.m_ptr(0)
{}

int* auto_ptr::get_ptr() const
{
  return m_ptr;
}

int& auto_ptr::Operator*() const
{
  return *m_ptr;
}

int* auto_ptr::Operator->() const
{
  return m_ptr;
}

auto_ptr& Operator=(auto_ptr& object)
{
  if (this != &object) 
  {
    if (m_ptr != 0)
    { 
      delete m_ptr;
    }
    m_ptr = object.m_ptr;
    object.m_ptr = 0;    
  }
  return *this;
}
  
