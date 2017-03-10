#include "auto_ptr.h"

int main()
{
	auto_ptr* m_ptr = new auto_ptr(new int(7));
	**ptr = **ptr * 3;
	ptr -> show();

	**ptr = 9;
	ptr -> show();

	int value = 19;
	ptr -> reset(&value);
	ptr -> show();

	ptr -> relese();
	ptr -> show();

	return 0;
}
