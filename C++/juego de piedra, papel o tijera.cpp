#include <iostream>  //Para recibir entrada y salida de dato
#include <cstdlib>  //Todo lo que tenga que ver con números
#include <ctime> //Para fechas y tiempos.

using namespace std;

int main(){
	srand(time(0)); //Iniciar el tiempo de la partida.
	
	int opcionUsuario;
	int opcionComputadora;
	char continuar;
	
	cout << " ---- Bienvenido al juego de piedra, papel o tijera -------" << endl;
	do{
		cout << endl << "Elige la jugada: ";
		cout << endl << "1. - Piedra";
		cout << endl << "2. - Papel";
		cout << endl << "3. - Tijera";
		cout << endl << "Ahora ingrese su eleccion: ";
		cin >> opcionUsuario;
		
	
		
		//Generar un número al azar del 1 al 3 para la computadora
		opcionComputadora = rand()%3+1;
		
		//Selección de la computadora - Elección
		
		switch(opcionComputadora){
			case 1: 
			cout << "La computadora ha elegido: Piedra" << endl;
			break;
			
			case 2:
			cout << "La computadora ha elegido: Papel" << endl;
			break;
			
			case 3: 
			cout << "La computadora ha elegido: Tijera" << endl;
			break;
				}
					//Determinar ganador de la ronda
					if(opcionUsuario==opcionComputadora){
						cout << "Es empate - Computadora y usuario son iguales";
						
					}else if (opcionUsuario==1 and opcionComputadora==3 || opcionUsuario==2 and opcionComputadora==1 || opcionUsuario==3 and opcionComputadora==2){
						cout << "Ganaste la ronda - Gana el usuario!";

					}else {
						cout << "Gana la computadora la ronda! - Hazlo mejor en la otra ronda";
					}
					cout << endl << "¿Quieres jugar nuevamente? (S/N)";
					cin >> continuar;
					}
						while(continuar=='S' || continuar=='s');	
					cout << "Gracias por jugar. Muchas gracias." <<endl;
					return 0;
					
				
				
}