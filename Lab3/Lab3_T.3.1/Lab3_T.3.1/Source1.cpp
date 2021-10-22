#include <iostream>
#include <string>
using namespace std;

class Car{
private :
	string color;
	int speed;
public :
	void setSpeed(int s) {
		speed = s;
	}
	void getSpeed() {
		return speed;
	}
	setColor(string c) {
		color = c;
	}
	getColor() {
		return color;
	}
	void accelerateCar() {
		cout << "Speed is increasing";
	}
	void stopCar() {
		cout << "The car has stopped";
	}
};

int main() {
	Car car;
	car.setSpeed(90);
	cout << car.getSpeed() << endl;
	car.setColor("Black");
	cout << car.getColor() << endl;
	car.accelerateCar();
	car.stopCar();
}