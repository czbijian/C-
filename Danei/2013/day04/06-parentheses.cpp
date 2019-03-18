#include <iostream>
using namespace std;

class A{
	int *p;	
	int len;
public:
	A(int n, int v = 0):p(new int[n]),len(n){
		for(int i = 0; i < n; i++){
			p[i] = v;
		}	
	}
	void operator()(int start, int step){
		for(int i = 0; i < len; i++){
			p[i] = start + i*step;	
		}
	}
	int operator()(){
		int sum = 0;
		for(int i = 0; i < len; i++){
			sum += p[i];	
		}
		return sum;
	}
	friend ostream& operator<<(ostream& o,const A&x){
		for(int i = 0; i < x.len; i++){
			o << x.p[i] << ' ';	
		}	
		return o;
	}
};

int main(){
	A a(10);	
	a(5,1);//starting at 5, the step size if 1
	//a.operator()(5,1)
	cout << a << endl;
	cout << a() << endl;//a.operator()()
}
