#include <iostream>
using namespace std;

int main(){

	int numero [5] = {20, 27, 64, 18, 95}; //DECLARAR ARREGLOS.
	//ARREGLOS:
	int resultado = 0;
	for (int i=0;i<5;i++){
		resultado = resultado+numero[i];

	}
	cout << resultado;
  	//ARREGLOS UNIDIMENSIONALES

	/*	for (int i=0; i<10; i++){
		numero[i] = i+1;
		cout << numero[i] << endl;
	}*/
}