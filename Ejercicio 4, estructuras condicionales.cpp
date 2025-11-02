/*4. Comprobar si un número digitado por el usuario es positivo o negativo */
#include <iostream>

int main() {
	//Declarar variables
	float numero_ft;
	//Pedir un número
	std::cout<<"Digite un numero: \n";
	std::cin>>numero_ft;
	//Sentencia if
	if(numero_ft>0) {
		std::cout<<"El numero digitado es positivo \n";
	}
	if(numero_ft==0) {
		std::cout<<"El numero digitado es 0 \n";
	}
	else {
		std::cout<<"El numero ingresado es negativo \n";	
	}	
	
	return 0;
}
