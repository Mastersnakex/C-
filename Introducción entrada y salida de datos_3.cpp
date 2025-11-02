/*3. Realice un programa que lea de la entrada estándar los siguientes datos de
una parsona:

	Edad: dato de tipo entero
	Sexo: dato de tipo carácter
	Altura: dato de tipo real
	
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include <iostream>
using namespace std;

int main() {
	//Declarar las variables
	int edad_int;
	char sexo_char[10];
	float altura_ft;
	//Pedir datos
	cout<<"===Vienvenido==="<<endl;
	cout<<"Digite su edad: "; cin>>edad_int;
	cout<<"Digite su sexo: "; cin>>sexo_char;
	cout<<"Digite su altura en metros: "; cin>>altura_ft;
	//Impresión de datos
	cout<<"Edad: "<< edad_int << endl;
	cout<<"Sexo: "<< sexo_char <<endl;
	cout<<"Altura: "<<altura_ft<<" m "<<endl; 
	
	
	
	return 0;
}
