#include <iostream>
using namespace std;

/*
12 Hacer un programa para ingresar una lista de 10 números e informar el máximo
 de los negativos y el mínimo de los positivos.

 Ejemplo: 5, 8, 12, 2,-10, 15,-20, 8,-3, 24. Máximo Negativo-3. Mínimo Positivo 2.
 */

int main()
{
    int num, maximoNegativo = 0, minimoPositivo = 0;

    for(int x=0; x<5; x++)
    {
        cout<<"Ingrese un numero: ";
        cin>>num;

        if(num>0)
        {
            //Positivos
            if(minimoPositivo == 0 || num<minimoPositivo)
            {
                minimoPositivo = num;
            }
            /*
            else
            {
                if(num<minimoPositivo)
                {
                    minimoPositivo = num;
                }
            }
            */
        }
        else
        {
            //Negativos
            if(maximoNegativo == 0)
            {
                maximoNegativo = num;
            }
            else
            {
                if(num>maximoNegativo)
                {
                    maximoNegativo = num;
                }
            }
        }
    }



    /*
    bool ingresoPrimerPositivo = false;
    bool banderaPrimerNegativo = false;

    for(int x=0; x<5; x++)
    {
        cout<<"Ingrese un numero: ";
        cin>>num;

        if(num>0)
        {
            cout<<"Ingreso un positivo"<<endl;
            if(!ingresoPrimerPositivo || num<minimoPositivo)
            {
                ingresoPrimerPositivo = true;
                minimoPositivo=num;
            }

            //Cuando sea el primero inicializamos.
            //if(ingresoPrimerPositivo == false)
            //if(ingresoPrimerPositivo != true)
            /*
            if(!ingresoPrimerPositivo)
            {
                cout<<"Ingreso el primer positivo"<<endl;
                ingresoPrimerPositivo = true;
                minimoPositivo=num;
            }
            else
            {
                cout<<"Evalua si el numero es menor al menor"<<endl;
                if(num<minimoPositivo)
                {
                    cout<<"El numero es menor"<<endl;
                    minimoPositivo=num;
                }
            }
        }
        else
        {
            //Cuando sea el primero inicializamos.
            if(banderaPrimerNegativo==false)
            {
                banderaPrimerNegativo = true;
                maximoNegativo=num;
            }
            else
            {

                if(num>maximoNegativo)
                {
                    maximoNegativo=num;
                }
            }
        }
    }
        */



    cout<<endl;
    cout<<"Minimo positivo: "<<minimoPositivo<<endl;
    cout<<"Maximo negativo: "<<maximoNegativo<<endl;
    return 0;
}
