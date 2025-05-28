#include <iostream>
using namespace std;

/*
 Leer 10 números y guardarlos en un vector. Calcular el promedio y luego
 mostrar por pantalla los valores que son mayores al promedio.
 */

float calcularPromedio(int vNumero[], int cantidadNumeros)
{
    int acumulador=0;
    for(int i=0;i<cantidadNumeros;i++)
    {
        acumulador+=vNumero[i];
    }

    return acumulador/(float)cantidadNumeros;
}

int main()
{
    int const CANTIDAD_DE_NUMEROS = 5;
    float promedio;
    int numeros[CANTIDAD_DE_NUMEROS];
    //int n,
    int acumuladorDeNumeros = 0;

    for(int i=0; i<CANTIDAD_DE_NUMEROS; i++)
    {
        cout<<"Ingrese un numero: ";
        //cin>>n;
        //numeros[i]=n;
        cin>>numeros[i];
        //acumuladorDeNumeros += numeros[i];
    }

    //for(int i=0; i<CANTIDAD_DE_NUMEROS; i++)
    //{
    //    acumuladorDeNumeros += numeros[i];
    //}
    //promedio = acumuladorDeNumeros / CANTIDAD_DE_NUMEROS;

    promedio = calcularPromedio(numeros, CANTIDAD_DE_NUMEROS);

    cout<<"El promedio obtenido es: "<<promedio<<endl<<endl;

    cout<<"Los numeros mayores al promedio son: ";
    for(int i=0; i<CANTIDAD_DE_NUMEROS; i++)
    {
        if(numeros[i]>promedio)
        {
            cout<<numeros[i]<<", ";
            //cout<<"El "<<numeros[i]<<" es mayor al promedio"<<endl;
        }
    }
    cout<<endl;

    return 0;
}
