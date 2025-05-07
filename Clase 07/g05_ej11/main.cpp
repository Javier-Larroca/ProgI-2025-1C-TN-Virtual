#include <iostream>
using namespace std;

/*
Dada una lista de números compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:

a) Para cada uno de los grupos el máximo y mínimo de los números pares. Se
informan 2 resultados para cada grupo.
b) La cantidad de grupos donde se detectan 2 números perfectos
consecutivos. Se informa 1 resultado al final.
c) Informar cuántos grupos están formados por todos números alternados
positivos y negativos. Se informa 1 resultado al final. */

int main()
{
    //bool banderaHuboPar;
    bool elGrupoEsAlterno;
    int numero, maximoPar, minimoPar, cantGruposAlternos=0, numeroAnt; //cantDeNumeroPorGrupo, cantDeNumeroPorGrupoAlternos;

    for(int x=0; x<3; x++)
    {
        //banderaHuboPar = false;
        cout<<"Ingrese un numero: ";
        cin>>numero;
        numeroAnt = numero * -1;
        maximoPar=0;
        minimoPar=0;
        elGrupoEsAlterno=true;
        //cantDeNumeroPorGrupo=0;
        //cantDeNumeroPorGrupoAlternos=0;


        while(numero!=0)
        {
            cout<<"Numero: "<<numero<<" numero anterior: "<<numeroAnt<<endl;
            //cantDeNumeroPorGrupo++;
            //if(!((numero>0 && numeroAnt<0) || (numero<0 && numeroAnt>0)))
            if((numero>0 && numeroAnt>0) || (numero<0 && numeroAnt<0))
            {
                elGrupoEsAlterno=false;
                //cantDeNumeroPorGrupoAlternos++;
            }
            if(numero%2==0)
            {
                /*
                if(banderaHuboPar==false)
                {
                    maximoPar=numero;
                    minimoPar=numero;
                    banderaHuboPar=true;
                }
                else
                {
                if(maximoPar == 0)
                {
                    maximoPar=numero;
                    minimoPar=numero;
                }
                else
                {
                */
                if(maximoPar==0 || numero>maximoPar)
                {
                    maximoPar=numero;
                }

                if(minimoPar ==0 || numero<minimoPar)
                {
                    minimoPar=numero;
                }

                //}
                //}
            }

            numeroAnt=numero;
            cout<<"Ingrese un numero: ";
            cin>>numero;
        }

        //if(cantDeNumeroPorGrupoAlternos==cantDeNumeroPorGrupo)
        if(elGrupoEsAlterno==true)
        {
            cantGruposAlternos++;
        }

        if(minimoPar!=0)
        {
            cout<<"El maximo par fue: "<<maximoPar<<endl;
            cout<<"El minimo par fue: "<<minimoPar<<endl;
        }
        else
        {
            cout<<"No se ingresaron pares en el anterior grupo"<<endl;
        }

    }

    cout<<"La cantidad de grupos alternados fue: "<<cantGruposAlternos<<endl;

    return 0;
}
