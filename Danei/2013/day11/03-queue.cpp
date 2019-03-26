#include <iostream>
using namespace std;
#include <string>

template<typename T>
class Queue{
	T a[10];
	int cnt;
public:
	Queue():cnt(){}	
	Queue& push(const T& d){
		if(cnt >=10)
			throw "full";
		a[cnt++] = d;
		return *this;
	}
	T& front(){
		return a[0];	
	}
	T& back(){
		return a[cnt-1];	
	}
	void pop(){
		for(int i = 1; i < cnt; i++)
			a[i-1] = a[i];
		--cnt;
	}
	bool empty(){
		return cnt == 0;	
	}
	bool full(){
		return cnt == 10;	
	}
	int size(){
		return cnt;	
	}
};

int main(){
	Queue<int> qi;
	Queue<string> qs;
	qi.push(1).push(2).push(3).push(4);
	qs.push("nice").push("to").push("meet").push("you");
	while(qi.size()){
		cout << qi.front() << ' ';
		qi.pop();
	}
	while(qs.size()){
		cout << qs.front() << ' ';
		qs.pop();
	}
	cout << endl;
}	
