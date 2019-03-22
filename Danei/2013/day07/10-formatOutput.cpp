#include <iostream>
using namespace std;

int main(){
	cout << 123.0 << endl;
	cout.setf(ios::showpoint);
	cout << 123.0 << endl;
	cout.setf(ios::scientific|ios::uppercase);
	cout << 123.0 << endl;
	cout.unsetf(ios::scientific|ios::showpoint);
	cout << 123.0 << endl;
	cout.width(10);
	cout << 123 << endl;
	cout.fill('#');
	cout.width(10);
	cout << 123 << endl;
	cout.setf(ios::left|ios::showpos);
	cout.width(10);
	cout << 123.0 << endl;
	cout.precision(8);
	cout << 123.456789 << endl;
	cout.setf(ios::fixed);
	cout.precision(2);//
	cout << 123.456789 << endl;
}
