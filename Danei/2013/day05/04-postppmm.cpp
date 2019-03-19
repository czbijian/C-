#include <iostream>
using namespace std;

class R{
	int n;
	int d;
public:
	R(int n, int d=1):n(n),d(d){
		
	}
	friend ostream& operator<<(ostream&, const R&);
	R operator++(int ){
		//fake formal parameter is used to distinguish from before++,is a dummy
		R old = *this;
		n += d;
		return old;
	}
};

int main(){
	R a(3,5);
	//a++;
	cout << a++ << endl;
	cout << a << endl;
	return 0;

}

ostream& operator<<(ostream& o, const R& x){
	return o << x.n << '/' << x.d;	
}
