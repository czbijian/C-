#include <iostream>
using namespace std;

enum Color{
	RED,GREEN,BLUE
};

int main()
{
	Color c;
	//c = 1;//error,Not allowed in c++
	c = (Color)1;//c = Color(1);
	void * p = &c;
	Color *q ;
	//q = p;//compile error: invalid conversion from ‘int’ to ‘Color’
	q = (Color*)p;
	return 0;
}
