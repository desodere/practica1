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
#include <iostream>

using namespace std;

int problema3()
{
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
