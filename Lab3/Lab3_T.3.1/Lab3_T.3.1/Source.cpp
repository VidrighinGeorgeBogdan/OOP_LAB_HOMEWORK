#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	string color;
	int speed;
	string marca;
public:
	void setSpeed(int s) {
		speed = s;
	}
	int getSpeed() {
		return speed;
	}
	void setColor(string c) {
		color = c;
	}
	string getColor() {
		return color;
	}
	void accelerateCar() {
		cout << "Speed is increasing" << endl;
		speed = 100;
	}
	void stopCar() {
		cout << "The car has stopped" << endl;
		speed = 0;
	}
	Car(string marca) {
		this->marca = marca;	//initially the parameter marca is empty and using this constructor we give it a name and then display it
		cout << "Car brand is : " << marca << endl;
	}
};

int main() {
	Car car("Audi");
	car.setSpeed(90);
	cout <<"Speed of the car is : " << car.getSpeed() << endl;
	car.setColor("Black");
	cout <<"Color of the car is : " << car.getColor() << endl;
	car.accelerateCar();
	car.stopCar();
}