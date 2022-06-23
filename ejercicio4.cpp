#include <iostream>

using namespace std;

void ejercicio4()
{

    int a;
        int b;

        cout << "Ingrese el primer numero: " << endl;
        cin >> a ;


        cout << "Ingrese el segundo numero: " << endl;
        cin >> b ;


        if (a < b) {
            cout <<a << " Es menor ";
        }else if(a>b){
            cout <<b << " Es menor ";
        }
        else{
            cout <<" Son iguales ";
        }


    //return 0;
}
