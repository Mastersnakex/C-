/* Bloque 2. Expresiones
Ejercicio 5. Escriba un fragmento de promgrama que intercambie los valores 
de dos variables*/
#include <iostream>
using namespace std;

int main () {
	//Declarar variables
	float a_ft, b_ft, aux_ft;
	//Pedir datos
	cout<<"Digite A: \n"; cin>>a_ft;
	cout<<"Digite B: \n"; cin>>b_ft;
	//Cambio de datos
	//Supongamos que a=10 y b=5, queremos que a=5 y b=10
	aux_ft=a_ft;//Guardamos el valor de "a" en la variable auxiliar 
	a_ft=b_ft;//Guardamos el valor de "b" en la variable a 
	b_ft=aux_ft;//Guardamos el valor de "a" en la variable b mediante el auxiliar
	/*aux_ft=10
	 a_ft=5
	 b_ft=10*/
	//Impresión de datos
	cout<<"El nuevo valor de A es: "<<a_ft<<endl;
	cout<<"El nuevo valor de B es: "<<b_ft<<endl;
	return 0;
}
