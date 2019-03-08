#include <iostream>
using namespace std;

inline int max(int a, int b){
	return a<b?b:a;	
}

int main(){
	int x = 10;	
	int y = 20;
	int z = max(x,y);//Request to embed the code of the max function here,
	//but the compiler does not necessarily perform inline
	cout << z << endl;
}
