#include <iostream>
using namespace std;
#include <unistd.h>

int main(){
	cout.put('a');
	sleep(5);
	cout.flush();
	sleep(5);
	cout.put('b');
	return 0;	
}
