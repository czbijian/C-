#include <iostream>
using namespace std;
#include <iomanip>
int main(){
	cout << 123.0 << endl;
	cout << showpoint << 123.0 << endl;
	cout << 123.0 << endl;
	cout << scientific << uppercase << 123.0 << endl;
	cout << resetiosflags(ios::scientific) << noshowpoint ;
	cout << 123.0 << endl;
	cout << setw(10) << 123 << endl;
	cout << setfill('#') << setw(10) << 123 << endl;
	cout << left << showpos << setw(10) << 123.0 << endl;
	cout << setprecision(8) << 123.456789 << endl;
	cout << fixed << setprecision(2) << 123.456789 << endl;
}
