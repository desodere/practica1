/*
Problema 14. La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
Tip: la serie termina al llegar a un elemento cuyo valor sea 1.

Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Nota: la salida del programa debe ser:
La serie mas larga es con la semilla: j, teniendo m terminos.
Otra nota: se le dará una bonificación si imprime la serie.
 */
#include <iostream>

using namespace std;

int problema14()
{
    int k = 0, n = 0, cont = 0;

        cout<<"introducir un numero: ";
        cin >> k;
        n = k;
        while (n>1) {
            cont++;
            if((n%2)==0){
                n/=2;
            }else{
                n = (3*n)+1;
            }
            cout << n << endl;
        }
    cout << "Terminos: " << cont << endl;
    return 0;
}
