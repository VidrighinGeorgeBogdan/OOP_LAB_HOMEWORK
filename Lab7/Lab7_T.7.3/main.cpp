#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

class Driver{
public:
    string name;

    Driver(string name){
        this->name=name;
    }

    string getName(){
        return this->name;
    }
};

class Car{
public:
    string name;

    Car(string name){

        this->name=name;

    }

    string getName(){

        return this->name;

    }
};

class CarsAndDrivers{
public:
    vector<pair<Driver*,Car*>>CarsAndDrivers;

    void addCarAndDriver(string CarName,string DriverName){
        int valid=1;
        for (auto it: CarsAndDrivers)
            if(it.first->getName()==DriverName || it.second->getName()== CarName)
            {
                valid=0;
                cout<<"Driver name or Car name already used"<<endl;
                break;
            }
        if(valid){
        CarsAndDrivers.push_back(make_pair(new Driver(DriverName),new Car(CarName)));

        }

    }

    void removeCarAndDriver(string CarName,string DriverName){
        vector<pair<Driver*,Car*>>::iterator it;
        for (it = CarsAndDrivers.begin(); it != CarsAndDrivers.end(); it++)
            if ( (*it).first->getName() == CarName && (*it).second->getName() == DriverName)
            {
                CarsAndDrivers.erase(it);
                break;
            }
    }

    void displayDriversWithCars()
    {
        for (auto it : CarsAndDrivers)
        {
            cout << it.first->getName() << " -> " << it.second->getName() << endl;
        }
        cout << "The number of drivers with cars is : " << CarsAndDrivers.size() << endl;
    }
};

int main() {
    CarsAndDrivers* cars_and_drivers = new CarsAndDrivers();

    cars_and_drivers->addCarAndDriver("car1","person1");
    cars_and_drivers->addCarAndDriver("car2","person2");
    cars_and_drivers->addCarAndDriver("car3","person3");

    cars_and_drivers->displayDriversWithCars();

    cout<<endl;

    cars_and_drivers->removeCarAndDriver("car3","person3");
    cars_and_drivers->displayDriversWithCars();

    cout<<endl;
    cars_and_drivers->addCarAndDriver("car4","person4");
    cars_and_drivers->displayDriversWithCars();

    cout<<endl;
    cars_and_drivers->addCarAndDriver("car5","person4");
}

