#include <iostream>
using namespace std;

int main(){
float num1, num2, num3, num4, num5, num6, prom1, prom2, prom3;

cout << "Ingrese dos notas, del primer estudiante: ";
cin >> num1 >> num2;
cout << "Ingrese dos notas, del segundo estudiante: ";
cin >> num3 >> num4;
cout << "Ingrese dos notas, del tercer estudiante: ";
cin >> num5 >> num6;

prom1 = (num1+num2)/2;
prom2 = (num3+num4)/2;
prom3 = (num5+num6)/2;

//Mayor rendimiento
if (prom1>prom2 and prom1>prom3){
	cout << " El estudiante 1 tiene mejor rendimiento, saco un promedio de: " << prom1;
} else if (prom2>prom1 and prom2>prom3){
	cout << " El estudiante 2 tiene mejor rendimiento, saco un promedio de: " << prom2;
} else if (prom3>prom1 and prom3>prom2){
	cout << " El estudiante 3 tiene mejor rendimiento, saco un promedio de: " << prom3;
}

//Menor rendimiento
if (prom1<prom2 and prom1<prom3){
	cout << endl <<" El estudiante 1 tiene bajo rendimiento, saco un promedio de: " << prom1;
} else if (prom2<prom1 and prom2<prom3){
	cout << endl <<" El estudiante 2 tiene bajo rendimiento, saco un promedio de: " << prom2;
} else if (prom3<prom1 and prom3<prom2){
	cout << endl <<" El estudiante 3 tiene bajo rendimiento, saco un promedio de: " << prom3;
}
}