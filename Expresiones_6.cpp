/* Bloque 2. Expresiones
Ejercicio 6. Escriba un programa que lea la nota final de cuatro alumnos
y calcule la nota final media de los cuatro alumnos*/
#include <iostream>
using namespace std; 

int main() {
	//Declarar las variables
	float calf1_ft, calf2_ft, calf3_ft, calf4_ft, promedio_ft=0;
	//Pedir datos
	cout<<"Digite la calificacion final del alumno 1: \n"; cin>>calf1_ft;
	cout<<"Digite la calificacion final del alumno 2: \n"; cin>>calf2_ft;
	cout<<"Digite la calificacion final del alumno 3: \n"; cin>>calf3_ft;
	cout<<"Digite la calificacion final del alumno 4: \n"; cin>>calf4_ft;
	//Sacar nota final media
	promedio_ft=(calf1_ft+calf2_ft+calf3_ft+calf4_ft)/(4);
	//Impresión de datos
	cout.precision(2);
	cout<<"La nota final media es: "<< promedio_ft<<endl;
	
	return 0; 
}
