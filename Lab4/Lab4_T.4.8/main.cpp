#include <iostream>
#include <string>
using namespace std;

class Sofer{
public:
    string nume;

    Sofer(){}
    Sofer(string nume){
        this->nume = nume;
    }
    void setNume(string nume){
        this->nume = nume;
    }

    string getNume(){
        return this->nume;
    }

};

class Masina{
private:
    int varsta;
public:
    Sofer* sofer;
    Masina(int varsta, string sofer){
        this->varsta = varsta;
        this->sofer = new Sofer(sofer);
    }

    int getVarsta(){
        return this->varsta;
    }

    Sofer* getSofer(){
        return this->sofer;
    };


    void exchangeSofer(Masina* m1,Masina* m2 )
    {
        Sofer* aux = new Sofer(m1->getSofer()->getNume());
        m1->sofer = m2->getSofer();
        m2->sofer = aux;
    }
};

int main() {

    Masina *m1 = new Masina(6,"Sofer1");
    Masina *m2 = new Masina(1,"Sofer2");

    cout<<m1->getVarsta()<<endl;
    cout<<m1->getSofer()->getNume()<<endl;
    cout<<endl;
    m1->exchangeSofer(m1, m2);

    cout<<m1->getSofer()->getNume()<<endl;
    cout<<m2->getSofer()->getNume()<<endl;
    return 0;
}
