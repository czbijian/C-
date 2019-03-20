#include <iostream>
using namespace std;
#include <string>

class Graph{
	int x;
	int y;
public:
	Graph(int x, int y):x(x),y(y){
		
	}
	virtual double area()=0;//pure virtual function
	void show(){
		cout << Type() << " place(" << x << ',' << y << ')' << " area:" << area() << endl;
	}
	virtual string Type()=0;//pure virtual function
};

class Rect:public Graph{
	int w;
	int h;
public:
	Rect(int x, int y, int w, int h):Graph(x,y),w(w),h(h){
			
	}
	double area(){
		return w*h;	
	}
	string Type(){
		return "Rectan";	
	}
};

class Circle:public Graph{
	int r;
public:
	Circle(int x, int y, int r):Graph(x,y),r(r){
			
	}	
	double area(){
		return 3.14*r*r;	
	}
	string Type(){
		return "Circle";	
	}
};

class Computer{
public:
	static void usegraph(Graph& g){
		g.show();	
	}
};

int main(){
	Circle c(8,8,10);
	Rect r(0,0,20,5);
	Computer::usegraph(c);
	Computer::usegraph(r);
	//Graph g(15,15);//error,pure virtual function cannot create object
	return 0;
}
