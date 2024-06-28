
#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	char nombre[40];
	char nombre2[40];
	int edad;
	int edad2;
	int mayor = 18;
	cout << "Ingrese la nombre 1: ";
	cin >> nombre;
	cout << "Ingrese el nombre 2: ";
	cin >> nombre2;
	cout << "Ingrese la edad: ";
	cin >> edad;
	cout << "Ingrese la edad: ";
	cin >> edad2;
	
	if (edad<0 or edad2<0){
	cout << "Error, ingrese de nuevo";
	}else{
	for (int i=edad ; i==edad2; i++){
		cout << "Los dos son iguales en edad " << edad << " " << edad2 << endl;
		break;
	}
	for(int i=18; i<=edad;i++){
		cout << nombre << " es mayor de edad " << edad << endl;
		break;
	}
	for(int i=18; i<=edad2;i++){
		cout << nombre2 << " es mayor de edad " << edad2 << endl;
		break;
	}
	for(int i=18; i>edad;){
		cout << nombre << " es menor de edad " << edad << endl;
		break;
	}
	for(int i=18; i>edad2;){
		cout << nombre2 << " es menor de edad " << edad2 << endl;
		break;
	}
	}
	}

