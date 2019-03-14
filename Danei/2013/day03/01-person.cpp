#include <iostream>
using namespace std;
#include <string>

//int thisyear;
class Person{
	static int thisyear;//static member.
 	string name;
	int year;
	bool gender;
	Person* lover;
public:
	Person(const string& name,bool gender){
		//thisyear = ...;Static members should not be initialized in the construct
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
	static void timefly(int y){
		thisyear = y;
	}
};
	int Person::thisyear = 1990;//Static member variable initialization
int main(){
	Person::timefly(1990);
	Person a("lizhao",true);
	Person::timefly(1992);
	Person b("furong",false);
	Person::timefly(2019);
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

