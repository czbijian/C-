#include <iostream>
using namespace std;
#include <vector>
#include <cstring>

template<typename P>
void print(P beg, P end){
	while(beg != end){
		cout << *beg++ << ' ';
	}	
	cout << endl;
}


int main(){
	const char* we = "csd1212";
	vector<char> vc(we,we+strlen(we));
	print(vc.begin(), vc.end());
	print(vc.rbegin(), vc.rend());

	vector<char> v2 = vc;
	vc.insert(++++++vc.begin(),'0');
	vc.insert(++++++vc.begin(),1,'2');
	print(vc.begin(), vc.end());
	const char *s = "20";
	print(v2.begin(),v2.end());
	v2.insert(++++++v2.begin(),s,s+2);
	print(v2.begin(), v2.end());

	vector<char> v3(5,'*');
	print(v3.begin(),v3.end());
	v3.resize(8,'$');
	print(v3.begin(),v3.end());
	v3.assign(6,'~');
	print(v3.begin(),v3.end());
	v3.assign(++v2.begin(), --v2.end());
	print(v3.begin(),v3.end());
	v3.push_back('2');
	print(v3.begin(),v3.end());
	cout << "front:" << v3.front() << endl;
	cout << "back:" << v3.back() << endl;

	return 0;
}
