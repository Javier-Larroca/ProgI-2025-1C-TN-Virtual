#include <iostream>
using namespace std;

/*
 Hacer un programa para ingresar una lista de 10 números y luego informar
 cuántos de los números ingresados son primos. Se informa 1 resultado al final.
*/

int main()
{
    int numero, cantidadPrimos, cantidadDivisores;

    cantidadPrimos=0;

    for(int i=0; i<5; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>numero;
        cantidadDivisores=0;

        for(int x=1; x<=numero; x++)
        {
            if(numero%x==0)
            {
                cantidadDivisores++;
            }
        }

        if(cantidadDivisores==2)
        {
            cantidadPrimos++;
        }
    }

    cout<<"Cantidad de primos: "<<cantidadPrimos<<endl;
    return 0;
}
