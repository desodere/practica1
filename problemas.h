#ifndef PROBLEMAS_H
#define PROBLEMAS_H

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
using std::stoi;
using std::string;

void problema7()
{
 /*
Problema 7. Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 11 + 22 + 22 + 33 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.
 */
    int numero = 0;
    int n = 0, cont = 0, sum = 0;

    cout << "Ingrese un numero" << endl;
    cin >> numero ;


    while(numero>0){
        cout <<(numero%10)<<endl;
        n =  (numero%10);
        //cout <<(numero/10)<<endl;
        numero = numero/10;
        cout <<pow(n,n)<<endl;
        sum += pow((numero%10),(numero%10));
        cont++;
    }
    cout << cont ;
}

void problema1()
{
 /*
Problema 1. Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje según el caso.
Nota: el formato de salida debe ser:
no es una letra.
a es una vocal.
C es una consonante.
 */
    char caracter ;
    cout << "Ingrese un caracter: " << endl;
    cin >> caracter ;

    if((caracter>64) and (caracter<123)){

        if(caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U' ||
                caracter=='a' || caracter=='e' || caracter=='i' || caracter=='o' || caracter=='u'  ){
            cout << caracter << " es una vocal." << endl;
        }else{
            cout << caracter << " No es una vocal." << endl;
        }

    }else{
        cout << caracter << " no es una letra." << endl;
    }
    //return 0;
}

int problema2()
{
    /*
Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
     */
    int dinero,v50=0, v20=0, v10=0, v5=0;
        int   v2=0, v1=0, v05=0, v02=0, v01=0, v005=0;
        int    aux= 0;

        cout<<"introducir el dinero: ";
        cin >> dinero;
        aux = dinero;
        while ((aux>=50)){
            if ((aux / 50000)>0){
                v50++;
                aux-=50000;
            }else if((aux /20000)>0){
                v20++;
                aux-=20000;
            }else if((aux /10000)>0){
                v10++;
                aux-=10000;
            }else if((aux / 5000)>0){
                v5++;
                aux-=5000;
            }else if((aux / 2000)>0){
                v2++;
                aux-=2000;
            }else if((aux / 1000)>0){
                v1++;
                aux-=1000;
            }else if((aux / 500)>0){
                v05++;
                aux-=500;
            }else if((aux /200)>0){
                v02++;
                aux-=200;
            }else if((aux /100)>0){
                v01++;
                aux-=100;

            }else if((aux /50) >0){
                v005++;
                aux-=50;
            }else{
                cout <<"..."<< endl;

            }
        }

            cout << "50000: "<< v50 << endl;
            cout << "20000: "<< v20 << endl;
            cout << "10000: "<< v10 << endl;
            cout << "5000: " << v5 << endl;
            cout << "2000: " << v2 << endl;
            cout << "1000: " << v1<< endl;
            cout << "500: "<< v05 << endl;
            cout << "200: "<< v02 << endl;
            cout << "100: "<< v01 << endl;
            cout << "50: " << v005 << endl;
            cout << "restante: " << aux << endl;


    return 0;
}

int problema3()
{
    /*
    Problema 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
    si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
    imprimir “posiblemente año bisiesto”.
    Nota: el formato de salida debe ser:
    14 es un mes invalido.
    31/4 es una fecha invalida.
    27/4 es una fecha valida.
    29/2 es valida en bisiesto.
     */
    int mes = 0, dia = 0;

        cout<<"introducir el mes: ";
        cin >> mes;
        cout<<"introducir el dia: ";
        cin >> dia;
        switch (mes) {
        case 1:
            if(dia<=31){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 2:
            if(dia<29){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else if(dia==29){
                cout << dia <<"/" << mes << " Es valida en bisiesto." << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 3:
            if(dia<=31){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 4:
            if(dia<=30){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 5:
            if(dia<=31){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 6:
            if(dia<=30){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 7:
            if(dia<=31){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 8:
            if(dia<=31){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 9:
            if(dia<=30){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 10:
            if(dia<=31){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 11:
            if(dia<=30){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        case 12:
            if(dia<=31){
                cout << dia <<"/" << mes << " Es una fecha valida" << endl;
            }else{
                cout << dia <<"/" << mes << " Es una fecha invalida" << endl;
            }
            break;
        default:
            cout << mes << " es un mes invalido " << endl;
            break;
        }

    return 0;
}

int problema4(){
    /*
Problema 4. Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma infinita:
e = 1
0! + 1
1! + 1
2! + 1
3! + 1
4! + 1
5! + ... (2)
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 e = 1
0! + 1
1! + 1
2! = 2,5
Nota: el formato de salida debe ser: e es aproximadamente: 2.5
     */
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

int problema5()
{/*
Problema 5. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10
   */
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

void problema6(){
    /*
     * Problema 6. Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer
     */

    int a = 0, b = 0, c = 0, acum = 0, i = 1, m1 = 0, m2 = 0;

    cout << "Ingresar primer numero: " << endl ;
    cin >> a ;

    cout << "Ingresar segundo numero: " << endl ;
    cin >> b ;

    cout << "Ingresar tercer numero: " << endl ;
    cin >> c ;

    while (i<c)  {

        if((i % a)==0){
            m1++;
            acum += i ;
            cout << "m1"<<m1 << "("<< i <<")+";
        }else if ((i % b)==0){
            m2++;
            acum += i ;
            cout << "m2"<<m2 << "("<< i <<")+";
        }
        i++;
    }
    cout << "= " << acum;

}
#endif // PROBLEMAS_H
