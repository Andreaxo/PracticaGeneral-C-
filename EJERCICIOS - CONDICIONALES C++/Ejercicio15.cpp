#include <iostream>
using namespace std;

int main(){
	int sueldo, anoEmpresa;

	cout << "Ingrese su sueldo: ";
	cin >> sueldo;
	cout << "Ingrese los anos que ha estado en la empresa: ";
	cin >> anoEmpresa;

	if (sueldo<500 and anoEmpresa<4 and anoEmpresa>0){
		cout << "Estas en el nivel 1, porque tienes " << anoEmpresa << " anos en la empresa";
	}
	else if (sueldo>500 and sueldo<=1000 and anoEmpresa<4 and anoEmpresa>0){
		cout << "Estas en el nivel 2, porque tienes " << anoEmpresa << " anos en la empresa";
	}
	else if(anoEmpresa>10){
		cout << "Estas en el nivel 3, porque tienes " << anoEmpresa << " anos en la empresa";
	}
	else if(sueldo<2000 and anoEmpresa>4 and anoEmpresa<10){
		cout << "Estas en el nivel 4, porque tienes " << anoEmpresa << " anos en la empresa";
	}
	else {
		"No tienes ningun nivel, no eres de la empresa";
	}
}