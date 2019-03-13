#include <iostream>
using namespace std;
#include <string>

int thisyear;
class Person{
	string name;
	int year;
	bool gender;
	Person* lover;
public:
	Person(const string& name,bool gender){
		Person::name = name;
		year = thisyear;
		Person::gender = gender;
		lover = NULL;
	}
	void show(){
		cout<<"I am "<<(gender?"man ":"women ")<<name<<",I am "<<thisyear-year;
		if(lover)
			cout<<",Fall in love with "<<lover->name<<endl;
		else
			cout<<",Single"<<endl;
	}
	Person(){
		name = "NullName";
		cout<<"a NullName man get out"<<endl;
		cout<<"This is illegal and the procedure is terminated."<<endl;
		exit(0);
	}
	void love(Person& x){
		lover = &x;
		x.lover = this;
	}
	void fenshou(){
		lover = lover->lover = NULL;
	}
};
int main(){
	thisyear = 1990;
	Person a("lizhao",true);
	thisyear = 1992;
	Person b("furong",false);
	thisyear = 2013;
	a.show();
	b.show();
	b.love(a);
	a.show();
	b.show();
	b.fenshou();
	a.show();
	b.show();
	return 0;	
}

