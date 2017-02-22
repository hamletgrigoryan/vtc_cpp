#include "KET.hpp"
class tringle
{
	private:
		point* a;
		point* b;
		point* c;
	public:
		tringle (point* a, point* b, point* c)
		{
			this ->a = a;
			this ->b = b;
			this ->c = c;
		}
		void tpel_gagatner()
		{
			a->keti_kordinat();
			b->keti_kordinat();
			c->keti_kordinat(); 
		}
		int makeres();
		bool stugum (int x, int y);
};
