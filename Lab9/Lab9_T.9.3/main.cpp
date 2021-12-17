#include <iostream>
#include <string>

#define pi 3.1415

using namespace std;

class Shape
{
public:
    virtual float Compute_area()=0;
};


class Circle : public Shape
{
public:
    int raza;
    Circle(int raza){
        this->raza=raza;
    }
    float Compute_area() {
        return this->raza * this->raza * pi;
    }
};


class Rectangle : public Shape
{
public:
    int length,width;
    Rectangle(int length, int width){
        this->length=length;
        this->width=width;
    }
    float Compute_area() {
        return this->length * this->width;
    }
};


class Square : public Shape
{
public:
    int side;
    Square(int side){
        this->side=side;
    }
    float Compute_area() {
        return this->side * this->side;
    }
};


int main()
{
    Square* a;
    a = new Square(4);
    cout<<a->Compute_area()<<endl;
    Rectangle* b;
    b= new Rectangle(5,3);
    cout<<b->Compute_area()<<endl;
    Circle* c;
    c= new Circle(6);
    cout<<c->Compute_area()<<endl;
}