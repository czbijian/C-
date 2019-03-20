#include <iostream>
#include <string>
using namespace std;

class Animal{
	string name;
	char gender;
public:
	virtual void eat(){
		cout << "animal eat food" << endl;	
	}
	void sleep(){
		cout << "animal sleep" << endl;	
	}
	virtual	void shout(){
		cout << "animal shout" << endl;	
	}	
};

class Cat:public Animal{
public:	
	void eat(){
		cout << "The cat eat cat food" << endl;	
	}
	void shout(){
		cout << "The cat howling" << endl;	
	}
};

class Dog:public Animal{
public:
	void eat(){
		cout << "The dog eat bones" << endl;	
	};
	void sleep(){
		cout << "The dog sleep" << endl;	
	}
	void shout(){
		cout << "The dog braking" << endl;	
	}
};

class Jiafei:public Cat{
public:
	void eat(){
		cout << "jiafei eat spaghetti" << endl;	
	}
	void shout(){
		cout << "jiafei speak" << endl;	
	}
};
class Person{
public:
	void play(Animal &a){
		a.sleep();
		a.eat();
		a.shout();
	}
};
int main(){
	Dog d;
	Jiafei j;
	Person p;
	p.play(d);
	p.play(j);
	cout << sizeof(Animal) << endl;
	return 0;	
}
