#ifndef CZQ_PRINT
#define CZQ_PRINT

#include <iostream>
using namespace std;
template< typename T>
void print(T a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
	cout << endl;
}


#endif
