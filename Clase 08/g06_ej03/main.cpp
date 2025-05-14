#include <iostream>
using namespace std;

/*
 Hacer una funci�n llamada EsPrimo que determine si un n�mero es primo o
 no. La funci�n debe recibir el n�mero y devolver true si es primo o false si no lo
 es. La funci�n no debe mostrar nada por pantalla.
 Hacer un programa para ingresar un n�mero y, utilizando EsPrimo, emita luego
 un cartel indicando si el n�mero ingresado es primo o no es primo.
 */

int contarDivisores(int n)
{
    int cont = 0;
    for (int x=1; x<=n; x++)
    {
        if (n%x==0)
        {
            cont++;
        }
    }
    return cont;
}

bool esPrimo(int n)
{
    //int cant = contarDivisores(n);
    //if (cant==2)


    if(contarDivisores(n)==2)
    {
        return true;
    }
    //else
    //{
    //    return false;
    //}

    return false;

    //En una sola linea
    //return contarDivisores(n)==2;
}


int main()
{
    int numero;
    //bool resultado;
    cout<<"Ingrese un numero para saber si el mismo es o no primo: ";
    cin>>numero;

    //resultado = esPrimo(numero);
    //if(resultado==true)
    //if(esPrimo(numero)==true)
    if(esPrimo(numero))
    {
        cout<<"El numero es primo"<<endl;
    }
    else
    {
        cout<<"El numero no es primo, porque tiene "<<contarDivisores(numero)<<" divisores"<<endl;
    }

    return 0;
}
