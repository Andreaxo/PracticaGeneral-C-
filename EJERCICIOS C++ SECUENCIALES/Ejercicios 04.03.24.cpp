#include <iostream>
using namespace std;

// 1. Ingresar dos datos y saber cuál es el mayor.
int num1;
int num2;

cout << "Ingrese numero 1: ";
cin >> num1;
cout << "Ingrese numero 2: ";
cin >> num2;

if (num1>num2){
    cout << "El numero es mayor: " << num1;
} else {
    cout << "El numero es mayor : " << num2;
}

// 2. Ingrese dos números por teclado. Si es mayor al segundo entonces informar suma y diferencia. 
// En caso contrario de información el producto y la división del primero respecto.

float num1;
float num2;
int suma;
int resta;
int multi;
float division;


cout << "Ingrese numero 1: ";
cin >> num1;
cout << "Ingrese numero 2: ";
cin >> num2;

if (num1 > num2){
   suma = num1 + num2;
   resta = num1 - num2;
   cout << "La suma es: " << suma << "\n";
   cout << "La resta es: " << resta;
} else {
    multi = num1 * num2;
    cout << "El producto es: " << multi << "\n";
    cout << "La division es: " << num1/num2;
}

// 3. Se ingresan tres notas de un aprendiz, si el promedio es mayor o igual a 7, mostrar el mensaje aprobado:

int num1, num2, num3;
cout << "Ingrese nota 1: ";
cin >> num1;
cout << "Ingrese nota 2: ";
cin >> num2;
cout << "Ingrese nota 3: ";
cin >> num3;

float promedio = (num1+num2+num3)/3;

if (promedio>=7){
    cout << "Aprobaste, tienes: " << promedio;
}
else{
    cout << "No Aprobaste";
}


// 4.   Se ingresa por teclado un número positivo de uno o dos dígitos 
// y se muestra un mensaje indicando si el número tiene uno o dos dígitos
int num1;
cout << "Ingrese un numero: ";
cin >> num1;

if (num1<10){
    cout << "El numero tiene un digito es: " << num1;
}
else{
    cout << "El numero tiene dos digitos es: " << num1;
}

//5.  Ingresar 5 numeros diferentes por teclado, mostrar por pantalla el menor de ellos, y
//  el mayor de ellos y el valor nulo (0)
// 5.1  Si ingresan un número negativo, da error 

int num1;
int num2 ;
int num3 ;
int num4 ;
int num5 ;

cout << "Ingrese el 1 numero: ";
cin >> num1;
cout << "Ingrese el 2 numero: ";
cin >> num2;
cout << "Ingrese el 3 numero: ";
cin >> num3;
cout << "Ingrese el 4 numero: ";
cin >> num4;
cout << "Ingrese el 5 numero : ";
cin >> num5;



if (num1>num2 and num1>num3 and num1>num4 and num1>num5){
    cout << "El numero mayor es: " << num1 << "\n";
}

else if (num2>num1 and num2>num3 and num2>num4 and num2>num5){
    cout << "El numero mayor es: " << num2 << "\n";
    
}

else if (num3>num1 and num3>num2 and num3>4 and num3>num5){
    cout << "El numero mayor es: " << num3 << "\n";
}
   
else if (num4>num1 and num4>num2 and num4>num3 and num4>num5){
    cout << "El numero mayor es: " << num4 << "\n";
}

else if (num5>num1 and num5>num2 and num5>num3 and num5>num4){
    cout << "El numero mayor es: " << num5 << "\n";
}

//Menores: 
if (num1<num2 and num1<num3 and num1<num4 and num1<num5){
    cout << "El numero menor es: " << num1 << "\n";
}

else if (num2<num1 and num2<num3 and num2<num4 and num2<num5){
    cout << "El numero menor es: " << num2 << "\n";
    
}

else if (num3<num1 and num3<num2 and num3<4 and num3<num5){
    cout << "El numero menor es: " << num3 << "\n";
}
   
else if (num4<num1 and num4<num2 and num4<num3 and num4<num5){
    cout << "El numero menor es: " << num4 << "\n"; 
}

else if (num5<num1 and num5<num2 and num5<num3 and num5<num4){
    cout << "El numero menor es: " << num5 << "\n";
}

//Valores nulos
if (num1==0){
    cout << "El numero 1 es nulo: " << num1;
}

else if (num2==0){
    cout << "El numero 2 es nulo: " << num2;
    
}

else if (num3==0){
    cout << "El numero 3 es nulo: " << num3;
}
   
