#include <iostream>
#include<string>
#include <vector>

using namespace std;

class Group{
public:
    class Student{
    public:
        string name;
        Student(string name){
            this->name = name;

        }
    };
    vector<Student> StudentGroup;
    void addStudent(string name){
       Student student(name);
        this->StudentGroup.push_back(student);
    }
    void DisplayStudents(){
        for (int i=0;i<this->StudentGroup.size();i++){
            cout << StudentGroup[i].name << " ";
        }

    }
    static void DisplayGroups(vector<Group>GroupOfStudents ){
        for (int i=0; i<GroupOfStudents.size();i++){
            cout<<"Students from group " << i+1 <<" :"<<endl;
            GroupOfStudents[i].DisplayStudents();
            cout<<endl<<endl;
        }
    }

};
int main() {
    vector<Group> groupvector;

    Group group;
    group.addStudent("Nume1");
    group.addStudent("Nume2");
    groupvector.push_back(group);

    Group group1;
    group1.addStudent("Nume3");
    group1.addStudent("Nume4");
    group1.addStudent("Nume5");
    groupvector.push_back(group1);

    Group::DisplayGroups(groupvector);
}
