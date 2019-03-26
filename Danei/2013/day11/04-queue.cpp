#include <iostream>
using namespace std;
#include <string>

template<typename T, int N>//模板头，N是一个模板形参，N是非类型形参
class Queue{
	T a[N];//非类型形参一般是整形常量
	int cnt;
public:
	Queue():cnt(){}	
	Queue& push(const T& d){
		if(cnt >=N)
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
		return cnt == N;	
	}
	int size(){
		return cnt;	
	}
};

int main(){
	Queue<int,10> qi;
	Queue<string,20> qs;
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
