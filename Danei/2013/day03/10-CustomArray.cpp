#include <iostream>
using namespace std;

typedef int T;
class A{
	T* a;
	int len;
public:
	//zero initialization
	A(int n, T init=T()):a(new T[n]){
		for(int i = 0; i < n; i++){
			a[i] = init;
		}
		len = n;
		cout<<a<<" create array "<<len<<"elements "<<init<<endl;
	}
	~A(){
		cout<<"release array "<<a<<endl;
		delete[] a;
		a = NULL;
	}
	T& at(int idx){
		if(idx<0||idx>=len)
			throw idx;//Abnormal end procedure
		return a[idx];
	}
	int size(){
		return len;
	}
	void resize(int newsize, const T& val=T()){
		if(newsize <= len)
			len = newsize;
		else{
			T* np = new T[newsize];
			for(int i=0; i<len; i++)
				np[i] = a[i];
			for(int j=len; j < newsize; j++){
				np[j] = val;	
			}
			delete[] a;
			a = np;
			len = newsize;
		}
	}
	void print(){
		for(int i = 0; i < len; i++){
			cout << a[i] << ' ';	
		}	
		cout << endl;
	}
	void fill(const T& start, const T& step=T()){
		for(int i = 0; i < len; i++){
			a[i] = start + step*i;
		}	
	}
};


int main(){
	A x(20);
	x.at(3)=5;
	cout << x.size() << ":";
	x.print();
	A y(10,6);
	y.resize(20,9);
	cout << x.size() << ":";
	y.print();
	x.fill(10,2);
	y.fill(20,-1);
	x.print();
	y.print();
	return 0;	
}
