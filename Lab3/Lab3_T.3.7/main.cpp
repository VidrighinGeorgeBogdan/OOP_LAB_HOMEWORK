#include <iostream>
using namespace std;

class Student{
private:
    static int member;

public :

Student(){
    ++member;
}

~Student(){
    --member;
}

static void printMemberNumber(){
    cout<<"counter : "<<member<<endl;
}

};
int Student::member;
int main() {
    Student s1;
    Student s2;
    Student::printMemberNumber();
}