else if (num4==0){
    cout << "El numero 4 es nulo: " << num4;
}

else if (num5==0){
    cout << "El numero 5 es nulo: " << num5;
}
if (num1<0 or num2<0 or num3<0 or num4<0 or num5<0){
    cout << "\n El numero es negativo, hay error en el sistema";
}
return 0;

// 6. Cargar una fecha, dia/mes/año por teclado, e imprimir si estamos en el primer, 
// segundo o tercer trimestre del año.

    cout << "--------- Fecha -------------" << "\n";
    cout << "Ingresa el día: ";
    cin >> dia;
    cout << "Ingresa el mes: ";
    cin >> mes;
    cout << "Ingresa el año: ";
    cin >> año;
    
    if (mes<=3){
        cout << "Este es el primer trimestre del año " << año;
    }
    else if (mes>3 and mes<=6){
        cout << "Este es el segundo trimestre del año " << año;
    }
    
    else if(mes>6 and mes<=9){
        cout << "Este es el tercer trimestre del año " << año;
    }
    else if(mes>9 and mes<=12){
        cout << "Este es el cuarto trimestre del año " << año;
    }
    
    if(dia==25 and mes==12){
        cout << "\n ¡Feliz navidad! es 25 de diciembre";
    }
    if(dia==1 and mes==1){
        cout << "\n ¡Prospero año!"
    }


/*7.  De un programador se conoce su salario y años de antiguedad, se pide un programa que lea los datos de entrada y informe 
A. Si su salario es inferior al salario minimo y Su antiguedad es igual o superior a 10 años -> Otogarle un 20% de aumento. Imprimir su salario.
B. Si su salario es inferior al salario minimo, pero su antiguedad es menor a 10 años. Otorgarle un aumento de 5% -> Imprimir su salario.
C. Si su salario es menor al minimo, mostrar el salario en pantalla. */

int salarioMinimo = 1300000;
int salario;
int antiguedad;

cout << "Ingrese su salario: ";
cin >> salario;
cout << "Ingrese los años de antiguedad";
cin >> antiguedad;

if (salario<salarioMinimo and antiguedad>=10){
    int aumento = salario*0.2;
    cout << "Su salario tuvo un aumento del 20% " << aumento+salario;
}
if (salario<salarioMinimo and antiguedad<10){
    int aumento2 = salario*0.05;
    cout << "Su salario tuvo un aumento del 5% " << aumento2+salario; 
}
else{
    cout << "Su salario es de:" << salario;
}


// 8.  Numeros del 1 al 1000:

for (int i; i<=1000; i++){
    cout << i << "\n"
}

// 9. Programa que me permita ingresar 10 numeros, suma y promedio:

int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
cout << "Ingrese un número: ";
cin >> num1;
cout << "Ingrese un número: ";
cin >> num2;
cout << "Ingrese un número: ";
cin >> num3;
cout << "Ingrese un número: ";
cin >> num4;
cout << "Ingrese un número: ";
cin >> num5;
cout << "Ingrese un número: ";
cin >> num6;
cout << "Ingrese un número: ";
cin >> num7;
cout << "Ingrese un número: ";
cin >> num8;
cout << "Ingrese un número: ";
cin >> num9;
cout << "Ingrese un número: ";
cin >> num10;

int suma = (num1+num2+num3+num4+num5+num6+num7+num8+num9+num10);

cout << "La suma es: " <<suma << "\n";
cout << "El promedio es: " << suma/10;

// 10. Números de 8 en 8 al 8000:
for (int i = 0; i<=8000; i+=8){
    cout << i << "\n";
}
return 0;


// 11. Ingresar 10 números enteros, mostrar cuantos 
//valores ingresados fueron multiplos de 3 y cuantos de 5, tener en cuenta cuales son de 3 y de 5 a la vez

int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

cout << "Ingresa un digito: ";
cin >> num1;
cout << "Ingresa un digito: ";
cin >> num2;
cout << "Ingresa un digito: ";
cin >> num3;
cout << "Ingresa un digito: ";
cin >> num4;
cout << "Ingresa un digito: ";
cin >> num5;
cout << "Ingresa un digito: ";
cin >> num6;
cout << "Ingresa un digito: ";
cin >> num7;
cout << "Ingresa un digito: ";
cin >> num8;
cout << "Ingresa un digito: ";
cin >> num9;
cout << "Ingresa un digito: ";
cin >> num10;

