#include <iostream>
#include <string>
using namespace std;

class Kitty{
    private :
             int age;
             string name;
    public :
             void setName(string x){
             name = x;
             }
             string getName(){
                return name;
             }
             void setAge(int y){
                age = y;
             }
             int getAge(){
                return age;
             }
             Kitty(string ownerName){
                  cout<<"The name of the owner of this kitty is : "<<ownerName <<endl;

             }



    };

int main(){
    Kitty cat("Tom");
    cat.setName("Sweet");
    cat.setAge(2);
    cout<<"The name of this kitty is : "<<cat.getName()<<endl;
    cout<<"The age of this kitty is : "<<cat.getAge()<<endl;

}