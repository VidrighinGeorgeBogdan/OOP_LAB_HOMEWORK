#include <iostream>
#include <string>
using namespace std;

class Sofer{
public:
    string nume;
    int soferCounter = 0;

    Sofer(){
    }
    void setNume(string nume){
        this->nume = nume;
        soferCounter++;
    }

    int getCounter(){
        return this->soferCounter;
    }

    string getNume(){
        return this->nume;
    }

};

class Masina{
private:
    int varsta;
    Sofer sofer;
public:
    Masina(int varsta, string sofer){
        this->varsta = varsta;
        this->sofer.setNume(sofer);
    }

    int getVarsta(){
        return this->varsta;
    }

    Sofer getSofer(){
        return this->sofer;
    };

    int counter = sofer.getCounter();

    void exchangeSofer(string a, string b){
        string aux;
        aux = a;
        a = b;
        b = aux;

    }

};

int main() {

    Masina *m1 = new Masina(6,"Sofer1");
    Masina *m2 = new Masina(1,"Sofer2");

    cout<<m1->getVarsta()<<endl;
    cout<<m1->getSofer().getNume()<<endl;
    cout<<endl;
    m1->exchangeSofer(m1->getSofer().getNume(), m2->getSofer().getNume());

    cout<<m1->getSofer().getNume()<<endl;
    cout<<m2->getSofer().getNume()<<endl;
    return 0;
}
