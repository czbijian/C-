#include <iostream>
using namespace std;
#include <exception>
#include <new>
#include <cstdio>

class A{
	int *p;
	int len;
public:
	explicit A(int n)throw(){
		p = new(nothrow) int[n];
		len = n;
	}
	int& operator[](int index){
		if(index < 0)throw NegIndex(index);
		if(index>=len)throw OutOfRange(index);
		if(p == NULL)throw MemoryException();
		return p[index];
	}
	class NegIndex:public exception{
		int i;
	public:	
		NegIndex(int index)throw():i(index){
			
		}
		const char* what() const throw(){
			static char buf[100];
			sprintf(buf,"Negative subscript anomaly %d",i);
			return buf;
		}
	};
	class OutOfRange:public exception{
		int i;
	public:	
		OutOfRange(int index)throw():i(index){
			
		}
		const char* what() const throw(){
			static char buf[100];
			sprintf(buf,"subscript out of bounds anomaly %d",i);
			return buf;
		}
	};
	class MemoryException:public exception{
	public:
		const char* what()const throw(){
			return "Not enough storage";	
		}
	};
};

int main(){
	A x(10);
	x[0] = 5, x[3] = 10, x[8] = 20;
	cout << x[3]*x[0]*x[8] << endl;
	//cout << x[-5] << endl;
	cout << x[20] << endl;
	return 0;
}
