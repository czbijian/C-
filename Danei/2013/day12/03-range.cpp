#include <iostream>
using namespace std;
#include <list>
#include <algorithm>

int main(){
	int a[10] = {8,6,9,1,5,2,7,3,6,5};
	list<int> li(a,a+6);
	sort(a,a+10);
	list<int>::iterator it = li.begin();
	list<int>::iterator ie = li.end();
	for(int i = 0; i < 10; i++){
		cout << a[i] << ' ';
	}
	cout << endl;
	while(it!=ie)
		cout << *it++ << ',';
	cout << endl;
}
