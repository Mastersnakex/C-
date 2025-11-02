/*Bloque 2. expresiones 
Ejercico 4. Escribe la siguiente expresión como expresión en C++*/
#include <iostream>
using namespace std;

int main () {
	//Declarar variables
	float a_ft, b_ft, c_ft, d_ft, resultado_ft=0;
	//Pedir datos 
	cout<<"Digite el dato A: \n"; cin>>a_ft;
	cout<<"Digite el dato B: \n"; cin>>b_ft;
	cout<<"Digite el dato C: \n"; cin>>c_ft;
	cout<<"Digite el dato D: \n"; cin>>d_ft;
	//Formula
	resultado_ft=(a_ft)+(b_ft/(c_ft-d_ft));
	//Impresion de resultados
	cout<<"Su resultado es: "<< resultado_ft <<endl;
	return 0;
}
