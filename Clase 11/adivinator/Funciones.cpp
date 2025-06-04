#include "Funciones.h"

void DefinirGanador(Jugador jugadores[])
{
    if(jugadores[0].intentos<jugadores[1].intentos)
    {
        cout<<"FELICITACIONES "<<jugadores[0].nombre<<" GANASTE"<<endl<<endl;
    }
    else
    {
        cout<<"FELICITACIONES "<<jugadores[1].nombre<<" GANASTE"<<endl<<endl;
    }
}

void CargarNombres(Jugador jugadores[])
{
    for(int i=0; i<2; i++)
    {
        do
        {
            cout<<"Jugador nro "<<i+1<<endl;
            cout<<"Ingrese su nombre: ";
            //getline(cin, nombres[i]);
            getline(cin, jugadores[i].nombre);
        }
        while(jugadores[i].nombre=="" || jugadores[i].nombre==" ");
        //}while(nombre[i].empty());
    }
}
