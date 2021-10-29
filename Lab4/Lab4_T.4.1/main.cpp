#include <iostream>
#include <string>

using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void setName(string name){
        this->name = name;
        cout<<endl;
    }

    string getName(){
        return name;
    }

    void setAge(int age){
        this->age = age;
        cout<<endl;
    }

    int getAge(){
        return age;
    }
};

class GroupOfFriends{
private:
    int friendsNumber;
    Person *friendList;

public:
    int i;
    GroupOfFriends( int friendsNumber){
        this->friendsNumber = friendsNumber;
    }

    void createGroup(){
        string name;
        int age;
        for(i = 1; i <= this->friendsNumber;i++){
            cout<<"Enter friend "<<i<<" details "<<endl;
            cout<<"Enter name : ";
            cin>>name;
            friendList[i].setName(name);
            cout<<"Enter age : ";
            cin>>age;
            friendList[i].setAge(age);
        }
    }

    void displayGroup(){
        for(i = 1; i <= this->friendsNumber; i++){
            cout<<"Friend number "<<i<<" name and age :"<<friendList[i].getName()<<" "<<friendList[i].getAge()<<endl;
        }
    }

    void editName(){
        cout<<"Enter the number of the friend you want to edit (not more than "<<this->friendsNumber<<")"<<endl;
        int friendnumber;
        string newname;
        cin>>friendnumber;
        cout<<"Enter new name : ";
        cin>>newname;
        friendList[friendnumber].setName(newname);
    }
};


int main() {
    GroupOfFriends *group = new GroupOfFriends(3);
    group->createGroup();
    group->displayGroup();
    group->editName();
    group->displayGroup();
    return 0;
}
