#include <iostream>
using namespace std;

int main(){
	int a[5] = {11,22,33,44,55};
	int *p = a;//&a[0];
	cout << a[2]   << ',' << p[2]   << endl;
	cout << *(a+2) << ',' << *(p+2) << endl;
	cout << 2[a]   << ',' << 2[p]   << endl;

	return 0;
}
