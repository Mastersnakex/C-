/* Bloque 2. Expresiones 
Ejercicio 8. Escriba un programa que lea en la entrada estándar los dos catetos de un triágulo rectangulo 
y en la salida estandar escriba su hipotenusa*/
#include <iostream>
#include <cmath>
using namespace std;

int main () {
	//Declarar las variables
	float cateto1_ft, cateto2_ft, hipotenusa_ft=0;
	//Pedir variables
	cout<<"Ingrese el valor del cateto A: "; cin>>cateto1_ft;
	cout<<"Ingrese el valor del cateto B: "; cin>>cateto2_ft;
	//Sacar hipotenusa
	hipotenusa_ft=sqrt(pow(cateto1_ft,2)+pow(cateto2_ft,2));
	//Imprimir resultado
	cout<<"La hipotenusa del triangulo es: "<< hipotenusa_ft<<endl;	
}
