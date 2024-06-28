#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	
	cout << "Ingrese dos numeros : "; 
	cin >> num1 >> num2;
	
	if (num1>num2){
		cout << "Se han intercambiado variables, numero 1 ahora es: " << num2;
	}
	else{
		cout << "Se han intercambiado variables, el numero 2 ahora es " << num1;
	}


}
