#include <iostream>
using namespace std;

int main(){
	char buf[10];
	cin.getline(buf,10);
	cout << buf;
	if(!cin){
		cin.clear();
		string str;
		getline(cin,str);
		cout << "[E]" << str;
	}
	cout << endl;
	return 0;	
}
