#include <iostream>
using namespace std;

class R{//Fractional class
	int n;//molecule
	int d;//Denominator
public:
	explicit R(int n, int d=1):n(n),d(d){
		cout << "R("<<n<<'/'<<d<<")"<<endl;	
	}
	R add(const R& r2){
		int nd = d*r2.d;
		int nn = d*r2.n+n*r2.d;
		//R result(nn,nd);
		//return result;
		return R(nn, nd);
		//AnonymousObject
	}
	R mul(const R& r2){
		int nd = d*r2.d;
		int nn = n*r2.n;
		return R(nn,nd);
	}
	void show(){
		cout << n << '/' << d << endl;	
	}
	~R(){
		cout << "~R("<<n<<'/'<<d<<")"<<endl;	
	}
};

int main(){
	R a(2,5),b(3,4);
	a.add(b).show();
	cout << "-------------" <<endl;
	a.add(R(3,8)).show();
	cout << "-------------" <<endl;
	a.add(R(3)).show();
	cout << "-------------" <<endl;
	//a.add(3).show();
	cout << "=============" <<endl;
	a.mul(b).show();
	return 0;	
}
