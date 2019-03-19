#include <string>
#include <iostream>
using namespace std;

class Person{
protected://allow direct access in subclasses,not allowed anywhere else.
	string name;
public:
	void setname(const char* n){
		name = n;	
	}
	void eat(string food){
		cout << name << " eat "<< food << endl;	
	}
	void speak(string words){
		cout << name << " speack:\"" << words << "\"\n";	
	}		
};

class Teacher:public Person{
	string course;
public:
	void teach(string someclass){
		cout << name << " give " << course << " classes for " << someclass << " classes"<<endl;	
	}
	void setcourse(string c){
		course = c;	
	}
};

int main(){
	Person a;
	Teacher c;
	a.setname("furong");
	c.setname("quange");
	a.eat("fish");
	c.eat("noddle");
	a.speak("i can dance");
	c.speak("hello everyone is really good");
	c.setcourse("c++");
	c.teach("csd1212");

	return 0;	
}
