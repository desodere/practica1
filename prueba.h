#ifndef PRUEBA_H
#define PRUEBA_H

/*
Problema 5. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10
 */
#include <iostream>

using namespace std;

int pp()
{
    int num = 0, a = 1, b = 0, c = 0, acum = 0;


    cout << "Ingresar un numero: " << endl;
    cin >> num ;

    while (c<num) {
        cout << "c: " << c << endl ;
        c = a + b ;
        a = b ;
        b = c ;
        if((c % 2) == 0){
            acum += c ;
        }
    }
    cout << "acum: " << acum << endl ;
    return 0;

 }

int pp2(){
    float num = 0, e = 1, factorial = 1 ;


    cout << "Ingresar el numero de elementos usados en la aproximacion: " << endl;
    cin >> num ;

    for (int i = 1; i < num; ++i) {
        factorial *= i;
        cout << 1 << "/" << factorial<< endl;
        e = e + (1/(factorial));
    }
    cout << " e es aproximadamente: " << e<< endl;
    return 0;
}
#endif // PRUEBA_H
