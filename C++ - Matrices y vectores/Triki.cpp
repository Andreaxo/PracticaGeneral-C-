#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	char numero[3][3] = {{ '1', '2', '3'}, { '4', '5', '6'}, { '7', '8', '9'}};
	int filaUsuario, columnaUsuario;

	srand(time(0));



	cout << "Juguemos triki! " << endl ;
	for(int f=0; f<3; f++){ //Este es el for de las filas
		for(int c=0; c<3; c++ ){ // Este es el for de las columnas
			 cout << numero[f][c]<<" | ";
		}
		cout << endl;
	}


	for(int i=0; i<9;i++){

		cout << endl << "Que fila eliges?: "; // JUGADA DEL USUARIO
		cin >> filaUsuario;
		cout << "Que columna eliges?: ";
		cin >> columnaUsuario;
		numero[filaUsuario][columnaUsuario]='X';
			for(int f=0; f<3; f++){ //Este es el for de las filas
		for(int c=0; c<3; c++ ){ // Este es el for de las columnas
			 cout << numero[f][c]<<" | ";
		}
		cout << endl;
	}

		int filaComputadora = rand()%3;  //Numeros al azar en cada for
		int columnaComputadora = rand()%3;
		numero[filaComputadora][columnaComputadora] = 'O';  // JUGADA DEL COMPUTADORA
 	if(numero[filaComputadora][columnaComputadora]=='O' and numero[filaUsuario][columnaUsuario]=='X'){   //EL IF SIRVE PARA QUE SI YA ESTA OCUPADO, Reintenta.
			cout << "La casilla esta ocupada - Computadora re intenta" << endl;
			i--;

		}


	for(int f=0; f<3; f++){ //Este es el for de las filas
		for(int c=0; c<3; c++ ){ // Este es el for de las columnas
			 cout << numero[f][c]<<" | ";
		}
		cout << endl;
	}

	//Verificar que gano el usuario
		if(numero[0][0]=='X' and numero[1][0]=='X' and numero[2][0]=='X'){
		cout << "Gano el usuario - Vertical	";
		cout << endl << "---------  Fin del juego --------";
		break;
	} else if (numero[0][0]=='X' and numero[1][1]=='X' and numero[2][2]=='X'){
		cout << "Gano el usuario";
		cout << endl << "---------  Fin del juego --------";
		break;
	} else if (numero[0][0]=='X' and numero[0][1]=='X' and numero[0][2]=='X'){
		cout << "Gano el usuario";
		cout << endl << "---------  Fin del juego --------";
		break;
	} else if (numero[0][2]=='X' and numero[1][2]=='X' and numero[2][2]=='X'){
		cout << "Gano el usuario";
		cout << endl << "---------  Fin del juego --------";
		break;
	} else if (numero[0][1]=='X' and numero[1][1]=='X' and numero[2][1]=='X'){
		cout << "Gano el usuario";
		cout << endl << "---------  Fin del juego --------";
		break;
	} else if (numero[1][0]=='X' and numero[1][1]=='X' and numero[1][2]=='X'){
		cout << "Gano el usuario";
		cout << endl << "---------  Fin del juego --------";
		break;
	} else if (numero[2][0]=='X' and numero[2][1]=='X' and numero[2][2]=='X'){
		cout << "Gano el usuario";
		cout << endl << "---------  Fin del juego --------";
		break;
	}
//Verificar si gano el computador:
	if(numero[0][0]=='O' and numero[1][0]=='O' and numero[2][0]=='O'){ //VERIFICAR GANADADORES
		cout << "Gano el computador - Vertical	";
		cout << endl << "---------  Fin del juego --------";
		break;
	}else if (numero[0][0]=='O' and numero[1][1]=='O' and numero[2][2]=='O'){
		cout << "Gano el computador";
		cout << endl << "---------  Fin del juego --------";
		break;
	} else if (numero[0][0]=='O' and numero[0][1]=='O' and numero[0][2]=='O'){
		cout << "Gano el computador";
		cout << endl << "---------  Fin del juego --------";
		break;
	} else if (numero[0][2]=='O' and numero[1][2]=='O' and numero[2][2]=='O'){
		cout << "Gano el computador";
		cout << endl << "---------  Fin del juego --------";
		break;
	} else if (numero[0][1]=='O' and numero[1][1]=='O' and numero[2][1]=='O'){
		cout << "Gano el computador";
		cout << endl << "---------  Fin del juego --)------";
		break;
	} else if (numero[1][0]=='O' and numero[1][1]=='O' and numero[1][2]=='O'){
		cout << "Gano el computador";
		cout << endl << "---------  Fin del juego --------";
		break;
	} else if (numero[2][0]=='O' and numero[2][1]=='O' and numero[2][2]=='O'){
		cout << "Gano el computador";
		cout << endl << "---------  Fin del juego --------";
		break;
}
}

}

