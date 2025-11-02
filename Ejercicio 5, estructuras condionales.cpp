/* 5. Escriba un programa que lea de la entrada estándar de un carácter e indique en la salida 
estándar si el carácter es una vocal minúscula o no */

#include <iostream>

int main() {
	
	char letra_ch;
	
	std::cout<<"Digite una letra: \n";
	std::cin>>letra_ch;
	
		switch(letra_ch) {
			case 'a':
				std::cout<<"Es una vocal minuscula \n";
				break;
			case 'e':
				std::cout<<"Es una vocal minuscula \n";
				break;
			case 'i':
				std::cout<<"Es una vocal minuscula \n";
				break;
			case 'o':
				std::cout<<"Es una vocal minuscula \n";
				break;
			case 'u':
				std::cout<<"Es una vocal minuscula \n";
				break;
			default: std::cout<<"No es una vocal minuscula \n";
				break;
		}
	return 0; 
}
