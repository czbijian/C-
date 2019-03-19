#include <iostream>
using namespace std;

class Person{
	string name;
	bool gender;
public:
	Person(const char* n, bool g):name(n),gender(g){
		
	}
	void show()const{
		cout << "hello, I am " << (gender?"man":"woman") << name << endl;
	}
	const string& Name()const{
		return name;	
	}
};

class Teacher:public Person{
	string course;
public:
	Teacher(const char* n, const char* c,bool g):Person(n,g),course(c){
	}
	void show()const{
		cout << "hello everyone ,I am Teacher "<<Name()<< " for " << 
		course<<",please learn "<<course <<endl;
	}
};

int main(){
	Person* p = new Teacher("yanglaoshi","c",true);
	p->show();
	delete p;
}
