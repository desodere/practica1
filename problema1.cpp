
#include <iostream>

using namespace std;



void problema1()
{
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
