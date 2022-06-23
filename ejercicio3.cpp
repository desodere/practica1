#include <iostream>

using namespace std;

void ejercicio3()
{

    int a;
        int b;

        cout << "Ingrese el primer numero: " << endl;
        cin >> a ;


        cout << "Ingrese el segundo numero: " << endl;
        cin >> b ;


        if (a < b) {
            cout <<b << " Es mayor ";
        }else if(a>b){
            cout <<a << " Es mayor ";
        }
        else{
            cout <<" Son iguales ";
        }


    //return 0;
}
