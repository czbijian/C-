#include <iostream>
using namespace std;
#include <string>

template < typename T>
void sort(T a[], int n){
	for(int i = 0;i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[i]<a[j])
				swap(a[i],a[j]);	
		}	
	}
}
template< typename T>//模板头，T为模板参数
void print(T a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
	cout << endl;
}

int main(){
	int ai[6] = {8,1,6,9,3,5};
	char ac[5] = {'d','x','s','a','m'};
	double ad[5] = {5.5,3.3,9.9,6.6,2.2};
	string as[4] = {"good","morning","dear","friend"};
	sort(ai,6);print(ai,6);
	sort(ac,5);print(ac,5);
	sort(ad,5);print(ad,5);
	sort(as,4);print(as,4);
	
}
