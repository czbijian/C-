#include <iostream>
using namespace std;
class Coder{
public:	
	virtual void code(char * input, char* output)=0;
	virtual void decode(char* input,char* output)=0;
};

class rm:public Coder{
public:
	void code(char* input, char* output){
		cout << "Encoding compression in rm format" << endl;
	}
	void decode(char* input, char* output){
		cout << "Decompress in rm format" << endl;	
	}
};

class divx:public Coder{
public:
	void code(char* input, char* output){
		cout << "Encoding compression in divx format" << endl;
	}
	void decode(char* input, char* output){
		cout << "Decompress in divx format" << endl;	
	}
};

class File{
	Coder *p;
public:
	void setcoder(Coder& c){
		p = &c;
	}
	void zip(){
		char* source = NULL,*result = NULL;
		p->code(source, result);
		cout << "save in file " << endl;
	}
	void unzip(){
		char* source = NULL,*result = NULL;
		p->decode(source,result);
		cout << "play a blockbuster" << endl;
	}
};
	
int main(){
	rm r;
	divx d;
	File f;
	f.setcoder(d);
	f.zip();
	f.unzip();
	f.setcoder(r);
	f.zip();
	f.unzip();
	return 0;
}
