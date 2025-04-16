#include <iostream>
using namespace std;

/*
 9 Hacer un programa para ingresar una lista de 10 números, luego informar el
 máximo.
 Ejemplo A: 5, 10, 20, 8, 25, 13, 35,-8,-5, 20. Se listará Máximo 35.
 Ejemplo B: 5, 10, 20, 8, 55, 13, 55,-8,-5, 20. Se listará Máximo 55.
 Ejemplo C:-15,-10,-20,-8,-25,-13,-55,-6,-55,-20. Se listará Máximo-6
 El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
 máximo es unpositivo.
 Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 9 y TP2 EJ 10.
 */

int main()
{
    int num, maximo;


    //Forma numero 1
    /*
    cout<<"Ingrese un numero: ";
    cin>>num;
    maximo=num;
    */

    for(int x=0; x<10; x++)
    {
        cout<<"Ingrese un numero: ";
        cin>>num;

        //Segunda forma
        if(x==0 || num>maximo)
        {
            maximo=num;
        }
        /*
        else
        {
            if(num>maximo)
            {
                maximo=num;
            }
        }
        */
    }

    cout<<"El maximo fue: "<<maximo<<endl;
    return 0;
}
