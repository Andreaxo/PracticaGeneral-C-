#include <iostream>
using namespace std;

int main (){
	int edad;
	string nombre, cedula;

	cout << "Ingrese un nombre completo: ";
	getline  (cin,nombre);
	cout << "Ingrese su cedula: ";
	cin >> cedula;
	cout << "Ingrese su edad: ";
	cin >> edad;

	cout << "----------------------------------------" << endl;

	if (edad>=25 and edad<41){
		cout << nombre << " sera asignado por su edad de " << edad << endl << "con su numero de cedula: " << cedula << " al equipo de profesionales";
	}
	else if (edad>=18 and edad<25){
		cout << nombre << " sera asignado por su edad de " << edad << endl << "con su numero de cedula: " << cedula << " al equipo de aficionados";
	}
	else if (edad>=12 and edad<18){
			cout << nombre << " sera asignado por su edad de " << edad << endl << "con su numero de cedula: " << cedula << " al equipo de novatos";
	}
	else {
		cout << nombre << " no sera asignado a ningun equipo";
	}

}