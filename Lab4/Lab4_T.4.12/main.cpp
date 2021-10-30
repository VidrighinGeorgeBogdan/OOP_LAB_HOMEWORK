#include <iostream>
#include <string>

using namespace std;

class RestaurantWaiters{
public:
    int waiternumber;
    RestaurantWaiters(int b){
        this->waiternumber = b;
    }

    int getWaiterNumber(){
            return this->waiternumber;
    }
};

class RestaurantCapacity{
public:
    int capacity;
    RestaurantCapacity(int a){
        this->capacity = a;
    }

    int getRestaurantCapacity(){
        return this->capacity;
    }
};

class RestaurantCooks{
public:
    int cooknumber;
    RestaurantCooks(int a){
        this->cooknumber = a;
    }
    int getRestaurantCooks(){
        return this->cooknumber;
    }
};

class Restaurant{
protected:
    string name;
    int year;
    RestaurantCooks *cooks;
    RestaurantCapacity *capacity;
    RestaurantWaiters *waiters;
public:
    Restaurant(string a, int b,RestaurantCooks* c,RestaurantCapacity* d,RestaurantWaiters* e){
        this->name = a;
        this->year = b;
        this->cooks = c;
        this->capacity = d;
        this->waiters = e;
    }

    void displayInfo(){
        cout<<"Restaurant name : "<<name<<endl;
        cout<<"Restaurant founding year : "<<year<<endl;
        cout<<"Cook number : "<<cooks->getRestaurantCooks()<<endl;
        cout<<"Restaurant Capacity : "<<capacity->getRestaurantCapacity()<<endl;
        cout<<"Waiter number : "<<waiters->getWaiterNumber()<<endl;
    }
};


int main() {

    RestaurantCooks *rc = new RestaurantCooks(4);
    RestaurantCapacity *rcp = new RestaurantCapacity(200);
    RestaurantWaiters *rw = new RestaurantWaiters(16);
    Restaurant *restaurant = new Restaurant("Fancy Restaurant", 2010, rc, rcp,rw);
    restaurant->displayInfo();
    return 0;
}
