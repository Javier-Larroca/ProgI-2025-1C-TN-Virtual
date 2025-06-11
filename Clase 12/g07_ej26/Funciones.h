#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;

struct Articulo{
    int nroArticulo;
    float precio;
    //Mero ejemplo de un struct que contiene un vector.
    float porcjDescuento[7];
};

int buscarIndice(int tamanio, int vec[], int nroArticulo);
void ejecutarLoteDeCarga(int tamanio, int vecNroArticulos[], float vecPrecioUnitarios[]);
void ejecutarLoteDeCargaStruct(int tamanio, Articulo vecArticulos[]);

#endif // FUNCIONES_H_INCLUDED
