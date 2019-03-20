#include <iostream>
using namespace std;

class Person{
public:
	virtual void show(){}
};

class Teacher:public Person{
	
};
class Student:public Person{
	
};
class CppTeacher:public Teacher{
	
};
class Computer{
public:
	void start(){}
};
class Notebook:public Computer{
	
};
class Company{
public:	
	void test(Person* p){
		cout << "------------------" << endl;
		Student* p1 = dynamic_cast<Student*>(p);
		if(p1){
			cout << "is a student" << endl;	
		}
		Teacher* p2 = dynamic_cast<Teacher*>(p);
		if(p2){
			cout << "is a teacher" << endl;	
		}
		CppTeacher* p3 = dynamic_cast<CppTeacher*>(p);
		if(p3){
			cout << "is a c++ teacher" << endl;	
		}
	}
};

int main(){
	Computer* c = new Notebook;
	//dynamic_cast<Notebook*>(c);//error,have no virtual function
	Person* ps = new Student();
	Person* pt = new Teacher();
	Person* pc = new CppTeacher();
	Company terena;
	terena.test(pc);
	terena.test(ps);
	terena.test(pt);
}
