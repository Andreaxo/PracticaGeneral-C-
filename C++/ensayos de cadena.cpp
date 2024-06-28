
#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	char nombre[40];
	char nombre2[40];
	char edad[3];
	char edad2[3];
	cout << "Ingrese la nombre 1: ";
	cin >> nombre;
	cout << "Ingrese el nombre 2: ";
	cin >> nombre2;
	cout << "Ingrese la edad: ";
	cin >> edad;
	cout << "Ingrese la edad: ";
	cin >> edad2;
	
	if (strcmp(edad,edad2)==0) {
		cout << endl << "Los dos tienen la misma edad" << endl;
	}
	else if (strcmp(edad2,edad)>0) {
		cout <<  endl << "Es mayor  " << nombre2 << endl;
	}else{
		cout << endl << "es mayor " << nombre << endl;
	}
	if (strcmp(edad,"18")>=0){
	    cout << nombre << " es mayor de edad" << endl;
	}else{
	    cout << nombre <<" Es menor de edad" << endl;
	}
	if (strcmp(edad2,"18")>=0){
	    cout << nombre2 << " es mayor de edad" << endl;
	}else{
	    cout << nombre2 << " es menor de edad" << endl;
	}
	
	}

