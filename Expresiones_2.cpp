/* 2. Escribe la siguiente expresión matemática como expresión en C++
(a+b)/(c+d)*/
#include <iostream>
using namespace std;

int main () {
	//Declaración de variables
	float a_ft, b_ft, c_ft, d_ft, resultado_ft;
	//Pedir datos
	cout<<"Ingrese el dato A: \n"; cin>>a_ft;
	cout<<"Ingrese el dato B: \n"; cin>>b_ft;
	cout<<"Ingrese el dato C: \n"; cin>>c_ft;
	cout<<"Ingrese el dato D: \n"; cin>>d_ft;
	//Operación
	resultado_ft=(a_ft+b_ft)/(c_ft+d_ft);
	//Impresión de resultado}
	cout<<"Su resultado es: "<< resultado_ft<<endl;
	return 0;
}
