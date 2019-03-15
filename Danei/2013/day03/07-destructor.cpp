#include <iostream>
using namespace std;

class Buffer{
	string name;
public:
	Buffer(const string& filename):name(filename){
		cout << "A buffer is allocated for "<<filename <<endl;
	}
	~Buffer(){
		cout << "Clean up the buffer for "<< name << endl;	
	}
};

class File{
	string path;
	Buffer *p;
public:
	File(const string& path = "noName"):path(path),p(0){
	//The first one is a member,The second is a Formal parameter
		cout << this<<" create file " << path << endl;
	}
	~File(){//Destruction,called when the object is released
		cout << this<<' '<<path << " release" << endl;
		close();
	}
	void open(){
		p = new Buffer(path);	
	}
	void close(){
		delete p;
		p = NULL;
	}
};

int main(){
	File a("a");
	File* p2 = new File("/etc/passwd");
	a.open();
	p2->open();
	delete p2;
	p2 = NULL;
	
	return 0;
}

