#include <iostream>
#include <string>
#include <list>
using namespace std;
class Student {
private :
    string name;
    int grade;

public:
    Student(int grade, string name){
        this->name = name;
        this->grade = grade;
    }
    Student(){

    }
    void setGrade(int x){
        this->grade = x;
    }
    int getGrade(){
            return this->grade;
    };

    void setName(string y){
        this->name = y;
    }
    string getName(){
        return this->name;
    }
};

class StudentClass {
private :
    int nrStudents;
    Student *studentList;
    int maxgrade;
    string maxname;
public :

    StudentClass(int nrStudents){
    this->nrStudents = nrStudents;
    studentList = new Student[nrStudents];
    }
    StudentClass(){

}
    void highestGrade(){
    for(int i = 0;i < nrStudents;i++){
        if(studentList[i].getGrade() > maxgrade)
            maxgrade = studentList[i].getGrade();
            maxname = studentList[i].getName();
        }
        cout<<"Numele studentului cu cea mai mare nota : "<< maxname<<endl;
        cout<<"Nota : "<< maxgrade;
    }
/*
    string returnName(string b){
    return maxname;
    }
    int returnGrade(int c){
    return maxgrade();
}
 */

    void readStudentClass(){
        int grade;
        string name;
        for(int i=0; i<nrStudents;i++) {
            cout << "student " << i << " name:";
            cin >> name;
            cout << "grade : ";
            cin >> grade;
            studentList[i].setGrade(grade);
            studentList[i].setName(name);
        }
    }
};

int main() {

    StudentClass *studentClass = new StudentClass(4);
    studentClass->readStudentClass();
    studentClass->highestGrade();
}
