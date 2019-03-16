//[]()->=type
#include <iostream>
#include <cstring>
using namespace std;

class S{
	char* p;
	int len;
	S(const S);
public:
	S(const char* str=""){
		len = strlen(str);
		p = new char[len+1];
		strcpy(p, str);
	}
	~S(){
		delete[] p;
		p = NULL;
	}
};


int main(){
	S a;
	S c;
	c = a;
	
}
