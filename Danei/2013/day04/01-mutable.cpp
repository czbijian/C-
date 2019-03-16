#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class A{
	int* a;
	int len;
public:
	//zero initialization
	A(int n, int init=0):a(new int[n]),len(n),cur(){
		for(int i = 0; i < n; i++){
			a[i] = init;
		}
		len = n;
	}
	~A(){
		delete[] a;
		a = NULL;
	}
	void set(int idx, int val){
		a[idx] = val;	
	}
	int get(int idx)const{
		return a[idx];
	}
	void randfill(){
		srand(time(NULL));
		for(int i = 0; i < len; i++){
			a[i] = rand()%100;
		}	
	}
	int size()const{//const means that the member variable value will not be modified
		return len;	
	} 
	int next()const{
		return a[cur++%len];	
	}
	mutable int cur;//Data allowed to be modified inside the const object

};

void use(const A& x){
	cout << x.size() << endl;
	for(int i = 0; i < 3; i++){
		cout << x.next()<<' ';
	}
	cout << endl;
	for(int i = 0; i < 5; i++){
		cout << x.next()<<' ';
	}
	cout << endl;
	for(int i = 0; i < 4; i++){
		cout << x.next()<<' ';
	}
	cout << endl;

}


int main(){
	A x(10);
	x.randfill();
	for(int i = 0; i < x.size(); i++){
		cout << x.get(i) << ' ';
	}
	cout << endl;
	use(x);
	return 0;
}
