#include <iostream>
using namespace std;

void f1(int n){
	cout << n*n << endl;	
}
int main(){
	cout << &main << endl;
	void(*p)(int n) = &f1;
	cout << (void*)p << endl;
	p(1111);
	return 0;
}
