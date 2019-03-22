#include <iostream>
using namespace std;
#include <fstream>

int main(){
	fstream fio("myfile",ios::in|ios::out);	
	if(!fio){
		cerr << "打开文件失败" << endl;
		return 1;
	}
	//abcdefghijklmnopqrstuvwxyz
	//      *  *----*--*
	char b7[3],b15[3];
	fio.seekg(6);//g，get读取
	fio.read(b7,sizeof(b7));
	fio.seekg(5,ios::cur);
	fio.read(b15,sizeof(b15));
	fio.seekp(-3,ios::cur);//p,put
	fio.write(b7,sizeof(b7));
	fio.seekp(6,ios::beg);
	fio.write(b15,sizeof(b15));
	fio.close();
}

