#include <iostream>
using namespace std;
#include <typeinfo>
class Person{
	virtual void f(){//
		
	}	
};
class Student:public Person{
	
};

int main(){
	int a;
	double b;
	char c;
	Person d;

	cout << typeid(a).name()<<","<<typeid(b).name()<<','<<typeid(c).name()<<"\n";
	cout << typeid(d).name()<<endl;
	cout << typeid(Student).name() << endl;

	Person* e = new Student();
	cout << typeid(*e).name() << endl;
	cout << boolalpha << (typeid(*e) == typeid(Student)) << endl;
	return 0;	
}
