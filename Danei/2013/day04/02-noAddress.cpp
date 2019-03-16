#include <iostream>
using namespace std;

class NA{
	int n;	
	double d;
public:
	NA(){}
	~NA(){}
	NA* operator&(){
		return NULL;	
	}
};

int main(){
	NA a,b;
	cout << &a << endl;
	cout << &b << endl;
	return 0;	
}
