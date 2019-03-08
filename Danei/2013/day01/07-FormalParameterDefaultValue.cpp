#include <iostream>
using namespace std;

void show(const char* name, char gender='M');


int main()
{
	show("zhangsan");	
	show("lisi");
	show("wangtong",'F');
	show("xiaobao");
	show("fengjie",'N');
}

void show(const char* name, char gender/*='M'*/)
{
	cout << name << " is a " << (gender=='M'?"man":
	gender=='F'?"women":"saucerman")<< endl;
}
