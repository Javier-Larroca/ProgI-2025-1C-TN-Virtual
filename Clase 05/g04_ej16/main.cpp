#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresan dos números consecutivos iguales, y luego informar el máximo.
Cuando se ingresa el número repetido el mismo debe ser descartado.
*/

int main()
{
    int numero, numeroAnterior, maximo;
    //bool seguirEjecutando=true;

    cout<<"Por favor, ingrese un numero: ";
    cin>>numero;

    numeroAnterior=numero-1;
    //numeroAnterior = 0;
    maximo=numero;

    while(numero!=numeroAnterior)
    //while(seguirEjecutando)
    {
        //cout<<"Numero: "<<numero<<" Numero anterior: "<<numeroAnterior<<endl;
        if(numero>maximo)
        {
            maximo=numero;
        }

        numeroAnterior = numero;
        cout<<"Por favor, ingrese un numero: ";
        cin>>numero;
        //if(numero==numeroAnterior)
        //{
        //    seguirEjecutando=false;
        //}
    }

    cout<<"El maximo numero ingresado fue: "<<maximo<<endl<<endl;

    return 0;
}








