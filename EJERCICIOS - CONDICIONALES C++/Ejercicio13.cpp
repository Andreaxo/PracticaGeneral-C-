#include <iostream>
using namespace std;

int main(){
	int a, b, c;

	cout << "Ingrese 3 numeros:  ";
	cin >> a >> b >> c;

	if(b>a and b>c){
		cout << "Ahora el numero 1 es: " << b << endl << "Ahora el numero 2 es: " << c << endl << "Ahora el numero 3 es: " << a;
	}
	else{
		cout << "No se cumple la condicion";
	}
}