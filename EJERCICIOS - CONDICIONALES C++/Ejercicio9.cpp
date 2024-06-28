#include <iostream>
using namespace std;

int main(){
	string letra;
	cout << "Ingrese una palabra en mayuscula o minuscula: "; 
	cin >> letra;
	
	if(letra=="A"||letra=="E"||letra=="I"||letra=="O"||letra=="U"){
		cout << "La palabra esta en mayuscula";
	} else if (letra=="a"||letra=="e"||letra=="i"||letra=="o"||letra=="u"){
		cout << "La palabra esta en minuscula";
	}
	
	
}