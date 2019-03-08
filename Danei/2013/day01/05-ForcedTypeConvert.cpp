#include <iostream>
using namespace std;

int main()
{
	int a = static_cast<int>(123.45);
	int b = 100;
	void* p = &b;
	//int *q = p;//error
	int* q = static_cast<int*>(p);
	cout << "b=" << b << endl;

	//char* r = q;//error
	char* r = reinterpret_cast<char*>(q);
	cout << "*r=" << *r << endl;

	const int c = b;
	cout << "c=" << c << endl;
	//c = 200;//error
	*const_cast<int*>(&c) = 200;
	cout << "c=" << c << endl;
	
	return 0;
}
