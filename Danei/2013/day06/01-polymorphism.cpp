#include <iostream>
using namespace std;

class Vehicle{
public:
	virtual void stop(){
		cout << "vehicle stop" << endl;	
	}
};
class Car:public Vehicle{
public:
	void stop(){
		cout << "The car stepped on the clutch and stop" << endl;
	}
};
class Bike:public Vehicle{
public:
	void stop(){
		cout << "The Bike pinch stop" << endl;	
	}
};
class Light{//traffic light
public:
	void stopvehicle(Vehicle& v){
		v.stop();
	}
};

int main(){
	Light light;
	Car bmw;
	Bike yj;
	light.stopvehicle(bmw);
	light.stopvehicle(yj);
	return 0;	
}
