#include <iostream>
#include<vector>

using namespace std;

class Person{
public:
    int age;

    Person(int age)
    {
        this->age=age;
    }

    int getAge(){
        return this->age;
    }
};

class Car{
public:
    int age;

    Car(int age)
    {
        this->age=age;
    }

    int getAge(){
        return this->age;
    }
};

class AverageList{
public:
    template<typename T>
    static int Average(T list){
        int sum=0;
        for (int i=0;i<list.size();i++){
            sum+=list[i].getAge();
        }
        return sum/list.size();
    }
};
int main() {
    vector<Person> list_of_person;
    vector<Car> list_of_car;

    Person person1(21), person2(22), person3(23), person4(24);
    list_of_person.push_back(person1);
    list_of_person.push_back(person2);
    list_of_person.push_back(person3);
    list_of_person.push_back(person4);

    Car car1(3), car2(4), car3(5), car4(6);
    list_of_car.push_back(car1);
    list_of_car.push_back(car2);
    list_of_car.push_back(car3);
    list_of_car.push_back(car4);

    cout<<"The average of the person list is : "<<AverageList::Average(list_of_person)<<endl;
    cout<<endl;
    cout<<"The average of the car list is : "<<AverageList::Average(list_of_car)<<endl;

}
