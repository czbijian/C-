#include <iostream>
using namespace std;
#include <string>

class Person{
private:
	string name;
	int year;
public:
	void birth(string n, int y);
	void show();
};

void Person::birth(string n, int y){
	name = n;
	year = y;
}

void Person::show(){
	cout<<"I am "<<name<<",I am "<<2019-year<<" years old"<<endl;
}

int main(){
	Person a,b;
	a.birth("furong",1991);
	b.birth("james",1989);
	a.show();
	b.show();
	
	return 0;	
}
