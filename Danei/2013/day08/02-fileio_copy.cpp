#include <iostream>
using namespace std;
#include <fstream>

int main(int argc, char* argv[]){
	if(argc!=3){
		cerr << "用法：" << argv[0] << "源文件 目标文件" << endl;
		return 0;
	}
	ifstream fin(argv[1]);
	ofstream fout(argv[2]);
	if(!fin||!fout){
		cerr << "打开文件失败" << endl;
		return 1;
	}
	char buf[1000];
	while(!fin.eof()){
		fin.read(buf,sizeof(buf));
		fout.write(buf,fin.gcount());
	}
	fin.close();
	fout.close();

	return 0;	
}