if (num1%3==0 and num1%5==0){
    cout << "El numero " << num1 << ": es multiplo de 5 y 3" << endl;
}
else if(num1%3==0){
    cout << "El numero " << num1 << " Es multiplo de 3" << endl;
}
else if(num2%3==0){
    cout << "El numero 1" << num2 << " Es multiplo de 3"<< endl;
}
else if (num1%5==0){
    cout << "El numero " << num1 << " es multiplo de 5"<< endl;
}
else if(num3%3==0){
    cout << "El numero " << num3 << " Es multiplo de 3" << endl;
}
if (num2%5==0){
    cout << "El numero " << num2 << " es multiplo de 5" << endl;
}
if(num4%3==0){
    cout << "El numero " << num4 << " Es multiplo de 3" << endl;
}
if (num3%5==0){
    cout << "El numero " << num3 << " es multiplo de 5" << endl;
}
if(num5%3==0){
    cout << "El numero " << num5 << " Es multiplo de 3" << endl;
}
if (num4%5==0){
    cout << "El numero " << num4 << " es multiplo de 5" << endl;
}
if(num6%3==0){
    cout << "El numero " << num6 << " Es multiplo de 3" << endl;
}
if (num5%5==0){
    cout << "El numero " << num5 << " es multiplo de 5" << endl;
}
if(num7%3==0){
    cout << "El numero " << num7 << " Es multiplo de 3" << endl;
}
if (num6%5==0){
    cout << "El numero " << num6 << " es multiplo de 5"<< endl;
}
if(num8%3==0){
    cout << "El numero " << num8 << " Es multiplo de 3" << endl;
}
if (num7%5==0){
    cout << "El numero " << num7 << " es multiplo de 5" << endl;
}
if(num9%3==0){
    cout << "El numero " << num9 << " Es multiplo de 3" << endl;
}
if (num8%5==0){
    cout << "El numero " << num8 << " es multiplo de 5" << endl;
}
if(num10%3==0){
    cout << "El numero " << num10 << " Es multiplo de 3" << endl;
}
if (num9%5==0){
    cout << "El numero " << num9 << " es multiplo de 5" << endl;
}

if (num10%5==0){
    cout << "El numero " << num10 << " es multiplo de 5" << endl;
}


//12.  Un programa que me lea n números enteros y calcule la cantidad de valores mayores o iguales a 1000

int num;

cout << "Ingrese un numero: ";
cin >> num;

if (num>=1000){
    cout << "El numero es mayor a 1000 es: " <<num;
}else{
    cout << "El numero es menor a 1000";
    }

// 13.  Cuenta con la siguiente información: Edades de 4  estudiantes en la mañana, edades 
//de 4 estudiantes en la tarde, edades de 7 estudiantes en la noche y las edades se deben ingresar por teclado

int edad;
    int edadM;
    int edadT;
    int edadN;
    for(int i = 0; i<4;i++){
        cout << "Ingrese la edad del estudiante: " << endl;
        cin >> edad;
        cout << "La edad es " << edad << endl;
        edadM += edad;
        if (i==3){
            cout << "El promedio del turno de la mañana es: " << edadM/4 << "\n";
        }
    }

    
    for (int i=0; i<4; i++){
        cout << "Ingrese la edad del estudiante: " << endl;
        cin >> edad;
        cout << "La edad es " << edad << endl;
        edadT += edad;
        
        if (i==3){
            cout << "El promedio del turno de la tarde es: " << edadT/4 << "\n";
        }
        
    }

    
    for (int i=0; i<7; i++){
        cout << "Ingrese la edad del estudiante: "<<endl;
        cin >> edad;
        cout << "La edad es " << edad << endl;
        edadN += edad;
        if(i==3){
            cout << "El promedio del turno de la noche es: " << edadN/7 << endl;
        }
        
    }
    
    int promedioM = edadM/4;
    int promedioT = edadT/4;
    int promedioN = edadN/7;
    
    if (promedioM>promedioT and promedioM>promedioN){
        cout << "El promedio del turno de la mañana fue mayor con: " << promedioM;
    }
    
    if (promedioT>promedioM and promedioT>promedioN){
        cout << "El promedio del turno de la tarde fue mayor con: " << promedioT;
    }
    
    if (promedioN>promedioT and promedioN>promedioM){
        cout << "El promedio del turno de la noche fue mayor con: " << promedioN;
    }
 
    return 0;

   // WHILE CON NUMERO DEL 1 AL 5:
int i=0;
    while(i<5){
    i=i+1;
    cout << i <<endl;
    }
