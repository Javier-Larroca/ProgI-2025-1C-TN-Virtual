/*#include <iostream>
using namespace std;


int main()
{
    int numero, numeroAnterior;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    for(int i=0; i<5; i++)
    {
        cout<<"Primer numero del grupo: "<<numero<<endl;
        numeroAnterior=numero-1;
        while(numero>=numeroAnterior)
        {
            //Evaluo todo lo que sea necesario


            numeroAnterior=numero;
            cout<<"Ingrese un numero: ";
            cin>>numero;
        }
        cout<<"Sali del while"<<endl;
    }

    return 0;
}
*/


#include <iostream>
using namespace std;

int main()

{

    int n, nAnterior;
    cout << "Ingrese un numero: " << endl;
    cin>>n;

    for(int i=0; i<5; i++)
    {
        nAnterior=n;
        int cantidadPrimos=0;

        while(n>=nAnterior)
        {

            int contPrimos=0;

            for(int x=1; x<=n; x++)

            {

                if(n%x==0)

                {

                    contPrimos++;

                }

            }





            if(contPrimos==2)

            {

                cantidadPrimos++;

            }



            nAnterior=n;



            cout << "Ingrese otro numero: " << endl;

            cin>>n;

        }



        cout<<"La cantidad de primos que había en el lote es de: "<<cantidadPrimos<<endl;

    }

    return 0;
}
