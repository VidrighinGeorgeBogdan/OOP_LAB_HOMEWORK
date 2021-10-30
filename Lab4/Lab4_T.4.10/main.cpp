#include <iostream>
#include <string>
using namespace std;

class Documents{
private:
    string doc1;
    string doc2;
    string doc3;
public:

    Documents(string a, string b, string c){
        this->doc1 = a;
        this->doc2 = b;
        this->doc3 = c;
    }
    void setDoc1(string a){
        this->doc1 = a;
    }

    void setDoc2(string b){
        this->doc2 = b;
    }

    void setDoc3(string c){
        this->doc3 = c;
    }

    string getDoc1(){
        return doc1;
    };
    string getDoc2(){
        return doc2;
    };
    string getDoc3(){
        return doc3;
    };
    string getAllDocuments(){
        cout<<doc1<<endl;
        cout<<doc2<<endl;
        cout<<doc3<<endl;
    }
};

int main() {
    Documents *doc = new Documents("Document 1","Document 2","Document 3");
    cout<<"Can i see Document 1?"<<endl;
    cout<<doc->getDoc1()<<endl;
    cout<<"Can i see Document 2?"<<endl;
    cout<<doc->getDoc2()<<endl;
    cout<<"Can i see Document 3?"<<endl;
    cout<<doc->getDoc3()<<endl;
    cout<<endl;
    cout<<"Can i see all your documents please ?"<<endl;
    cout<<doc->getAllDocuments();

    return 0;
}
