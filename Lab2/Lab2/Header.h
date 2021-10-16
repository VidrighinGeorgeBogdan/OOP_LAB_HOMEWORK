#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

void interchange(int &a, int &b) {
	cout << "Initial values are : " << a <<" "<< b<<endl;
	int aux;
	aux = a;
	a = b;
	b = aux;
	cout << "Interchanged values are :" << a <<" "<< b<<endl;
}

float f(float n, bool isRoundedTo100 = false) {
	if (isRoundedTo100 == false) {
		return round(n);
	}
	else {
		float rounding;
		rounding = floor(n * 100 + 0.5) / 100;
		return rounding;
	}
}

int maxi(int a, int b) {
	return max(a, b);
}
double maxi(double a, double b) {
	return max(a, b);
}
string maxi(string a, string b) {
	if (a.size() > b.size())
		return a;
	else
		return b;
}

string timeToString(long long millisec){
	millisec /= 1000;
	struct tm * timeinfo;
	char str[80];

	timeinfo = gmtime(reinterpret_cast<const time_t *>(&millisec));
	strftime(str, sizeof(str), "%Y-%m-%d %H:%M:%S", timeinfo);

	string rez(str);
	return rez;
}
string timeToString(){
	time_t init_time;
	struct tm * timeinfo;
	char str[80];

	time (&init_time);
	timeinfo = localtime(&init_time);
	strftime(str, sizeof(str), "%Y-%m-%d %H:%M:%S", timeinfo);

	string rez(str);
	return rez;
}

int over(int x) {
	return sizeof(x);
}
int over(double x) {
	return sizeof(x);
}
int over(string x) {
	return x.size();
}

struct nrComplex {
	double rp = 13.0, cp = 5.0; //rp = real part , cp = complex part
};
double module(nrComplex nr) {
	return sqrt(nr.rp*nr.rp + nr.cp*nr.cp);
}

template <class T>
int findmax(T a, T b, T c) {
	T maxi;
	if (a > b && a > c) {
		maxi = a;
	}
	else if (b > c) {
		maxi = b;
	}
	else {
		maxi = c;
	}
	return maxi;
}

template <class T>
T sumoftwo(T a, T b) {
	return a + b;
}

template <class T>
void interchangetwo(T& a, T& b) {
	T aux;
	aux = a;
	a = b;
	b = aux;
	cout << "Interchange of nmb1 & nmb2 : "<<a<<"  "<<b;
}

int substraction(int a, int b) {
	return a - b;
}
int addition(int a, int b) {
	return a + b;
}

int numcharnum(int a, int b, char semn) {
	int rez;
	if (semn == '-') {
		rez = substraction(a, b);
		return rez;
	}
	else if (semn == '+') {
		rez = addition(a,b);
		return rez;
	}
}
template <class T>
T minAge(T a, T b, T c) {
	if ((a < b) && (a < c)) {
		return a;
	}
	else if ((a > b) && (b < c)) {
		return b;
	}
	else {
		return c;
	}
}
template <class T>
bool sameAge(T a, T b, T c) {
	if (a == b == c) {
		return true;
	}
	else {
		return false;
	}
}