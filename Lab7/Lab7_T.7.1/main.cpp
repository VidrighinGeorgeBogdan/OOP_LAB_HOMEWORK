#include <iostream>

using namespace std;

class Tire {
protected:
    Tire* getExpensiveTire(){
        return this;
    }
    friend class SpecialCar;

public:
    Tire * getTire(){
        return this;
    }
};

class Car{
public:
    string brand;
    int year;
    Car(string brand, int year){
        this->brand = brand;
        this->year = year;
    }

    Tire changeTire(Tire tire){
        tire.getTire();
        cout<<"Tire has been changed";
    }
};

class SpecialCar{
public:
    string brand;
    int year;
    SpecialCar(string brand, int year){
        this->brand = brand;
        this->year = year;
    }

    Tire changeExpensiveTire(Tire tire){
        tire.getExpensiveTire();
        cout<<"Expensive tire has been changed";
    }

};



int main() {

    Car* commonCar = new Car("Dacia", 1400);
    SpecialCar* wowCar = new SpecialCar("Koenigsegg",2021);
    Tire tire;
    commonCar->changeTire(tire);
    cout<<endl;
    wowCar->changeExpensiveTire(tire);
    return 0;
}
