#include <iostream>
using namespace std;

template<typename T, int N>
class A{
public:
	void show()const{
		cout << "generic" << endl;	
	}
	static const int v = A<T, N-1>::v+N;
};
template <typename T>
class A<T, 0>{//对非类型形参N的特化
public:
	void show()const{
		cout << "generic0" << endl;
	}
	static const int v = 0;
};
template<int N>
class A<double, N>{//对类型形参T的特化
public: 
	void show()const{
		cout << "double" << N << endl;	
	}
};
template<typename T, int N>
class A<T*, N>{//为指针类型做偏特化
public:
	void show()const{
		cout << "pointer" << endl;	
	}
};
template<>
class A<long, 8>{//全特化版本
public:
	void show()const{
		cout << "long 8" << endl;	
	}
};
int main(){
	cout << A<int, 10>::v << endl;
	A<int, 10>().show();
	A<double,3>().show();
	A<char,0>().show();
	A<short*,5>().show();
	return 0;
}
