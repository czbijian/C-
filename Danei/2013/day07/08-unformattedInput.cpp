#include <iostream>
using namespace std;
#include <string>

int main(){
	char a,b,c,d,e,f;
	cout << "please enter some characters" << endl;	
	//input:123456789
	a = cin.get();//1
	cin.get(b);//2
	cin.ignore();//ignore 3
	cin.get(c);//4
	d = cin.peek();//5
	cin.get(e);//5
	cin.putback(e);//5<-
	cin.get(f);//5
	cout << a << b << c << d<< e << f << endl;
}
