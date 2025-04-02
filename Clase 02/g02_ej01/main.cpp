#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado un número y luego emitir por
 pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
 Importante: Verifique que el programa emita UN SOLO CARTEL.
*/

int main()
{
    //Declaracion de variables
    int numero;

    //Ingreso de datos
    cout<<"Por favor ingrese un numero: ";
    cin>>numero;

    /*  if(numero>0)
        {
          cout<<"El numero es positivo"<<endl;
        }
        if(numero<0)
        {
            cout<<"El numero es negativo"<<endl;
        }
        if(numero==0)
        {
            cout<<"El numero es cero"<<endl;
        }
    */

    /*    if(numero>0)
        {
            cout<<"El numero es positivo"<<endl;
        }
        else
        {
            if(numero<0)
            {
                cout<<"El numero es negativo"<<endl;
            }
            else
            {
                cout<<"El numero es cero"<<endl;
            }
        }
    */

    /*  if(numero>0)
        {
            cout<<"El numero es positivo"<<endl;
        }
        else if(numero<0)
        {
            cout<<"El numero es negativo"<<endl;
        }
        else
        {
            cout<<"El numero es cero"<<endl;
        }
    */

    if(!(num < 0) && !(num > 0))
    {
        cout<<"El numero ingreso es 0";
    }
    else
    {
        if(num>0)
        {
            cout<<"El numero es positivo"<<endl;
        }
        else
        {
            cout<<"El numero es negativo"<<endl;
        }
    }

    return 0;
}
