/* 3. Realice un programa que lea un valor entero y determine si se trata de un 
número par o inpar*/

#include <iostream>

int main() {
	//Declarar variables
	int num_int;
	
	std::cout<< "Digite un numero entero: ";
	std::cin>> num_int;
	//Condicional if
	if(num_int==0) {
		std::cout<<"El numero ingresado es 0 \n";
	}
	else {
	if(num_int%2==0) {
		std::cout<<"El numero digitado es par \n";
	}
	else {
		std::cout<<"El numero digitado es inpar \n";
	}
	}
	return 0;
}
