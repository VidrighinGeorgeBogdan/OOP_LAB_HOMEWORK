#include <iostream>
#include <string>

using namespace std;

class Commuter{
protected:
    int numberofcommuters;
public:
    Commuter(int a){
        this->numberofcommuters = a;
    }

    getCommuters(){
        return this->numberofcommuters;
    }
};
class Bus{
protected:
    string name;
public:
    Bus(string a){
        this->name = a;
    }

    getBusName(){
        return this->name;
    }
};

class BusStation{
protected:
    int maxnumberofbuses;
    Bus* bus;
    Commuter* commuters;
public:
    BusStation(string nume, int a, int b){
        this->bus =new Bus(nume);
        this->maxnumberofbuses = a;
        this->commuters = new Commuter(b);
    }
    getMaxNumberOfBuses(){
        return this->maxnumberofbuses;
    }
};

class Address{
public:
    string address;
    Address(string a){
        this->address = a;
    }

    getAddress(){
        return this->address;
    }
};

class Driver{
protected:
    string name;
    int age;
    Address* address;
public:
    Driver(string a, int b,string c){
        this->name = a;
        this->age = b;
        this->address = new Address(c);
    }
    getName(){
        return this->name;
    }
    getAge(){
        return this->age;
    }
    getAddress(){
        return this->address;
    }

};

class Mosquito{
protected:
    int nr;
public:
    Mosquito(int a){
        this->nr = a;
    }

    getNumberOfMosquitos(){
        return this->nr;
    }
};

class Engine{
protected:
    string serialnumber;
public:
    Engine(string a){
        this->serialnumber = a;
    }
    getSerialNumber(){
        return this->serialnumber;
    }
};

class Car{
protected:
    Engine* engine;
    string name;
public:
    Car(string a, string b){
        this->engine = a;
        this->name = b;
    }
};
int main() {
    Bus* bus = new Bus("Bus1");
    Commuter* commuter = new Commuter(64);
    BusStation* busStation = new BusStation("Bus1",4,64);
    Address* address = new Address("Str.1 Nr.7");
    Driver* driver = new Driver("Driver 1",4,"Str.1 Nr.7");
    Mosquito* mosquito = new Mosquito(5);
    Engine* engine = new Engine("AAUCH23SBDM");
    Car* car = new Car("AAUCH23SBDM","BMW");

    return 0;
}
