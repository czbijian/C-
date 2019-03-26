#include <iostream>
using namespace std;
template< typename T>//模板头，T是模板形参
class Stack{//类模板，只有实例化的产品才是类。
	T a[10];	
	int cnt;
public:
	Stack():cnt(){}//零初始化
	void push(const T& d){
		a[cnt++] = d;	
	}
	T& top(){
		return a[cnt-1];
	}
	void pop(){
		--cnt;	
	}
	bool empty()const{
		return cnt==0;
	}
	int size()const{
		return cnt;
	}
	bool full()const{
		return cnt==10;	
	}
};
int main(){
	Stack<int> si;//int是模板实参
	Stack<const char*> ss;//类模板必须人为实例化
	si.push(1);
	si.push(2);
	si.push(3);
	si.push(4);
	ss.push("hello");
	ss.push("for");
	ss.push("csd1212");

	while(!si.empty()){
		cout << si.top() << ' ';
		si.pop();
	}
	cout << endl;
	while(!ss.empty()){
		cout << ss.top() << ' ';
		ss.pop();
	}
	cout << endl;
}
