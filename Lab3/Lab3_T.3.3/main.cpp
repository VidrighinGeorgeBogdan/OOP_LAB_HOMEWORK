#include <iostream>
#include <string>

using namespace std;

class Student{
private:
    string name;
    int grade;
public:
    Student(int grade){
        this->grade = grade;
    }
    void setName(string a){
        name = a;
    }
    string getName(){
        return name;
    }
    int getGrade(){
        return grade;
    }
};
int main() {
    Student student1 = Student(0);
    cout<<"Student 1 grade : "<<student1.getGrade()<<endl;
    student1.setName("Joe");
    cout<<"Student 1 Name : "<<student1.getName()<<endl;

    Student *student2 = new Student(5);
    cout<<"Student 2 grade : "<<student2->getGrade()<<endl;
    student2->setName("Chris");
    cout<<"Student 2 name : "<<student2->getName()<<endl;
}
