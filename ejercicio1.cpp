/*
Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
de la división A/B.
Ej: si se ingresan 8 y 3 se debe imprimir:
El residuo de la division 8/3 es: 2
*/

#include <iostream>

using namespace std;

void ejercicio1()
{

    int a, b ;

    cout << "Ingrese primer numero: " << endl;
    cin >> a ;

    cout << "Ingrese segundo numero: " << endl;
    cin >> b ;

    cout << "el residuo de la division de "<< a << " y " << b << " es: " << a%b << endl;


    //return 0;
}
