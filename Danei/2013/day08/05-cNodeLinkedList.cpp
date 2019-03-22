#include <iostream>
using namespace std;

typedef char T;
struct Node{
	T data;
	Node* next;
};

int main(){
	Node a = {'A'},b={'B'},c={'C'},d={'D'},e={'E'};
	a.next = &c;
	c.next = &b;
	b.next = &e;
	e.next = &d;
	Node* p = &a;
	while(p!=NULL){
		cout << p->data;
		p = (*p).next;
	}
	cout << endl;
}
