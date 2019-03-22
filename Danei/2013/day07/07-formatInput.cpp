#include <iostream>
using namespace std;
#include <cctype>
istream& func(istream& i){
	cout << "Exclude non-numberic characters" << endl;
	char c;
	do
		i>>c;
	while(!isdigit(c));//take away non-numberic characters
	i.putback(c);//reback a character
	return i;//
}

int main(){
	//cin >> func;
	int n = -1;
	cin >> func;
	cin >> n;
	cout << "n= " << n <<endl;
	return 0;	
}
