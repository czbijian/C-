#include <iostream>//io head file
using namespace std;
int main()
{
	cout << "hello "<< "world";//std is name space
	cout << ",welcome to c++" << "!" << endl;
	cout << "please input your name：";
	char name[20];
	cin >> name;
	cout << "Danei welcomes you,"<< name <<"\n";
	return 0;
}
