#include <iostream>
using namespace std;

class R{
	int n;//molecule
	int d;//denominator
public:
	//Friendly statement,authorize this function to allow to members of the class
	friend ostream& operator<<(ostream& o,const R& x);
	R(int cn, int cd = 1):n(cn),d(cd){
		if(d<0){
			n = -n;
			d = -d;
		}
		for(int i = d; i > 1; i--){
			if(d%i==0&&n%i==0){
				d/=i;
				n/=i;
				break;
			}	
		}
			
	}
	friend istream& operator>>(istream& i, R& x){
		char c;
		int n, d;
		i >> n >> c >> d;
		x = R(n, d);
		return i;
	}
};
ostream& operator<<(ostream& o,const R& x){
	o << x.n << '/' << x.d;
	//operator<<(o,x.n)==>operator<<(ostrean&,int);
	return o;
}
int main(){
	R a(6,8);
	R b(8,-12);
	//cout << a;//operator<<(cout,a);
	//cout << b;
	cout << a <<','<< b << endl;
	cin >> a >> b;
	cout << a << ',' << b << endl;
	return 0;	
}
