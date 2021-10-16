#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
	//T.2.1
	int a=5, b=3;								
		interchange(a, b);
	//T.2.2
	float c=4.2345, d=7.3214;	
		cout << "isRoundedTo100 function" << endl;
		cout << "isRoundedTo100 function" << endl;
		cout << "isRoundedTo100 function" << endl;
		cout<<f(c, true)<<endl;
		cout<<f(d, false)<<endl;
	//T.2.3
	int i = 39, j = 20;		
		cout << "maxi(i,j) : " << maxi(i, j)<<endl;
	double f1 = 13.5, f2 = 20.7;
		cout << "maxi(f1,f2) : " << maxi(f1, f2)<<endl;
	string s1 = "Hello";
	string s2 = "World";
		cout << "maxi(s1,s2) : " << maxi(s1, s2) << endl;
	//T.2.4
	long long millisec = 1631970174315;	
		cout << "Ms to Date&Time : " << timeToString(millisec) << endl;
		cout << timeToString();
	//T.2.5
	int aa = 30;
		cout << "Int size : " << over(aa) << endl;
	double bb = 2.12;
		cout << "Double size : " << over(bb) << endl;
	string cc = "Test";
		cout << "String size : " << over(cc) << endl;
	//T.2.7
	nrComplex nr;
		cout << "Absolute value of nr : " << module(nr) << endl;
	//T.2.8
	int nmb1 = 10, nmb2 = 24, nmb3 = 3,maxim3=0;
		maxim3 = findmax(nmb1, nmb2, nmb3);
		cout << "Maximul dintre cele 3 numere este : " << maxim3<<endl;
	//T.2.9
	cout << "Sum of nmb1 & nmb2 = " << sumoftwo(nmb1, nmb2)<<endl;
	//T.2.10
	cout << "nmb1 = " << nmb1 << "   " << "nmb2 = " << nmb2 << endl;
	interchangetwo(nmb1, nmb2);
	cout << endl;
	//T.2.11
	int num1=6, num2=3;
	char semn='-';
		cout << "Arithmetics using two numbers and +/- ";
		cout << "Rezultatul este : " << numcharnum(num1, num2, semn) << endl;
	//T.2.12
	struct Cat {
		string name;
		string master;
		int age=3;
	}cat;
	struct Person {
		string name;
		int age=56;
	}person;
	struct Car {
		string producer;
		string licenseNumber;
		int age=10;
	}car;
	cout << "The minimum age of the structs Cat, Person and Car is : " << minAge(cat.age, person.age ,car.age) << endl;
	if (sameAge(cat.age, person.age, car.age) == 1) {
		cout << "They have the same age";
	}
	else {
		cout << "They do not have the same age";
	}
}