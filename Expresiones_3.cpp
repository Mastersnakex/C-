// 3. Escribe la siguiente expresión como expresión en C++
#include <iostream>
using namespace std;

int main () {
	//Declarar variables 
	float a_ft, b_ft, c_ft, d_ft, e_ft, f_ft, resultado_ft=0;
	//Pedir datos
	cout<<"Digite A: \n"; cin>>a_ft;
	cout<<"Digite B: \n"; cin>>b_ft;
	cout<<"Digite C: \n"; cin>>c_ft;
	cout<<"Digite D: \n"; cin>>d_ft;
	cout<<"Digite E: \n"; cin>>e_ft;
	cout<<"Digite F: \n"; cin>>f_ft;
	//Formula
	resultado_ft=(a_ft+(b_ft/c_ft))/(d_ft+(e_ft/f_ft));
	//Impresión de resultados
	cout<<"El resultado de la operacion es: "<< resultado_ft <<endl;
	return 0; 
}
