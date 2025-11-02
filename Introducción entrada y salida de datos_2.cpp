#include <iostream>
using namespace std;

int main() {
	float monto_ft, iva_ft, montofin_ft;
	
	cout<<"Digite su monto: "<<endl;
	cin>>monto_ft;
	
	iva_ft=monto_ft*0.16;
	montofin_ft=monto_ft+iva_ft;
	
	cout<<"Su monto final es: "<<"$"<<montofin_ft<<endl;
	
	
	return 0;
}
