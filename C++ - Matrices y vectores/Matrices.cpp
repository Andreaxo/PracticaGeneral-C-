#include <iostream>
using namespace std;
int main(){
    //FILAS [2] Y COLUMNAS [3]
	int numero[2][3] = {{ 1, 2, 3}, { 3, 4, 5}};

	for(int f=0; f<2; f++){ //Este es el for de las filas
		for(int c=0; c<3; c++ ){ // Este es el for de las columnas

			numero[f][c]=f+c;
			// cout << numero[f][c];
		}
	}

	for(int f=0; f<2; f++){ //Este es el for de las filas
		for(int c=0; c<3; c++ ){ // Este es el for de las columnas

			cout << numero[f][c];
			// cout << numero[f][c];
		}
		cout << endl;
	}
}