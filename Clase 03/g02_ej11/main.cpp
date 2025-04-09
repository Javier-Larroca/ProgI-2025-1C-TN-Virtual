#include <iostream>
using namespace std;

/*
 Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
 números son positivos, cuantos son negativos y cuantos son iguales a 0.
*/
int main()
{
    //Declaracion de variables
    int n1, n2, n3, n4, n5, contNegativos;//, contCeros = 0;
    //Inicializacion de variables
    contNegativos = 0;
    int contPositivos = 0;
    int contCeros = 0;
    //contPositivos = 0;

    //Ingreso de datos
    cout<<"Ingrese numero 1: ";
    cin>>n1;

    cout<<"Ingrese numero 2: ";
    cin>>n2;

    cout<<"Ingrese numero 3: ";
    cin>>n3;

    cout<<"Ingrese numero 4: ";
    cin>>n4;

    cout<<"Ingrese numero 5: ";
    cin>>n5;

    //Proceso donde contamos
    if (n1>0)
    {
        contPositivos++;
    }
    else
    {
        if(n1<0)
        {
            contNegativos++;
        }
        else
        {
            contCeros++;
        }
    }

    if (n2>0)
    {
        contPositivos=contPositivos+1;
    }
    else if(n2<0)
    {
        contNegativos=contNegativos+1;
    }
    else
    {
        contCeros=contCeros+1;
    }


    if (n3>0)
    {
        contPositivos=contPositivos+1;
    }
    else
    {
        if(n3<0)
        {
            contNegativos=contNegativos+1;
        }
        else
        {
            contCeros=contCeros+1;
        }
    }

    if (n4>0)
    {
        contPositivos=contPositivos+1;
    }
    else
    {
        if(n4<0)
        {
            contNegativos=contNegativos+1;
        }
        else
        {
            contCeros=contCeros+1;
        }
    }

    if (n5>0)
    {
        contPositivos=contPositivos+1;
    }
    else
    {
        if(n5<0)
        {
            contNegativos=contNegativos+1;
        }
        else
        {
            contCeros=contCeros+1;
        }
    }

    cout<<endl;
    cout<<"Cantidad de positivos: "<<contPositivos<<endl;
    cout<<"Cantidad de negativos: "<<contNegativos<<endl;
    cout<<"Cantidad de ceros:     "<<contCeros<<endl;

    return 0;
}
