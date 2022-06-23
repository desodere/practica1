
#include <iostream>

using namespace std;

int problema2()
{
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
