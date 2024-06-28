#include <iostream>
using namespace std;

int main(){

float num1, num2, num3, exam1;
cout << "Ingrese parcial 1: ";
cin >> num1;
cout << "Ingrese parcial 2: ";
cin >> num2;
cout << "Ingrese examen final: ";
cin >> num3;


float pro1 = num1*0.3;
float pro2 = num2*0.3;
float pro3 = num3*0.4;
float promedio = (pro1+pro2+pro3);

if (promedio>=3.5){
    cout << "Aprobaste, tienes: " << promedio;
}
else{
    cout << "No Aprobaste, tienes " << promedio;
}

}