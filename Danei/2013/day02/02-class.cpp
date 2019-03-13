#include <iostream>
using namespace std;

struct sDate{//All members are public by default.
	int year;
	int month;
	int day;
	void set(int y, int m, int d){
		year = y, month = m, day = d;	
	}
	void print(){
		cout<<year<<'-'<<month<<'-'<<day<<endl;	
	}
};

class cDate{//Default is private
	int year;
	int month;
	int day;
public://The following features are public
	void set(int y, int m, int d){
		year = y, month = m, day = d;	
	}
	void print(){
		cout<<year<<'-'<<month<<'-'<<day<<endl;	
	}
};

int main()
{
	sDate s;//define(create) an object
	cDate c;
	s.set(2012,12,21);//use object
	c.set(2013,1,17);
	s.print();
	c.print();      
}
