#include <iostream>
using namespace std;
int main() {
	float numero_1, numero_2;
	float resultado=0;
	
	cout<<"Digite dos numeros: \n";
	cin>>numero_1;
	cin>>numero_2;
	
	//Suma 
	resultado=numero_1+numero_2;
	cout<<"El resultado de la suma es: "<<resultado<<endl;
	//Resta
	resultado=numero_1-numero_2;
	cout<<"El resultado de la resta es: "<<resultado<<endl;
	//Multiplicación
	resultado=numero_1*numero_2;
	cout<<"El resultado de la multiplicacion es: "<<resultado<<endl;
	//División
	resultado=numero_1/numero_2;
	cout<<"El resultado de la division es: "<<resultado<<endl;
	
	
	
	
	return 0;
}
