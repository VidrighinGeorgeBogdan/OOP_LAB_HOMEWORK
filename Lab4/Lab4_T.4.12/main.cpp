#include <iostream>
#include <string>

using namespace std;

class Engine{
public:
    string serial;
    int serialnumber;
    Engine(string a, int b){
        this->serial = a;
        this->serialnumber = b;
    }

    int getSerialNumber(){
            return this->serialnumber;
    }
    string getSerial(){
            return this->serial;
    }
};

class EnginePart{
public:
    int part;
    EnginePart(int a){
        this->part = a;
    }

    int getEnginePart(){
        return this->part;
    }
};

class EngineScrews{

public:
    int numberofscrews;
    EngineScrews(int a){
        this->numberofscrews = a;
    }
    int getEngineScrews(){
        return this->numberofscrews;
    }
};

class Car{
protected:
    string name;
    int year;
    Engine *engineinfo;
    EnginePart *enginepartinfo;
    EngineScrews *enginescrewsinfo;

public:
    Car(string a, int b,Engine* c,EnginePart* d,EngineScrews* e){
        this->name = a;
        this->year = b;
        this->engineinfo = c;
        this->enginepartinfo = d;
        this->enginescrewsinfo = e;
    }

    void displayInfo(){
        cout<<"Car name : "<<name<<endl;
        cout<<"Car year : "<<year<<endl;
        cout<<"Engine serial : "<<engineinfo->getSerial()<<endl;
        cout<<"Engine serial number : "<<engineinfo->getSerialNumber()<<endl;
        cout<<"Engine Parts number : "<<enginepartinfo->getEnginePart()<<endl;
        cout<<"Engine Part Screws : "<<enginescrewsinfo->getEngineScrews()<<endl;
    }
};


int main() {

    EngineScrews *es = new EngineScrews(4);
    EnginePart *ep = new EnginePart(2);
    Engine *eng = new Engine("AAH823MN9MNL4",65);
    Car *car = new Car("Audi", 2010, eng, ep,es);
    car->displayInfo();
    return 0;
}
