#include <iostream>
using namespace std;
#include "list.h"

typedef int T;
class Queue:private List{//用非公开继承或者组合
public:
	void push(const T& d){
		push_back(d);	
	}
	void pop(){
		pop_front();	
	}
	T& front(){
		return List::front();	
	}
	T& back(){
			
	}
	int size()const{
		return 	List::size();
	}
	int max_size(){
		return -1u/sizeof(T);	
	}
	bool empty(){
		return size()==0;	
	}
	bool full(){
		return false;	
	}
};


int main(){
	Queue q;
	q.push(11);
	q.push(22);
	q.push(33);
	q.push(44);
	q.push(44);
	q.push(55);
	q.push(66);
	while(!q.empty()){
		cout << q.front() << ' ';
		q.pop();
	}
	cout << endl;
}
