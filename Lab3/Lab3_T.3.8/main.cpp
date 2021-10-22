#include <iostream>
using namespace std;

class Student{
private:

    string name;

public :

    static int member;
    Student(){
        ++member;
    }

    ~Student(){
        --member;
    }
    void setStudent(){
        string a;
        cin>>a;
        name = a;
    }
    string getStudent(){
    return name;
    }
    static void printMemberNumber(){
        cout<<"counter : "<<member<<endl;
    }

};

int Student::member;

class StudentClass{
private:

    int numberOfStudents;
    Student *studentList;

public:

    StudentClass(int a){
        numberOfStudents = a;
        studentList = new Student[numberOfStudents];
    }

    void getStudentListName(){
        for(int j = 0 ; j < Student::member; j++){
            cout<<"Enter student's "<<j<<" name : ";
            studentList[j].setStudent();
        }
    };

    void displayStudentList(int b){
        for(int i = b; i < Student::member; i++){
            cout<<"Student number "<<i<<" : "<<studentList[i].getStudent()<<endl;
        }
    }
};

int main() {
    StudentClass *group = new StudentClass(3);      //pana la 3
    Student::printMemberNumber();               //afiseaza
    group->getStudentListName();
    group->displayStudentList(0);                  //de la 0
}
