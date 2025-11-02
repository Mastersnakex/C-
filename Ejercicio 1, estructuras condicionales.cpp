/* 1. Escriba un programa que lea dos números y determine cuál de ellos es mayor.*/
#include <iostream>

int main() {
	int n1, n2;
	
	std::cout<< "Digite dos numeros: \n"; 
	std::cin>>n1>>n2;
	
	if (n1>n2) {
		std::cout<<"El mayor es: "<<n1<<"\n";
	}
	if (n1==n2) {
		std::cout<<"Los dos numeros son iguales\n";
	}
	else {
		std::cout<<"El mayor es: "<<n2<<"\n";
	}
	return 0; 
}
