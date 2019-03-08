#include <iostream>
using namespace std;

struct Date{
	int year;	
	int month;
	int day;
	void print(){
		cout<<year<<'='<<month<<'-'<<day<<endl;	
	}
};

void sort(Date a[], int n, int Date::*p){
	for(int i = 0; i < n; i++){
		for(int j =i+1;j<n;j++){
			if(a[i].*p < a[j].*p){
				swap(a[i],a[j]);	
			}	
		}	
	}	
}

int main(){
	int Date::*p = &Date::year;
	Date a={2013,1,16},b={2008,8,8};
	cout<<a.*p <<','<<b.*p<<endl;
	p = &Date::day;
	cout<<a.*p <<','<<b.*p<<endl;
	
	Date x[4] = {a,b,{1970,1,1},{2012,12,21}};
	cout<<"sort by year:"<<endl;
	sort(x,4,&Date::year);
	for(int i = 0; i < 4; i++)
		x[i].print();
	cout << endl;
	cout<<"sort by month:"<<endl;
	sort(x,4,&Date::month);
	for(int i = 0; i < 4; i++)
		x[i].print();
	cout << endl;
	return 0;
}
