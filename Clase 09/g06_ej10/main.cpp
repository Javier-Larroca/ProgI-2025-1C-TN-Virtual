#include <iostream>
using namespace std;

/*
Hacer una función que reciba un código de naipe (del 1 al 40) y determine el
 número y el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines
 del mazo). La función debe recibir por referencia el número de naipe y el
 nombre del palo (para ser completados por la función) y por valor el código de
 naipe.
 Tener en cuenta que:
 Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del
 21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas
 */

void Carta(int codigoNaipe, int &numero, string &palo)
{
    if(codigoNaipe<11)
    {
        palo = "Espada";
    }
    else
    {
        if(codigoNaipe<21)
        {
            palo = "Basto";
            //codigoNaipe = codigoNaipe - 10;
        }
        else
        {
            if(codigoNaipe<31)
            {
                palo = "Copa";
                //codigoNaipe = codigoNaipe - 20;
            }
            else
            {
                palo = "Oro";
                //codigoNaipe = codigoNaipe - 30;
            }
        }
    }

    /*
    numero = codigoNaipe;

    if(codigoNaipe>7)
    {
        numero = codigoNaipe + 2;
    }
    */
    int resto = (codigoNaipe - 1) % 10 ;
    if(resto < 7){
        numero = resto + 1;
    }
    else
    {
        numero = (resto + 3);
    }
}

int main()
{
    int numeroCarta, codigoDeNaipe;
    string nombreDeCarta;

    cout<<"Ingrese el codigo de naipe: ";
    cin>>codigoDeNaipe;

    Carta(codigoDeNaipe, numeroCarta, nombreDeCarta);

    cout<<"El codigo ingresado corresponde al "<<numeroCarta<<" de "<<nombreDeCarta<<endl;
    return 0;
}














