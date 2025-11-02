//1. Escribe la siguiente expresión matemática como expresión en C++
#include <iostream>
using namespace std;

int main() {
	float a_ft, b_ft, resultado_ft=0;
	cout<<"Digite el valor de a: ";
	cin>> a_ft;
	cout<<"Digite el valor de b: ";
	cin>> b_ft;
	
	resultado_ft=(a_ft/b_ft)+1;
	cout<<"Formula: (a/b)+1"<<endl;
	cout.precision(2);
	cout<<"El resultado es: "<<resultado_ft<<endl;
	return 0;
}
