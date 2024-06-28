#include <iostream>
using namespace std;


int main(){
	int valor;

	cout << "Ingrese un numero: ";
	cin >> valor;

	if (valor>0){
		cout << "El nmero es mayor a 0 ";

	}else {
		cout << "El numero es menor a 0";
	}

	if (valor%2==0){
		cout << endl << " El numero es par";
	}
	else if (valor%2==1){
		cout << endl <<"El numero es impar";
	}
}