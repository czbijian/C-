#include <iostream>
using namespace std;
#include <cstdio>
template<typename T>
void print(T& d){
//	cout <<"============" << endl;
	cout << d << ' ';	
}

template<typename T>
void print(const T* p){//重载模板
//	cout << "------------" << endl;
	print(*p);	
}
template <>//对于c风格字符串的特殊化
void print<const char *>(const char* s){//全特化
	cout << s << ' ';	
} 
template<typename T, int N>//非类型形参
void print(T(&a)[N]){//用于数组的偏特化版本
	for(int i=0; i < N; i++){
		print(a[i]);
	}	
	cout << endl;
}
int main(){
	int x = 123;	
	int a[5] = {1,2,3,4,5};
	int b[3][2] = {11,22,33,44,55,66};
	print(a);
	print(b);
	print("hello");
//	print(x);
//	cout << "++++++x+++++" << endl;
//	print(&x);
//  cout << "++++++y+++++" << endl;
//	print(a);	
}
