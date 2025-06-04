#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>

using namespace std;

struct Jugador
{
    string nombre;
    int intentos;
};

void DefinirGanador(Jugador jugadores[]);
void CargarNombres(Jugador jugadores[]);

#endif // FUNCIONES_H_INCLUDED
