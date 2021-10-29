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

    int maxGrade(){
        int maxi = 0;
        for(Student *student : this->studentList){
            if(maxi < student->getNote())
                maxi = student->getNote();
        }
        return maxi;
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

    cout<<"The highest grade is : "<<studentsGroup->maxGrade();

    return 0;
}