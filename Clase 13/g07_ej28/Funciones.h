#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
using namespace std;

struct Libro{
    int codigo;
    int tema;
    float precio;
};

bool cargarLibros(Libro libros[]);
int buscarIndiceLibro(Libro libros[], int codLibro);
bool cargarVentas(Libro libros[], float recaudacionPorDia[]);
void mostrarRecaudacionPorDia(float recaudacionPorDia[]);

#endif // FUNCIONES_H_INCLUDED
