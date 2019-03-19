#include <iostream>
using namespace std;
#include<string>

class Person{
	string name;
public:
	Person(const char* n):name(n){
		cout << "Person(" << n << ")\n";	
	}
	const string& Name() const{
		return name;	
	}
};

class Teacher:virtual public Person{
	string course;
public:
	Teacher(const char* n, const char* c):course(c),Person(n){
		cout << "Teacher(" << n << "," << c << ")\n";
	}
	void teach(const char* c){
		cout << "Teacher " << Name() << " teaches "<<c << " in " << course << " class"<<endl;	
	}
};

class Student:virtual public Person{
	string sid;
public:
	Student(const char* n, const char* s):sid(s),Person(n){
		cout << "Student(" << n << "," << s <<")\n";	
	}
	void listen(const char* room){
		cout << Name() << "is listening at " << room << endl;	
	}
};

class DoubleMan:public Student,public Teacher{
public:
	DoubleMan(const char* n, const char* c, const char* id):Teacher(n,c),Student(n,id),Person(n){
		cout << "DoubleMan("<< n <<","<< c <<","<<id<<")\n";
	}
};

int main(){
	DoubleMan a("quange","c++","bit123");
	a.teach("csd1212");
	a.listen("318");
	cout << "hello, " << a.Name() << endl;
	return 0;
}
