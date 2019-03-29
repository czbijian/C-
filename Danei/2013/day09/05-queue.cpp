#include <iostream>
using namespace std;

typedef int T;
class Queue{
	T a[10];
	int cnt;
public:
	Queue():cnt(){
			
	}
	void push(const T& d){
		if(full())throw "队列满";
		a[cnt++] = d;		
	}
	void pop(){//依次迁移
		for(int i = 1; i < cnt; i++){
			a[i-1] = a[i];
		}
		--cnt;
	}
	T& front(){//队首
		return a[0];
	}
	T& back(){//队尾
		return a[cnt-1];
	}
	int size()const{
		return cnt;
	}
	int max_size()const{
		return sizeof(a)/sizeof(*a);
	}
	bool empty(){
		return cnt == 0;
	}
	bool full(){
		return cnt == 10;
	}
};

int main(){
	int n;
	Queue q;
	cout << "请输入不超过10个整数:" << endl;
	while(cin >> n){//知道输入读取失败为止，ctrl+D终止输入
		//cout << n << endl;
		q.push(n);
	}
	while(!q.empty()){
		cout << q.front() << ' ';	
		q.pop();
	}
	cout << endl;
	return 0;	
}

