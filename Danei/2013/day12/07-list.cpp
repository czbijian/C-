#include <iostream>
#include <list>
using namespace std;

template<typename T>
void print(T begin, T end){
	while(begin!= end)
		cout << *begin++ << ' ' ;
	cout << endl;
}
bool odd(int d){
	return d&1;//判断是否为奇数	
}
int main(){
	int a[10] = {5,2,7,7,7,9,1,7,8,6};
	list<int> li(a, a+10);
	print(li.begin(), li.end());
	li.unique();//去掉相邻重复元素
	print(li.begin(), li.end());
	li.remove(7);//去掉所有等于7的元素
	print(li.begin(), li.end());
	li.sort();//从小到达排序（用<比较)
	print(li.begin(), li.end());
	li.reverse();//逆序，注意不是reserve.
	print(li.begin(), li.end());
	li.remove_if(odd);
	print(li.begin(), li.end());
	li.push_front(12);
	li.push_back(34);
	li.insert(++++li.begin(),2,5);
	print(li.begin(), li.end());
	int b[5] = {3,6,2,9,7};
	list<int> l2(b, b+5);
	li.splice(----li.end(),l2,++l2.begin(),--l2.end());
	cout << "li: ";print(li.begin(), li.end());
	cout << "l2: ";print(l2.begin(),l2.end());	
	li.sort();l2.sort();
	cout << "li: ";print(li.begin(), li.end());
	cout << "l2: ";print(l2.begin(),l2.end());	
	li.merge(l2);
	cout << "li: ";print(li.begin(), li.end());
	cout << "l2: ";print(l2.begin(),l2.end());	
}
