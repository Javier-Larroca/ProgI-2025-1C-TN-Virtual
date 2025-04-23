#include <iostream>
using namespace std;

/*
 Hacer un programa que permita ingresar una lista de números positivos,
 negativos o cero hasta que se ingrese el 5º número par.
 Calcular e informar:
 La cantidad de ternas de números negativos ingresados de manera consecutiva

 Ejemplo A: 4,-1,-4,-5, 10,-3,-5, 7,-5,-3,-6, 10 → Cantidad de ternas:
*/

int main()
{
    int numero, cantidaPares, cantidadTernasNegativas, cantidadNegativosConsecutivos;

    cantidadTernasNegativas=0;
    cantidadNegativosConsecutivos=0;
    cantidaPares=0;

    while(cantidaPares<5)
    {
        cout<<"Ingres un numero: ";
        cin>>numero;

        if(numero%2==0)
        {
            cantidaPares++;
        }

        if(numero<0)
        {
            cantidadNegativosConsecutivos++;
            if(cantidadNegativosConsecutivos==3)
            {
                cantidadTernasNegativas++;
                cantidadNegativosConsecutivos=0;
            }
        }
        else
        {
            cantidadNegativosConsecutivos=0;
        }
    }

    system("cls");

    cout<<endl<<"La cantidad de ternas negativas fue de: "<<cantidadTernasNegativas<<endl;

    system("pause");

    return 0;
}
