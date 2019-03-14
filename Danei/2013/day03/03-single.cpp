#include <iostream>
using namespace std;
#include <string>

class ChairMan{
	ChairMan(string name){
		this->name = name;	
	}
public:
	string name;
	static ChairMan& getInstance(){
		static ChairMan cm("XiZhuXi");
		return cm;
	}
	void show(){
		cout << "Hello to Comrades,I am ChairMan "<<name<<endl;	
	}	
};

int main(){
	ChairMan& c = ChairMan::getInstance();
	c.show();
	c.name = "furong";
	c.show();
	return 0;	
}
