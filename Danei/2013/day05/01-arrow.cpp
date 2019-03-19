#include <iostream>
using namespace std;

struct POINT{
	int x;	
	int y;
};

class Pos{
	POINT p;
public:
	Pos(int x = 0, int y = 0){
		p.x = x;
		p.y = y;
	}
	void move(int cx, int cy){
		p.x += cx;
		p.y += cy;
	}
	void moveto(int x, int y){
		p.x = x;
		p.y = y;
	}
	POINT* operator->(){
		return &p;//->turn to the address of p;
	}
};

int main(){
	Pos a(20,80);
	cout << a->x << ',' << a->y << endl;
	a.move(30, -10);
	cout << a->x << ',' << a->y << endl;
	return 0;	
}
