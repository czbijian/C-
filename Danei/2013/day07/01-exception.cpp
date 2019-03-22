#include <iostream>
using namespace std;
void beforedie(){
	cout << "I love china" << endl;	
}
void func(){
	class MyExc{
		
	};
	cout << "choose a way to die" << endl;
	cout << "\t1--throw int" << endl;
	cout << "\t2--throw dec" << endl;
	cout << "\t3--throw str" << endl;
	cout << "\t4--throw sui" << endl;
	cout << "\t0--throw free"<< endl;
	int n;
	cin >> n;
	switch(n){
		case 1:throw 123;
		case 2:throw 4.5;
		case 3:throw "hello";
		case 4:throw MyExc();
		case 0:break;
		default:throw 789L;
	}
}

int main(){
	set_terminate(beforedie);
	func();
	cout << "-----good future-----"<< endl;
	return 0;	
}
