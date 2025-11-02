/* 2. Escriba un programa que lea tres números y determine cuál de ellos es el mayor*/

#include <iostream>
#include <math.h>

int main() {
	//declarar variables
	int n1_int, n2_int, n3_int;
	//Pedir números
	std::cout<< "Digite el numero 1: \n"; std:: cin>> n1_int;
	std::cout<< "Digite el numero 2: \n"; std:: cin>> n2_int;
	std::cout<< "Digite el numero 3: \n"; std:: cin>> n3_int;
	//Condicional if
	if(n1_int>n2_int&&n1_int>n3_int) {
		std::cout<< "El numero mayor es: "<<n1_int;
	}
	else {
		if(n2_int>n1_int&&n2_int>n3_int) {
			std::cout<< "El numero mayor es: "<<n2_int;
		}
		else {
			std::cout<< "El numero mayor es: "<<n3_int;
		}
	}
	
	return 0; 
}
