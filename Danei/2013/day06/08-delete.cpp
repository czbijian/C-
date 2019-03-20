#include <iostream>
using namespace std;

class A{
public:	
	A(){
		cout << "A()" << endl;
	}
	//~A(){
	virtual ~A(){
		cout << "~A()" << endl;	
	}
	virtual void dosomething(){
			
	}
};
class B:public A{
public:
	B(){
		cout << "B()" << endl;	
	}
	~B(){
		cout << "~B()" << endl;	
	}
	virtual void dosomething(){
			
	}
};

int main(){
	A* x[2];
	x[0] = new B();
	x[1] = new A();
	//...
	//delete[] x;//error,
	delete x[0];
	delete x[1];
	return 0;	
}
