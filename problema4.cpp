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
#include <iostream>

using namespace std;

int problema4()
{
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
