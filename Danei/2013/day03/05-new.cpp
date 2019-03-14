#include <iostream>
using namespace std;

class File{
	string path;
public:
	File(const string& path = "noName"):path(path){
	//The first one is a member,The second is a Formal parameter
		cout << "create file " << path << endl;
	}
};

int main(){
	File* p1 = new File;	
	File* p2 = new File("/etc/passwd");
	File* p3 = new File[3];

	delete[] p3; p3 = NULL;
	delete p1; p1 = NULL;
	delete p2; p2 = NULL;
	return 0;
}

