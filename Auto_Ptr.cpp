#include <iostream>

class auto_ptr {
private:
    int* m_ptr;
public:
    auto_ptr(int* value) : m_ptr(value) {
    }

    ~auto_ptr() {
	if (NULL != m_ptr) {
	    delete m_ptr;
	}
    }

    int* get() const {
	if (NULL != m_ptr) {
	    return m_ptr; 
	}
    }

    int& operator*() const {
	if (NULL != m_ptr) {
	    return *m_ptr;
	}
    }

    int* operator->() const {
	if (NULL != m_ptr) {
	    return m_ptr;
	}
    }

    int* release() {
	m_ptr = NULL;
    }

    auto_ptr& operator=(auto_ptr& item) {
	if (NULL != item.get()) {
	    m_ptr = item.get();
 	    item.release();
	}
    }

    void reset(int* ptr = 0) {
	if (NULL != ptr && NULL != m_ptr) {
      	    m_ptr = ptr;
	}
    }

    void show() {
	if (NULL == m_ptr) {
	    std::cout << "NULL" << std::endl;
	} else {
	    std::cout << m_ptr << " -> " << *m_ptr << std::endl;
	}
    }
};

int main() {
	auto_ptr* ptr = new auto_ptr(new int(10));
    ptr->show();

    **ptr = **ptr * 2;
    ptr->show();

    **ptr = 7;
    ptr->show();

    int a = 6;
    ptr->reset(&a);
    ptr->show();

    ptr->release();
    ptr->show();

    return 0;
}
