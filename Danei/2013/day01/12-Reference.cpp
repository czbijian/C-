#include <iostream>
using namespace std;

void swap(int &p, int &q)//void swap(int *p, int* q)
{
	cout << "address of p:"<<&p<<",address of q:"<<&q<<endl;
	int t = p;//*p;
	p = q;//*p = *q;
	q = t;//*q = t;
}
int& counter()
{
	static int cnt=0;//Initialization is only performed once
	++cnt;
	return cnt;
}

int main(){
	cout << counter()<<endl;
	cout << counter()<<endl;
	cout << counter()<<endl;
	counter() = 0;
	cout << counter()<<endl;
	cout << counter()<<endl;

	int a=10, b =20,c=30,d=40;
	cout << "address of a:"<<&a<<",address of b:"<<&b<<endl;
	swap(a,b);//==>swap(&a,&b);
	cout << a << ","<<b<<endl;
	swap(c,d);//==>swap(&a,&b);
	cout << "address of c:"<<&c<<",address of d:"<<&d<<endl;
	cout << c << ","<<d<<endl;
}
