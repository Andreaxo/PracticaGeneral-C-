
#include <iostream>
using namespace std;

int main(){
int puntos;

cout << "Para poder saber en que clase va a viajar" << endl << "Ingrese cuantos puntos tiene: ";
cin >> puntos;

if(puntos>2000){
    cout << "Puedes estar en clase ejecutiva, ya que tienes " << puntos << " puntos";
}
else if(puntos>1000 and puntos<1999){
    cout << "Puedes estar en clase normal, ya que tienes " << puntos << " puntos";
}
else if (puntos<1000){
	cout << "Vas a estar en clase economica, porque tienes " << puntos; 
}


}
