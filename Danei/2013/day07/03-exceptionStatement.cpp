#include <iostream>
using namespace std;

void f1(int n)throw(int, double){
	try{
		if(n==1)throw 123;
		if(n==2)throw 4.5;
		throw "out of range";
	}catch(int e){
		cout << "catch " << e << " in f1" << endl;
		if(e > 100)
			throw;//rethrow the current exception data
	}	
}

void func(){
	cout << "The exception type is not in the list" << endl;	
}

int main(int argc, char* argv[]){
	//argument参数，count数量，vector不定长数组
	set_unexpected(func);//Register the unexpected function
	try{
		cout << "argc=" << argc << endl; 
		f1(argc);
	}
	catch(int e){
		cout << "int " << e << endl;
	}	
	catch(double e){
		cout << "double " << e << endl;	
	}
	catch(...){
		cout << "exceptiong" << endl;	
	}
	
}
