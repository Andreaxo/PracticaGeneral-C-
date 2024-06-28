
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
	
	for (int i = 18; i==edad and i==edad2; i++){
		cout << "Los dos son iguales en edad";
	}
	for(int i=18; i>=edad and i<=edad2;i++){
		cout << nombre << " es mayor de edad";
		cout << nombre2 << " es menor de edad";
	}
	}

