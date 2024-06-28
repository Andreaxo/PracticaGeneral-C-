#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3, promedio;
	
	cout << "Ingrese tres números: ";
	cin >> num1 >> num2 >> num3;
	
	//MAXIMOS:
	if(num1>num2 and num1>num3){
		cout << "El número máximo es: " << num1 << endl;
	}
	else if(num2>num1 and num2>num3){
		cout << "El numero máximo es: " << num2 << endl;
	}
	else if(num3>num1 and num3>num2){
		cout << "El numero máximo es: " << num3 << endl;
	} 
	
	//Menores
	if(num1<num2 and num1<num3){
		cout << "El numero minimo es: " << num1 << endl;
	}
	else if (num2<num1 and num2<num3){
		cout << "El numero minimo es: " << num2 << endl;
	}
	else if (num3<num1 and num3<num2){
		cout << "El numero minimo es: " << num3 << endl;
	}
	
	//Promedio 
	promedio = (num1+num2+num3)/3;
	cout << "El promedio es: " << promedio << endl;
	
	
}
