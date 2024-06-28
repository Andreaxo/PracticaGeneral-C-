#include <iostream>
using namespace std;

int main(){
	float nota1, nota2, nota3, promedio;
	string antecedente, nombre;

	cout << "Ingrese su nombre: ";
	getline (cin,nombre);
	cout << "?Tiene antecedentes disciplinarios? ";
	cin >> antecedente;
	cout << "Ingrese sus tres notas: ";
	cin >> nota1 >> nota2 >> nota3;

	promedio = (nota1+nota2+nota3)/3;

	if (promedio>4.0 and antecedente=="No"){
		cout << "Puedes optar por ser monitor, tienes los requisitos.";
	}
	else {
		cout << "Deberias optar por otra cosa, no puedes ser monitor.";
	}


}