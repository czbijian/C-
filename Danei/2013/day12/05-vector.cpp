#include <iostream>
using namespace std;
#include <vector>
template<typename It>
void print(It b, It e){
	while(b!=e)
		cout << *b++ << ' ';
	cout << endl;
}

int main(){
	vector<int> vi(5);//5个0
	vi.reserve(11);//事先分配n个元素的容量
	vi.resize(8,1);//调整成8个元素，新增3个位1
	vi[3] = 123;
	vi.at(5) = 456;
	print(vi.begin(), vi.end());
	for(int i = 0; i < vi.size(); i++){
		cout << vi[i] << ' ';	
	}
	cout << endl;
	cout << "size:" << vi.size() << ",  capacity:" << vi.capacity() << endl;
	for(int i = 0; i < 5; i++){
		vi.push_back(8);
		cout << "size:" << vi.size() << ",  capacity:" << vi.capacity() << endl;
	}

	return 0;	
}
