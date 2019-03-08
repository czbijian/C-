#include <iostream>
using namespace std;

void show(int n)
{
	cout<<"Integer:"<<n<<endl;	
}

void show(double d)
{
	cout<<"Decimal:"<<d<<endl;
}
void show(int n, int m)
{
	cout <<"One pair of Integers:"<<n<<','<<m<<endl;	
}

struct Person{
	char name[20];
	char gender;
};
void show(Person p)
{
	cout<<"a "<< (p.gender=='M'?"man":p.gender=='F'?"women":"saucerman")
	<<",name :"<< p.name << endl;
}
int main()
{
	show(123);
	Person fj={"fengjie",'N'};
	show(fj);
	show(45.6);
	show(78,90);
	show(0.1F);
	return 0;
}
