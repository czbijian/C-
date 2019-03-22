#include <iostream>
#include <sstream>//strstream,stringstream
using namespace std;

class Person{
	string name;
	int age;
	int tall;
	double weight;
public:
	Person(){}
	friend ostream& operator<<(ostream& o,const Person& p){
		o << "I am " << p.name << ",I am "<< p.age << " years old!" <<
		" height: " << p.tall << ", weight: " << p.weight << ".";
		return o;
	}	
	friend istream& operator>>(istream& i,Person& p){
		i >> p.name >> p.age >> p.tall >> p.weight;
		return i;
	}
	
};

int main(){
	string s1 = "furong 18 165 123.5";
	Person a;
	istringstream in(s1);	//字符串输入流对象
	in >> a;
	ostringstream out;		//字符串输出流对象
	out << a << endl;		//把输出送到字符串输出流中
	string s2 = out.str();	//取得字符串
	cout << s2;
}
