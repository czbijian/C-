#include <iostream>
#include <cstring>
using namespace std;

namespace james{
	struct Student{
		char name[20];
		int age;
		void show(){
			cout<<age<<"year old "<<name<<" easy to get c++"<<endl;
		}
	};
}

int main(){
	james::Student s1= {"furong",18};
	using namespace james;
	Student s2;
	strcpy(s2.name,"quange");
	s2.age = 20;
	s1.show();
	s2.show();
	union {
		int x;
		char y[4];
	};//Anonymous union
	x = 0x61626364;
	cout << y[0] << endl;
	y[1] = '0';//ascii 0x30
	//hex:hexadecimal   showbase:with prefix 0x
	cout <<hex<<showbase<< x << endl;

	return 0;
}
