#include <iostream>
using namespace std;

void swap(int &p, int &q)//void swap(int *p, int* q)
{
	int t = p;//*p;
	p = q;//*p = *q;
	q = t;//*q = t;
}

int main(){
	int a=10, b =20;
	swap(a,b);//==>swap(&a,&b);
	cout << a << ","<<b<<endl;
}
