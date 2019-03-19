#include <iostream>
using namespace std;
class R{
	int n;
	int d;
public:
	friend ostream& operator<<(ostream& o, const R&x){
		o << x.n << '/' << x.d;	
	}
	R(int n, int d):n(n),d(d){}
	R& operator++(){
		n+=d;
		return *this;
	}
	friend R& operator--(R& x);
};

	R& operator--(R& x){
		x.n -= x.d;
		return x;
	}
int main(){
	R a(3,4);
	cout << "a = " << a << endl;
	cout << "a = " << ++++a << endl;
	//operator++(a),a.operator++()
	cout << "a = " << a << endl;
	cout << --a << endl;
	cout << a << endl;
	return 0;	
}
