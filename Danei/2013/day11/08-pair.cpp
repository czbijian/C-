#include <iostream>
using namespace std;
#include <cstring>
template<class K, class V>
struct Pair{
	K first;
	V second;
public:
	Pair():first(),second(){
			
	}
	template<class F, class Q>//模板构造函数
	Pair(const F& x,const Q& y):first(x),second(y){
		
	}
	template<typename F, typename Q>//成员函数模板
	Pair& operator=(const Pair<F, Q>& p){
		first = p.first;
		second = p.second;
		return *this;
	}
	friend ostream& operator<<(ostream& o, const Pair&p){
		o << '(' << p.first << ',' << p.second << ')';
	}
};

int main(){
	Pair<int, double> pid(1, 2.3);
	Pair<char, int> pci('a',45);
	cout.setf(ios::showpoint);
	cout << pid << pci << endl;
	pid = pci;
	cout << pid << endl;
	char a[10] = "aa", b[10] = "oo";
	Pair<const char*, const char *> pcc(a,b);
	Pair<string, string> pss;
	pss = pcc;
	cout << pcc << pss << endl;
	strcpy(a,"furong");
	strcpy(b,"zhangpeng");
	cout << pcc << pss << endl;
	return 0;	
}
