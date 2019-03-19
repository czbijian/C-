#include <iostream>
#include <cstdlib>
using namespace std;

class A{
	int data;
public:
	A(int d=0):data(d){
		cout << "A(" << data << ")" << endl;	
	}
	~A(){
		cout << "~A()" << data << endl;
	}
	void* operator new(size_t bytes){
		cout << "bytes=" << bytes << endl;
		return malloc(bytes);
	}
	void operator delete(void *p){
		cout << "free" << p << endl;
		free(p);	
	}
	void* operator new[](size_t bytes){
		cout << "BYTES=" << bytes << endl;
		void * p = malloc(bytes);
		cout << "malloc:" << p << endl;
		return p;
	}
	void operator delete[](void *p){
		cout << "FREE" << p << endl;
		free(p);	
	}
};

int main(){
	A* p = new A;	
	cout << "sizeof A=" << sizeof(A) << endl;
	cout << "p =" << p << endl;
	delete p;
	p = NULL;
	cout << "-------------" << endl;
	p = new A[3];
	cout << "mysterious data:" << *((long*)p-1) << endl;
	cout << "p = " << p << endl;
	delete[] p;
	p = NULL;
}
