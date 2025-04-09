#include <iostream>
using namespace std;
/*
 Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
 números son positivos, cuantos son negativos y cuantos son iguales a 0.
 */

int main()
{
    int contPositivos = 0, contNegativos = 0, contCeros = 0, numero;

    for(int i=0; i<5; i++)
    {
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>numero;

        if(numero>0)
        {
            contPositivos++;
        }
        else if(numero<0)
        {
            contNegativos++;
        }
        else
        {
            contCeros++;
        }
    }

    cout<<endl;
    cout<<"Cantidad de positivos: "<<contPositivos<<endl;
    cout<<"Cantidad de negativos: "<<contNegativos<<endl;
    cout<<"Cantidad de ceros:     "<<contCeros<<endl;

    return 0;
}
