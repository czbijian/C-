#include <iostream>
using namespace std;

template<typename T=int, int N=10>
class Array{
	T a[N];
public:
	T& operator[](int index){//重载
		return a[index];	
	}
	const T& operator[](int i)const{
		return a[i];	
	}
	void fill(T start, const T& step){
		for(int i = 0; i < N; i++,start+=step){
			a[i] = start;	
		}	
	}
	template<typename A, int M>//友元函数模板
	friend ostream& operator<<(ostream& o,const Array<A,M>& x);
			

};
template<typename T, int N>
ostream& operator<<(ostream& o, const Array<T,N>& x){
	o << "[ " ;
	for(int i = 0;  i < N; i++){
		o << x[i] << ' ';
	}
	o << "]";
	return o;
}

int main(){
	Array<int , 5>a1;
	a1.fill(11,2);
	cout << a1 << endl;
	Array<char> a2;//元素个数默认为10
	a2.fill('a',1);
	cout << a2 << endl;
	Array<> a3;//元素类型默认int，个数默认是10
	a3.fill(100,-1);
	cout << a3 << endl;
}
