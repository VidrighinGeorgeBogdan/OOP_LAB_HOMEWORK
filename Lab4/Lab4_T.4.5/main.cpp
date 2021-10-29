#include <iostream>
#include <string>
#include <list>

using namespace std;

class Student {
private:

    int note;
    string name;

public:

    Student(string name="Joe Doe", int note = 0){
        this->note = note;
        this->name = name;
    }

    int getNote(){
        return this->note;
    }
    string getName(){
        return this->name;
    }

};

class StudentsGroup {
private:
    int studentsNumber;
    list <Student *> studentList;
public:
    StudentsGroup() {
    }

    void showStudentsInGroup() {
        for(Student *student : this->studentList) {
            cout<<student->getName();
            cout<<" ";
            cout<<student->getNote();
            cout<<endl;
        }
    }

    void addStudentsInGroup(Student *studentToAdd) {
        this->studentList.push_back(studentToAdd);
    }

    void sortAfterName(){
        cout<<endl;
        cout<<"Sorted after name : "<<endl;
        studentList.sort([](Student * firstname, Student * nextname){return firstname < nextname;});
    }
};
int main()
{
    StudentsGroup *studentsGroup;
    studentsGroup = new StudentsGroup();

    studentsGroup->addStudentsInGroup(new Student("joe",6));
    studentsGroup->addStudentsInGroup(new Student("katy",5));
    studentsGroup->addStudentsInGroup(new Student("manny",8));

    studentsGroup->showStudentsInGroup();

    studentsGroup->sortAfterName();

    studentsGroup->showStudentsInGroup();
    return 0;
}