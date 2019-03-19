#include <iostream>
#include <string>
using namespace std;

class Person{
	string name;
public:
	const string& getName(){
		return name;	
	}
	Person(const char* n):name(n){
		cout << "Person(" << n << ")" << endl;	
	}
	~Person(){
		cout << "~Person()" << endl;	
	}
	void show(){
		cout << "hello everyone , I am " << name << endl;
	}
};

class Teacher:public Person{
	string course;
public:
	Teacher(const char* n, const char* c):course(c),Person(n){
		cout << "Teacher(" << n << "," << c << ")\n";	
	}
	~Teacher(){
		cout << "~Teahcer()" << endl;	
	}
	void show(const char* c){
		cout << c << " hello,I am " << course << "class Teacher " << getName() << ",we learn together"<< endl;			
	}
};

int main(){
	Person b("furong");
	Teacher a("yalaoshi","c");
	b.show();
	a.show("csd1212");
	a.Person::show();
	return 0;	
}
