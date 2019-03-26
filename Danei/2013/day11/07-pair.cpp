#include <iostream>
using namespace std;
#include <string>
template < typename K, typename V>
struct Pair{
	K first;
	V second;
	void show(){
		cout << "normal(" << first << ',' << second << ")" << endl;	
	}
};

template <typename K>//部分特殊化
struct Pair<K, const char*>{
	K first;	
	string second;
	void show(){
		cout << "2cstr(" << first << ','<< second << ")" << endl;	
	}
};
template<typename V>
struct Pair<const char* , V>{
	string first;
	V second;
	void show(){
		cout << "1cstr(" << first << '-'<<  second << ")" << endl;	
	}
};
template<>//全特化
struct Pair<const char*,const char*>{
	string first;
	string second;
	void show(){
		cout << "all cstr" << endl;	
	}
};
template<typename K, typename V>
Pair<K,V> makepair(K x, V y){//函数模板
	Pair<K,V> pkv = {x,y};
	return pkv;
}

int main(){
	Pair<int, double> pid = {3,5.5};
	Pair<int, const char *> pic = {10, "hello"};
	Pair<const char*, double > pix = {"nihao", 1.1};
	Pair<const char*, const char*>pcc = {"haha","hehe"};
	pid.show();
	pic.show();
	pix.show();
	pcc.show();
	cout << "-------" << endl;
	makepair(12345,'$').show();
	makepair(1.2,"good").show();
	makepair("afternoon",888).show();
	makepair("hello","world").show();
}
