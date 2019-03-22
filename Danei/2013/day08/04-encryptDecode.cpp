#include <iostream>
using namespace std;
#include <fstream>
#include <cstring>

int main(int argc, char* argv[]){
	
	if(argc != 3){
		cout <<*argv << " -c|-d filename"<< endl;
		return 0;
	}
	fstream f(argv[2], ios::in|ios::out);
	if(!f){
		cerr << "open file fail" << endl;	
		return -1;
	}
	char c;	
	if(!strcmp(argv[1], "-c")){
		while(f.get(c)){
			f.seekp(-1,ios::cur);
			f.put(~c+66);
		}
	}
	else if(!strcmp(argv[1],"-d")){
		while(f.get(c)){
			f.seekp(-1,ios::cur);
			f.put(~(c-66));
		}
	}else{
		cout << "Invalid option,only -c or -d" << endl;
		return 0;
	}
	f.close();
	return 0;	
}
