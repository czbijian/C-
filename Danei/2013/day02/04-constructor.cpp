#include <iostream>
using namespace std;

class Cat{
	string name;
public:
	Cat(){
		cout<<"call Cat()"<<endl;	
	}
	Cat(const char* n){
		name = n;
		cout << n << " cat get out"<<endl;
	}
	void show(){
		cout << "I am "<<name<<endl;	
	}
};

class Dog{
	string name;
public:
	Dog(){
		cout << "call Dog()"<< endl;	
	}
	Dog(string n){
		name = n;
		cout << n << " dog get out"<<endl;
	}
};

int main(){
	cout << "--------------"<< endl;
	Cat c;//Automatically call a no-argument constructor
	cout << "=============="<< endl;
	Dog d;
	cout << "............." << endl;
	//Automatically call constructor with string argument
	Cat c2("jiafei");
	Dog d2("guifei");
	return 0;
}
