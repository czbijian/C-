//[]()->=type
#include <iostream>
#include <cstring>
using namespace std;

class S{
	char* p;
	int len;
private:
	S(const S& x);//private copy construction,coping is prohibited
public:
	S(const char* str=""){
		len = strlen(str);
		p = new char[len+1];
		strcpy(p, str);	
	}
	~S(){
		delete[] p;
		p = NULL;
	}
	S& operator=(const S& x){
		if(&x == this)
			return *this;
		len = x.len;
		delete[] p;
		p = new char[len+1];//open up new dynamic memory for p
		strcpy(p, x.p);//copy the string in dynamic memory
		return *this;
	}
	friend ostream& operator<<(ostream& o, const S& x){
		return o << x.p;//return o;
	}
	char& operator[](int idx){
		return p[idx];
	}
};


int main(){
	S a, b("furong");//是初始化，不是赋值。
	S c;
	c = a = b;//c.operator=(a)
	cout << a << ',' << b <<',' << c << endl;
	b = b;
	cout << a[3] << endl;
	a[1] = 'o';
	cout << a << endl;
	return 0;
}
