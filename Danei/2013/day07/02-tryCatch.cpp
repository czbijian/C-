#include <iostream>
using namespace std;
#include <string>

void f1(){
	try{
		cout << "1--int\n2--double\n0--return\n";
		int n;
		cin >> n;
		if(n == 1){
			throw 1;	
		}
		if(n == 2){
			throw 2.2;
		}
		if(n == 0){
			return;	
		}
		throw string("error");
	}
	catch(long e){
		cout <<"long " << e << endl;	
	}
	catch(double e){
		cout << "double" << e << endl;	
	}
	cout << "----end of f1----" << endl;
}

void f2(){
	try{
		f1();
		cout << "---in f2---" << endl;
	}
	catch(int e){
		cout << "int " << e << endl;	
	}
	cout << "---end of f2---" << endl;
}

int main(){
	try{
		f2();
	}
	catch(...){
		cout << "A exception occurs " << endl;	
	}
	cout << " I will be back " << endl;
	return 0;	
}
