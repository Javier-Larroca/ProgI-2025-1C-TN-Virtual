#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado 5 grupos compuestos por
 números ordenados de menor a mayor. El final de cada grupo se detecta al
 ingresar un número menor a su anterior.

Se debe obtener y emitir:
 a) Para cada uno de los grupos la cantidad de números primos que lo
 componen. Se informa 1 resultado por cada grupo.
 b) El menor número par de cada uno de los grupos. Se informa 1 resultado por
 cada grupo.
 c) El anteúltimo y último número positivo de cada uno de los grupos. Se
 informan 2 resultados por cada grupo.
 */

int main()
{
    int numero, numeroAnterior, cantidadNumerosPrimosPorGrupo, contadorDivisores, menorNumeroPar, ultimoPositivo, anteUltimoPositivo;
    bool banderaPrimerNumeroPar;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    for(int i=0; i<5; i++)
    {
        //cout<<"Primer numero del grupo: "<<numero<<endl;
        numeroAnterior=numero;
        cantidadNumerosPrimosPorGrupo=0; //Punto A
        banderaPrimerNumeroPar = false; //Punta B

        while(numero>=numeroAnterior)
        {

            //Punto A
            contadorDivisores=0;
            for(int x=1; x<=numero; x++)
            {
                if(numero%x==0)
                {
                    contadorDivisores++;
                }
            }
            if(contadorDivisores==2)
            {
                cantidadNumerosPrimosPorGrupo++;
            }

            //Punto B
            if(numero%2==0)
            {
                if(!banderaPrimerNumeroPar || numero<menorNumeroPar)
                {
                    banderaPrimerNumeroPar = true;
                    menorNumeroPar = numero;
                }
                //if(numero<menorNumeroPar)
                //{
                //    menorNumeroPar = numero;
                //}
            }

            //Punto C
            if(numero>0)
            {
                anteUltimoPositivo = ultimoPositivo;
                ultimoPositivo = numero;
            }

            numeroAnterior=numero;
            cout<<"Ingrese un numero: ";
            cin>>numero;
        }
        //system("cls");
        //Punto A
        cout<<"Se encontraron "<<cantidadNumerosPrimosPorGrupo<<" numeros primos en el grupo "<<i+1<<endl;
        //Punto B
        cout<<"El menor numero par del grupo fue: "<<menorNumeroPar<<endl;
        //Punto C
        cout<<"El ante ultimo numero positivo fue: "<<anteUltimoPositivo<<" y el ultimo fue: "<<ultimoPositivo<<endl;
        //cout<<"Sali del while"<<endl;
    }

    return 0;
}

