#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;



int main() {

	//Ejercicio 1: Probado - Funciona
	int suma = (48 + 57);
	cout << suma << "\n";


	//Ejercicio 2: Probado - Funciona
	int suma2 = (10 + 5);
	cout << suma2 << "\n";

	// Ejercicio 3: Probado - Funciona

	int par;
	cout << "\n" << "Ingrese un numero: ";
	cin >> par;

	if (par % 2 == 0) {
		int division = par / 2;
		cout << division << " es el resultado de la division";
	}
	else {
		cout << "No es numero par";
	}

	//Ejercicio 4: Funciona - Probado

	int salarioBasico = 1300000;
	int bonificaciones = 100000;
	int seguridadSocial = 68000;
	int ventas;

	cout << "\n" << "Ingrese cuantas ventas realizó: ";
	cin >> ventas;
	int totalBonificaciones = ventas * bonificaciones;
	int totalGeneral = (salarioBasico + totalBonificaciones - seguridadSocial);
	cout << "\n" << "Su salario en total es de: " << totalGeneral;


	//Ejercicio 5: Probado - Funciona


	int valorAbsoluto;

	cout << "\n" << "Ingrese un número para calcular el valor absoluto: ";
	cin >> valorAbsoluto;
	cout << " | " << valorAbsoluto << " |";


	// Ejercicio 6: Funciona - Probado.

	int numA;
	int numB;


	cout << "Ingrese un numero 1: ";
	cin >> numA;
	cout << "Ingrese un numero 2: ";
	cin >> numB;

	int suma = numA + numB;
	int resta = numA - numB;
	int multiplicacion = numA * numB;
	int division = numA / numB;


	cout << "El resultado de la suma es: " << suma << "\n";
	cout << "El resultado de la resta es: " << resta << "\n";
	cout << "El resultado del producto es: " << multiplicacion << "\n";
	cout << "El resultado de la division es: " << division << "\n";

	//Ejercicio 7: Funciona - Probado.

	int num1;
	int num2;
	int num3;
	int num4;

	cout << "Ingresar un número 1:  ";
	cin >> num1;
	cout << " Ingresar un número 2: ";
	cin >> num2;

	int resta2 = num1 - num2;

	cout << "Ingresar un número 3: ";
	cin >> num3;
	cout << " Ingresar un número 4: ";
	cin >> num4;


	int suma3 = num3 + num4;
	int multi1 = suma3 * resta2;
	cout << suma3 << "  El resultado de la suma" << "\n";
	cout << resta2 << "  El resultado de la resta" << "\n";
	cout << multi1 << "  Es la multiplicación de la resta y la suma" << "\n";

	//Ejercicio 8: Funciona - Probado.

	int pesos;

	cout << "Ingrese un valor en $pesos:  ";
	cin >> pesos;

	int porcentaje = (pesos * 0.15);
	cout << porcentaje << "ese es el 15% del valor en pesos" << "\n";

	//Ejercicio 9: Funciona - Probado.

	int prom1;
	int prom2;
	int prom3;

	cout << "Ingrese un número: ";
	cin >> prom1;
	cout << "Ingrese otro número: ";
	cin >> prom2;
	cout << "Ingrese otro numero: ";
	cin >> prom3;

	int promedioTotal = (prom1 + prom2 + prom3) / 3;
	cout << "El promedio total de los tres numero es: " << promedioTotal;



	//Ejercicio 10: Funciona - Probado.

	string nombre;
	int id;
	string fecha;
	int matricula;

	cout << "¿Cual es tu nombre?";
	cin >> nombre;
	cout << "Tu numero de identificacion es: ";
	cin >> id;
	cout << "Tu fecha de nacimiento (dia/mes/año) ";
	cin >> fecha;
	cout << "¿Cuál es su valor de la matricula?";
	cin >> matricula;

	cout << "Hola, " << nombre << "\n" << "Tu número de ID es: " << id << "\n";
	cout << "El valor de tu matricula es: " << matricula << "\n";


	// Ejercicio 11: Funciona - probado.

	int numero1;

	cout << "Ingrese un número: ";
	cin >> numero1;

	int A = (numero1 + 1);
	int B = (A + 1);
	int C = (B + 1);
	int D = (C + 1);
	int E = (D + 1);
	cout << A << "\n" << B << "\n" << C << "\n" << D << "\n"  << E << "\n";

	// Ejercicio 12: Funciona - probado.

	int salario = 1300000;

	int incremento = salario * 0.25;

	cout << "\n";
	cout << incremento << " ese es el nuevo salario ";

	//Ejercicio 13: Funciona - probado.

	int a;
	int b;
	int c;


	cout << "Ingrese un numero: ";
	cin >> a;
	cout << "Ingrese otro número: ";
	cin >> b;
	cout << "Ingrese otro numero: ";
	cin >> c;
	int sum = a + b + c;
	int promedio = sum / 3;

	cout << "Este es el reporte" << "\n" << "Promedio: " << promedio << "\n" << "Suma: " << sum;

	//Ejercicio 14: Funciona - probado.

	int articulo;


	cout << "Ingrese el precio del producto: ";
	cin >> articulo;

	int utilidad = articulo * 0.3;
	int resto = articulo * 0.7;


	cout << "La utilidad que tendrá es de: " << "\n" << utilidad << "\n";
	cout << "Lo que tiene que vender es de: " << "\n" << resto << "\n";


	//Ejercicio 15 - Funciona - Probado

	int pi = 3.14;
	int r;


	cout << "Ingresa la longitud del circulo: ";
	cin >> r;

	int multi = r * r;
	int formula = multi / (4 * pi);

	cout << "El area del circulo: " << formula;

	//Ejercicio 16: Funciona - Probado 


	double nota1, nota2, nota3;
	cin >> nota1 >> nota2 >> nota3;

	double por1 = nota1 * 0.3;
	double por2 = nota2 * 0.3;
	double por3 = nota3 * 0.4;
	double suma1 = por1 + por2 + por3;

	double nota_minima_aprobacion = 3.0;
	double nota_aprobacion = nota_minima_aprobacion * 3.0;

	double resta = nota_aprobacion - suma1;
	resta = ((resta + abs(resta)) / 2);

	cout << "No aprobaste " << (resta / abs(resta)) << ", necesitas más de " << nota_minima_aprobacion << " y obtuviste: \n";
	cout << "Nota 1: " << por1 << "\n" << "Nota 2: " << por2 << "\n" << "Nota 3: " << por3 << "\n";



	//Ejercicio 17 - Funciona - Probado.

	int dinero;
	cout << "Ingresa el dinero disponible: ";
	cin >> dinero;

	int pla1 = (dinero * 0.3);
	int go1 = (dinero * 0.35);
	int sal1 = (dinero * 0.35);

	cout << "El dinero para planeacion es: " << pla1 << "\n";
	cout << "El dinero para el gobierno es: " << go1 << "\n";
	cout << "El dinero para el salud es: " << sal1 << "\n";


	//Ejercicio 18: Funciona - Probado.


	int din1;
	int din2;
	int din3;

	cout << "Ingrese el dinero de la persona 1: ";
	cin >> din1;
	cout << "Ingrese el dinero de la persona 2: ";
	cin >> din2;
	cout << "Ingrese el dinero de la persona 3: ";
	cin >> din3;

	int dinTotal = din1 + din2 + din3;
	int porcentajeTotal0 = (din1 * 100) / dinTotal;
	int porcentajeTotal1 = (din2 * 100) / dinTotal;
	int porcentajeTotal2 = (din3 * 100) / dinTotal;

	cout << "El porcentaje del dinero de la persona 1 es: " << porcentajeTotal0 << "%" << "\n";
	cout << "El porcentaje del dinero de la persona 2 es: " << porcentajeTotal1 << "%" << "\n";
	cout << "El porcentaje del dinero de la persona 2 es: " << porcentajeTotal2 << "%" << "\n";
	cout << "El dinero total es: " << dinTotal;



	//Ejercicio 19 - Funciona - Probado

	int b;
	int h;

	cout << "Ingresa la altura: ";
	cin >> h;
	cout << "Ingresa la base: ";
	cin >> b;

	int area = b * h;
	int elevado = pow(area, 2);

	cout << "El área del rectangulo: " << area << "\n";
	cout << "Elevado a la dos: " << elevado;

	//Ejercicio 20 - Funciona - probado.

	int notas1;
	int notas2;
	int notas3;

	cout << "Ingrese la nota 1: ";
	cin >> notas1;

	cout << "Ingrese la nota 2:  ";
	cin >> notas2;

	cout << "Ingresa la nota 3: ";
	cin >> notas3;

	int parcial = notas1 * 0.3;
	int talleres = notas2 * 0.2;
	int evalFinal = notas3 * 0.5;
	int promedioTotal = (parcial + talleres + evalFinal) / 3;


	cout << ("El promedio que tendrá en el parcial ") << promedioTotal;
	cout << "Nota 1: " << parcial << "\n" << "Nota 2: " << talleres << "\n" << "Nota 3: " << evalFinal << "\n";

	//Ejercicio 21: Funciona - Probado

	string nombre;
	int procesador;
	int ram;
	int discoDuro;
	int grafica;
	int pantalla;
	int ensamble = 300000;

	cout << "¿Cuál es tu nombre: ";
	cin >> nombre;
	cout << "Precio del procesador: ";
	cin >> procesador;
	cout << "Precio de la ram: ";
	cin >> ram;
	cout << "Precio del disco duro: ";
	cin >> discoDuro;
	cout << "Precio de la grafica: ";
	cin >> grafica;
	cout << "Precio de la pantalla: ";
	cin >> pantalla;

	int precioPc = procesador + ram + discoDuro + grafica + pantalla + ensamble;

	cout << "El precio de tu PC es : " << precioPc;
	cout << "\n" << "Incluye valor de ensamble";

	//Ejercicio 22
	// Ya se realizó en el 12.

	//Ejercicio 23 Funciona - Probado.

	int edad;
	cout << "¿Cuál es tu nombre?";
	cout << " Año de nacimiento ";
	cin >> edad;

	int edad1 = 2024 - edad;
	cout << "Su edad es: " << edad1;

	//Ejercicio 24: Funciona - Probado

	string  nombre;
	int cedula;

	cout << "Ingrese su nombre: ";
	cin >> nombre;

	cout << "Su cedula: ";
	cin >> cedula;

	cout << nombre << "    " << "su cedula: " << cedula;


	//Ejercicio 25 - Funciona - Probado


	int salarioBasico1 = 1300000;
	int comisiones2 = 100000;
	int seguridadSocial1 = salarioBasico1 * 0.07;
	int aporteCoop = seguridadSocial1 * 0.02;
	int ventas1;

	cout << "\n" << "Ingrese cuantas ventas realizó: ";
	cin >> ventas1;
	int totalBonificaciones1 = ventas1 * comisiones2;
	int totalGeneral1 = (salarioBasico1 + totalBonificaciones1 - seguridadSocial1 - aporteCoop);
	cout << "\n" << "Su salario en total es de: " << totalGeneral1;


	//Ejercicio 26 - Funciona

	int not1;
	int not2;
	int not3;

	cout << "Ingrese la nota 1: ";
	cin >> not1;

	cout << "Ingrese la nota 2:  ";
	cin >> not2;

	cout << "Ingresa la nota 3: ";
	cin >> not3;

	int parcial1 = not1 * 0.3;
	int parcial2 = not2 * 0.3;
	int evalFin = not3 * 0.4;

	cout << "El parcial 1 con el 30% de la nota fue de: " << parcial1 << "\n";
	cout << "El parcial 2 con el 30% de la nota fue de: " << parcial2 << "\n";
	cout << "La evaluación final con el 40% de la nota fue de: " << evalFin << "\n";



	//Ejercicio 27 - Funciona - Aprobado

	string asig1;
	string asig2;
	string asig3;
	string prof1;
	string prof2;
	string prof3;

	cout << "Asignatura 1: ";
	cin >> asig1;
	cout << "Profesor de asignatura 1: ";
	cin >> prof1;
	cout << "Asignatura 2: ";
	cin >> asig2;
	cout << "Profesor de asignatura 2: ";
	cin >> prof2;
	cout << "Asignatura 3: ";
	cin >> asig3;
	cout << "Profesor de asignatura 3: ";
	cin >> prof3;

	cout << "La asignatura 1 es: " << asig1 << "  " << " y el profesor es: " << prof1 << "\n";
	cout << "La asignatura es: " << asig2 << "  " << " y el profesor es : " << prof2 << "\n";
	cout << "La asignatura es: " << asig3 << "  " << " y el profesor es : " << prof3 << "\n";


	//Ejercicio 28: Funciona - Probado

	string fecha1;
	string fecha2;

	cout << "Ingrese fecha 1: ";
	cin >> fecha1;
	cout << "Ingrese fecha 2: ";
	cin >> fecha2;

	string temp1 = fecha1;
	string b1 = fecha2;

	cout << "La fecha 2  es: " << temp1;
	cout << "La fecha 1 es: " << b1;

	//Ejercicio 29: Funciona - Probado.

	int dineroX;


	cout << "Ingrese el dinero con el que se abrió la cuenta: ";
	cin >> dineroX;

	int rentabilidad = dineroX * 0.22 + dineroX;
	int rentabilidadB = rentabilidad * 1.22;
	int rentabilidadC = rentabilidadB * 1.22;

	cout << "La rentabilidad el primer año:  " << rentabilidad << "\n";
	cout << "La rentabilidad el segundo año:  " << rentabilidadB << "\n";
	cout << "La rentabilidad el tercero año: " << rentabilidadC;


	// Ejercicio 30: Funciona - Probado

	int numeroCualquiera;
	int porcentaje;

	cout << "Ingrese un número: ";
	cin >> numeroCualquiera;
	cout << "Ingrese un número para porcentaje: ";
	cin >> porcentaje;

	int porTotal1 = (numeroCualquiera * porcentaje) / 100;

	cout << "El porcentaje total es: " << porTotal1;

	// Ejercicio 31: Funciona - Probado

	int totalCompra;
	int porcentajeCompra = 0.15;
	cout << "Ingrese el total de su compra: ";
	cin >> totalCompra;

	int totalito = totalCompra * 0.15;
	int totalito2 = totalCompra - totalito;

	cout << "El 15% de su compra es: " << totalito;
	cout << "\n" << "Y el total de su compra incluyendo el descuento es: " << totalito2;


	// Ejercicio 32: Funciona - Probado

	int hombres;
	int mujeres;


	cout << "¿Cuantas mujeres hay en un grupo de estudiantes?: ";
	cin >> mujeres;
	cout << "¿Cuantos hombres hay en un grupo de estudiantes?: ";
	cin >> hombres;

	int totalEstudiantes = (mujeres + hombres);
	int porcentajeMujeres = (mujeres * 100) / totalEstudiantes;
	int porcentajeHombres = (hombres * 100) / totalEstudiantes;

	cout << "El total de estudiantes: " << totalEstudiantes << "\n";
	cout << porcentajeMujeres << "%" << "\n";
	cout << porcentajeHombres << "%";

	// Ejercicio 33: Funciona - Probado

	string nom;
	string apellido1;
	string id1;
	std::string carrera;

	cout << "------------ Proceso para inscripción a unitecnica --------" << "\n";
	cout << "Ingresa tu nombre y apellido: ";
	cin >> nom >> apellido1;
	cout << "Ingresa tu numero de identificacion: ";
	cin >> id1;
	cout << "Ingresa a la carrera que quieres entrar (completo): ";
	cin >> carrera;

	cout << "_______________________________ " << "\n";
	cout << "Quedaste inscrito: " << nom << " " << apellido1;
	cout << "\n" << "A la carrera de: " << carrera;
	cout << "\n" << "Con el numero de identificacion: " << id1;


	// Ejercicio 34: Funciona - Probado (El int tiene un limite de 2147483647 para las cedulas)

	std::string nombre;
	std::string apellido;
	int numeroID;

	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Ingrese su apellido: ";
	cin >> apellido;
	cout << "Ingrese su documento de identidad: ";
	cin >> numeroID;

	cout << "Ahora " << nombre << " " << apellido << "\n";
	cout << "Tiene su numero de cedula: " << numeroID;


	
	// Ejercicio 35: Funciona - Probado.

	int nume1;
	int nume2;
	int nume3;
	int nume4;

	cout << "Ingrese 1 número: ";
	cin >> nume1;
	cout << "Ingrese 2 numero: ";
	cin >> nume2;
	cout << "Ingrese 3 numero: ";
	cin >> nume3;
	cout << "Ingrese 4 numero: ";
	cin >> nume4;

	int A = nume2;
	int F = nume4;
	int C = nume1;
	int D = nume3;

	cout << "El numero 1 es: " << D << "\n";
	cout << "El numero 2 es: " << C << "\n";
	cout << "El numero 3 es: " << F << "\n";
	cout << "El numero 4 es: " << A << "\n";

}
