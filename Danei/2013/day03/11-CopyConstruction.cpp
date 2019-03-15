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
		cout<<a<<" create array "<<len<<" elements "<<init<<endl;
	}
	~A(){
		cout<<" release array "<<a<<endl;
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
	A(const A& r){
		len = r.len;
		a = new T[len];
		for(int i = 0; i < len; i++){
			a[i] = r.a[i];	
		}
		cout << a << " create array copy "<< r.a << endl;
	}
};

A filter(A arr){//Filter the even numbers in the array and return original array.
	for(int i = 0; i < arr.size(); i++){
		if(arr.at(i)%2 == 0){
			cout << arr.at(i) << ' ';	
		}
	}	
	cout << endl;
	return arr;
}

int main(){
	A x(20);
	x.fill(11,1);
	x.print();
	filter(x).print();
	return 0;	
}
