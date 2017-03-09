class auto_ptr
{
private:
  int* m_ptr;

public:
  auto_ptr(int* ptr);
  ~auto_ptr();
  auto_ptr(auto_ptr& object);
  int* get_ptr () const;
  int& Operator* () const;
  int* Operator-> () const;
  auto_ptr& Operator= (auto_ptr& object);
};
