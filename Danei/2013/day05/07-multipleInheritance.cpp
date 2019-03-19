#include <iostream>
using namespace std;
#include <string>

class Phone{
public:
	Phone(){
		cout << "Phone()" << endl;
	}
	void call(string num){
		cout << "打电话给" << num << endl;
	}
}; 

class Camera{
public:
	Camera(){
		cout << "Camera()" << endl;
	}
	void takePhoto(string target){
		cout << "照一张" << target << "照!\n"; 
	}
};

class CellPhone:public Phone,public Camera{//多重继承 
public:
//按照继承顺序调用父类构造函数 
	CellPhone():Camera(),Phone()//零初始化 
	{
		cout << "CellPhone()" <<endl; 
	}
};

int main(){
	CellPhone ok;
	ok.call("芙蓉");
	ok.takePhoto("风景"); 
	return 0;
}

