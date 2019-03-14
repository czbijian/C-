#include <iostream>
using namespace std;
#include <string>

class CSD1212Stu{
	string name;	
	//bool gender;
	static string teacher;
public:
	CSD1212Stu(const string& n){
		name = n;
	}
	void listen(){
		cout << name << " is listening " << teacher << endl;
	}
	static void changeTeacher(const string& s){
		teacher = s;
	}
};

string CSD1212Stu::teacher = "teacher yang";

int main(){
	CSD1212Stu s1("zhangsan");
	CSD1212Stu s2("lisi");
	s1.listen();
	s2.listen();
	cout<<"============================"<<endl;
	CSD1212Stu::changeTeacher("quange");
	s1.listen();
	s2.listen();
}
