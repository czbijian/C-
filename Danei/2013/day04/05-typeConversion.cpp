#include <iostream>
#include <string>
using namespace std;

class P{
	string name;
	int age;
	float salary;
public:
	P(const char* n, int a, float s)
	:name(n),age(a),salary(s){//names not listed in order
	}
	operator double(){//The parameter is current object,no return value.
		return salary;
	}
	operator int(){
		return age;	
	}
	operator string(){
		return name;	
	}
};

int main(){
	P a("furong",18,80000);
	string info = a;//(string)a,a.operator string()
	double money = a;//(double)a,a.operator double()
	int age = a;//(int)a,a.operator int()
	cout << info << ',' << money << ',' << age << endl;
	return 0;	
}
