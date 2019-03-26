#include <iostream>
using namespace std;
#include <cstring>
#include <string>
template<typename T>
T* find(T a[], int n, T d){
	for(int i = 0; i < n; i++){
		if(d == a[i])
			return a+i;
	}
	return NULL;
}
template<>//针对c风格字符串数组的特化
const char** find(const char* a[],int n, const char* d){
	for(int i = 0; i < n; i++){
		if(strcmp(a[i],d) == 0)
			return a+i;
	}	
	return NULL;
}
struct Date{
	int year;
	int month;
	int day;
	bool operator==(const Date& d){
		return year==d.year&&month==d.month&&day==d.day;	
	}
	friend ostream& operator<<(ostream& o, const Date& d){
		return o << d.year<< '-' << d.month << '-' << d.day;
	}
};

int main(){
	char ac[5] = {'A','B','C','D','E'};	
	double ad[4] = {2.2,3.3,1.1,4.4};
	string as[4] = {"good","afternoon","every","one"};
	const char* ap[4]= {"how","are","you","doing"};
	Date at[3] = {{2012,12,21},{2008,8,8},{2013,1,30}};
	cout << *find(ac,5,'E') << endl;
	cout << *find(ad,4,3.3) << endl;
	cout << *find(as,4,string("good"))<< endl;
	cout << *find(ap,4,"you") << endl;
	Date today={2013,1,30};
	cout << *find(at,4,today) << endl;
}
