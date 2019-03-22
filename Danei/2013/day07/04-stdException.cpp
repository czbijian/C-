#include <iostream>
using namespace std;
#include <exception>

int main(){
	try{
		double *p = new double[0xffffffff];	
		cout << p << endl;
	}catch(exception &e){
		cout << "exception occurs->:" << e.what() << endl;
	}
	cout << "oh yeah " << endl;
	return 0;	
}
