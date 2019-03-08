#include <iostream>
#include <cstring>
#include <new> //nothrow
using namespace std;

int main(){
	int *pi = new int;
	int n = 200;
	char*pc = new char[n];
	double* pd = new(nothrow) double[0xffffffff];
	long * pl = new long(123);
	short *ps = new short();//zero initialization
	*pi = 12*101;
	strcpy(pc,"welcome to Danei");
	if(pd!=NULL){
		pd[10] = 123.45;
	}else{
		cout << "pd==NULL"<<endl;
	}
	cout<<*pi<<','<<pc<<','<<endl;
	if(pd)
		cout<<pd[10]<<','<<*pl<<','<<*ps<<endl;
	delete pi;
	delete[] pc;
	delete[] pd;
	delete pl;
	delete ps;
}
