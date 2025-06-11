#include "Funciones.h"


int buscarIndice(int tamanio, int vec[], int nroArticulo)
{
    //int indice;
    for(int x=0; x<tamanio; x++)
    {
        cout<<"Vuelta: "<<x+1<<endl;
        if(vec[x]==nroArticulo)
        {
            //indice=x;
            return x;
        }
    }

    return -1;
}


void ejecutarLoteDeCarga(int tamanio, int vecNroArticulos[], float vecPrecioUnitarios[])
{
    int numArt;
    float precioUnitario;

    for(int i=0; i<tamanio; i++)
    {
        cout<<"Ingrese el numero de articulo: ";
        cin>>numArt;
        while(numArt<1 || numArt>25)
        {
            cout<<"El numero de articulo es incorrecto."<<endl;
            cout<<"Ingrese el numero de articulo: ";
            cin>>numArt;
        }
        //cin>>vecNroArticulos[i];
        cout<<"Ingrese el precio unitario: $";
        cin>>precioUnitario;
        vecNroArticulos[i]=numArt;
        vecPrecioUnitarios[i]=precioUnitario;
    }
}

void ejecutarLoteDeCargaStruct(int tamanio, Articulo vecArticulos[])
{
    int numArt;

    for(int i=0; i<tamanio; i++)
    {
        cout<<"Ingrese el numero de articulo: ";
        cin>>numArt;
        while(numArt<1 || numArt>25)
        {
            cout<<"El numero de articulo es incorrecto."<<endl;
            cout<<"Ingrese el numero de articulo: ";
            cin>>numArt;
        }
        vecArticulos[i].nroArticulo=numArt;
        cout<<"Ingrese el precio unitario: $";
        cin>>vecArticulos[i].precio;

        //Mero ejemplo de un struct que contiene un vector.
        for(int x=0; x<7;x++)
        {
            vecArticulos[i].porcjDescuento[x]=x+1;
        }
    }
}
