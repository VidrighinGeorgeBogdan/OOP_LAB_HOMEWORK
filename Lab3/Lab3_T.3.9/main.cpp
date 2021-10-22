#include <iostream>
#include <string>
#include <list>
using namespace std;

class Student{

private:

    string firstname;
    string lastname;
    string listofcourses;
    int groupe;

public:

    Student(string firstname ,string lastname, string listofcourses, int groupe ){
        this->firstname = firstname;
        this->lastname = lastname;
        this->listofcourses = listofcourses;
        this->groupe = groupe;
    }

    void setFirstName(string b){
        firstname = b;
    }

    void setLastName(string c){
        lastname = c;
    }

    void setListOfCourses(string d){
        listofcourses = d;
    }

    void setGroup(int d){
        groupe = d;
    }

    string getFirstName(){
        return firstname;
    }

    string getLastName(){
        return lastname;
    }

    string getListOfCourses(){
        return listofcourses;
    }

    int getGroup(){
        return groupe;
    }

};

class Course{
private:
    string courseName;
    string teacherName;
    int studentsNumber;
    list<Student*> studentList;
public:
    string b;

   int getNumberOfStudents(){
       return studentsNumber;
   }
   void addStudents(Student* studentToAdd){
        this->studentList.push_back(studentToAdd);
   }
   void displayCourse(){
       for(Student *student: this->studentList){
           studentsNumber++;
           cout<<"Student number "<<studentsNumber<<" details : "<<endl;
           cout<<"First name : "<<student->getFirstName()<<endl;
           cout<<"Last name : "<<student->getLastName()<<endl;
           cout<<"List of courses : "<<student->getListOfCourses()<<endl;
           cout<<"Group : "<<student->getGroup()<<endl;
           cout<<endl;
       }
   }
/*
   void deleteStudent(string lastname){
       for(auto& studentl)
       studentsNumber--;
   }
*/
};
int main() {
    Course* courseGroup;
    courseGroup = new Course();
    int j;
    do{
        cout<<"a.Create a list of students"<<endl;
        cout<<"b.Delete/Edit a student"<<endl;
        cout<<"c.Compute the number of students"<<endl;
        cout<<"d.Search for a student by name"<<endl;
        int i;
        cin>>i;
        switch(i) {
            case 1:
                courseGroup->addStudents(new Student("Joe", "Man", "Biology", 1));
                courseGroup->addStudents(new Student("Joe", "Manny", "Biology,Chemistry", 1));
                courseGroup->addStudents(new Student("Alex", "Nodge", "Biology,History", 1));
                break;
            case 2:
                //courseGroup->deleteStudent(2);
                break;
            case 3:
                cout << "The number of students is : " << courseGroup->getNumberOfStudents() << endl;
                break;
            case 4:

                break;
        }
    }while(j);

    //courseGroup->displayCourse();
    cout<<endl;



    return 0;
}
