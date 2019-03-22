#include <iostream>
using namespace std;
#include <unistd.h>//windows.h
int main(){
	cout << "hello";//Buffer: full,encounter \n,program end,refresh,have input...
	cerr << "world";//No buffering,immediate display
//	cout << endl;
	sleep(10);
	return 0;	
}
