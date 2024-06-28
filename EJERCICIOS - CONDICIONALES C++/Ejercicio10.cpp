#include <iostream>
using namespace std;

int main(){
float nota;
cout << "Ingrese un nota: ";
cin >> nota;

if (nota==5.0){
cout << "Tienes un desempeño excelente";
}
else if (nota>=4.0 and nota<5.0){
	cout << "Tienes un desempeño bueno";
} else if(nota>=3.0 and nota<4.0){
	cout << "Tienes un desempeño regular";
} if(nota>=0 and nota<3.0) {
	cout << "Tienes un desempeño deficiente";
}
return 0;
}