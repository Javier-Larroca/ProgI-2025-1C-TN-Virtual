#include <iostream>
#include <ctime>
#include "Funciones.h"

using namespace std;

/*
Desarrollar un juego de dos jugadores, donde el turno del segundo comenzará cuando finalice de jugar el primer jugador.
Nuestra computadora deberá elegir un número al azar para cada jugador entre el 1 y el 1000 sin mostrarlos al usuario, por cada intento fallido, le debemos indicar al jugador si el número que ingreso es menor o mayor al número esperado.
Una vez finalizado el juego de ambos jugadores, debemos indicar cuál de los dos fue el ganador.
*/

int main()
{
    srand(time(NULL));
    //string nombre[2];
    int numeroAdivinar, num; //cantIntentos[2];//={1,1};
    Jugador jugadores[2];

    cout<<"HOLA BIENVENIDO A ADIVINATOR"<<endl;

    CargarNombres(jugadores);

    for(int i=0; i<2; i++)
    {
        //cantIntentos[i]=1;
        jugadores[i].intentos = 1;
        numeroAdivinar = rand() % 10 + 1;

        system("cls");
        cout<<"Turno del jugador "<<i+1<<endl<<endl;

        cout<<"Ingrese un numero, para ver si adivina: ";
        cin>>num;

        while(num!=numeroAdivinar)
        {
            //cantIntentos[i]++;
            jugadores[i].intentos++;
            if(num>numeroAdivinar)
            {
                cout<<"El numero que ingresaste es mayor."<<endl;
            }
            else
            {
                cout<<"El numero que ingresaste es menor."<<endl;
            }

            cout<<"Ingrese un numero, para ver si adivina: ";
            cin>>num;
        }

        cout<<"Felicitaciones "<<jugadores[i].nombre<<endl;
        cout<<"¡Lograste adivinar el numero!"<<endl;
        cout<<"¡Lo lograste en: "<<jugadores[i].intentos<<" intentos"<<endl;
        system("pause");
    }

    DefinirGanador(jugadores);

    return 0;
}
