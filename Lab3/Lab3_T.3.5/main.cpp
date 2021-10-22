#include <iostream>
#include<complex>
using namespace std;

class ComplexNumber{
public:
    int real;
    int imaginary;
    ComplexNumber(){
        real = 0;
        imaginary = 0;
    }
    void setParts(int a, int b){
        real = a;
        imaginary = b;
    }

    ComplexNumber sumComplexNumbers(ComplexNumber c1, ComplexNumber c2){
        ComplexNumber sum;

        sum.real = c1.real + c2.real;
        sum.imaginary = c1.imaginary + c2.imaginary;

        return sum;
    }
};
int main() {
    ComplexNumber c1;
    c1.setParts(3,2);
    cout<<"First complex number is : "<<c1.real<<" + "<<c1.imaginary<<"i"<<endl;

    ComplexNumber c2;
    c2.setParts(7,4);
    cout<<"Second complex number is : "<<c2.real<<" + "<<c2.imaginary<<"i"<<endl;

    ComplexNumber sum;
    sum = sum.sumComplexNumbers(c1,c2);

    cout<<"The sum of these two complex numbers is : "<<sum.real<<" + "<<sum.imaginary<<"i"<<endl;
}
