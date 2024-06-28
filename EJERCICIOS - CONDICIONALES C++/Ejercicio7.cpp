#include <iostream>
using namespace std;

int main(){
	
	int pagoBase = 350, comision=15, bono=40, ventas, Impuesto, sueldoBruto, sueldoNeto;
	string nombre;
	
	cout << "Ingrese un nombre: ";
	cin >> nombre;
	cout << "Ingrese el numero de ventas de autos: ";
	cin >> ventas;
	
	cout << endl << "Este es tu pago " << nombre << ": " << endl;

	
	

	if (ventas>15){
	
	Impuesto = (pagoBase+15*ventas+40)*0.25;
	cout << "Impuesto: " << Impuesto << endl;
	sueldoBruto = pagoBase+15*ventas+40;
	sueldoNeto = sueldoBruto-Impuesto;
	cout << "Sueldo bruto: "<<sueldoBruto << endl;
	cout << "Sueldo neto: "<<sueldoNeto << endl;
	
	}
	else{
	Impuesto = (pagoBase+15*ventas)*0.25;
	cout << "Impuesto: " << Impuesto << endl;
	sueldoBruto = pagoBase+15*ventas;
	sueldoNeto = sueldoBruto-Impuesto;
	cout << "Sueldo bruto: "<<sueldoBruto << endl;
	cout << "Sueldo neto: "<<sueldoNeto << endl;
	
	
	}

}