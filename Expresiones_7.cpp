/* Bloque 2. Expresiones
Ejercicio 7. La calificación final de un estudiante es la media poderada de tres notas:
La nota de practicas que cuenta con un 30%, la nota de teória que cuenta con un 60%
y la nota de participación que cuanta con un 10%. Escriba un programa que lea de la entrada
estándar las 3 notas y escriba en la salida estandar la calificación final del alumno.*/
#include <iostream>
using namespace std;

int main() {
	//Declarar variables
	float practica_ft, teoria_ft, participacion_ft, notafinal_ft=0;
	//Pedir datos
	cout<<"Digite la nota de practicas: \n"; cin>>practica_ft;
	cout<<"Digite la nota de teoria: \n"; cin>>teoria_ft;
	cout<<"Digite la nota de participacion: \n"; cin>>participacion_ft;
	//Sacar porcentajes
	practica_ft*=0.3;//practica_ft = practica_ft * 0.30
	teoria_ft*=0.6;
	participacion_ft*=0.1;
	//Sacar nota final
	notafinal_ft=practica_ft+teoria_ft+participacion_ft;
	//Impresión de resultados
	cout<<"La nota final del alumno es: "<< notafinal_ft<<endl;
	return 0;
}
