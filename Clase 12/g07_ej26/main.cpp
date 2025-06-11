#include <iostream>
#include "Funciones.h"

using namespace std;


/*
Una empresa con varias sucursales, dispone de un primer lote de registros con la siguiente información:
  Número de artículo (1 a 25)
  Precio Unitario
 Este lote se encuentra desordenado.

Dispone de un segundo lote con la información de las ventas que se efectuaron en cada una de las sucursales, con la siguiente información:
  Númerodeartículo (1 a 25)
  Númerodesucursal (1 a 5)
  Cantidad vendida

Puede haber más de un registro para el mismo artículo y para la misma sucursal.
El último registro se indica con número de artículo igual a cero.

 Se pide determinar e informar:
 a) Cantidad total vendida por cada artículo.
 b) Monto total recaudado por la empresa.
 c) Número de sucursal que más artículos vendió en total. (sin discriminar por artículo)
 */

int main()
{
    int vecNroArticulo[25];
    float vecPrecioUnitario[25];
    int vecCantVendPorArticulo[25] = {};
    int cantArticulosVendPorSucursal[5]= {};
    int numArt, numSuc, cantVend, indice,indiceMax;// maximo=0;
    float montoTotalRecaudado=0;

    /*for(int i=0; i<3; i++)
    {
        cout<<"El siguiente ingreso se cargara en el indice: "<<i<<endl;
        cout<<"Ingrese el numero de articulo: ";
        cin>>numArt;
        cout<<"Ingrese el precio unitario: $";
        cin>>precioUnitario;
        vecNroArticulo[i]=numArt;
        vecPrecioUnitario[i]=precioUnitario;
    }*/
    ejecutarLoteDeCarga(25, vecNroArticulo, vecPrecioUnitario);

    cout<<"+++++++++++++++++++++++++++++++++++++"<<endl;

    cout<<"Ingrese el numero de articulo: ";
    cin>>numArt;
    while(numArt != 0)
    {
        cout<<"Ingrese el numero de sucursal: ";
        cin>>numSuc;
        cout<<"Ingrese la cantidad de articulos vendida: ";
        cin>>cantVend;

        /*for(int x=0; x<25; x++)
        {
            if(vecNroArticulo[x]==numArt)
            {
                indice=x;
            }
        }*/
        indice = buscarIndice(25, vecNroArticulo, numArt);
        if(indice<0)
        {
            cout<<"El numero de articulo ingresado no existe"<<endl;
        }
        else
        {
            //Punto A
            vecCantVendPorArticulo[indice]+=cantVend;

            //Punto B
            montoTotalRecaudado += cantVend * vecPrecioUnitario[indice];

            //Punto C
            cantArticulosVendPorSucursal[numSuc-1]+=cantVend;
        }

        cout<<"Ingrese el numero de articulo: ";
        cin>>numArt;
    }

    //Punto A
    for(int i=0; i<3; i++)
    {
        cout<<"------------------------"<<endl;
        cout<<"Numero de articulo: "<<vecNroArticulo[i]<<endl;
        cout<<"Cantidad vendida: "<<vecCantVendPorArticulo[i]<<endl;
    }
    cout<<"------------------------"<<endl;

    //Punto B
    cout<<endl;
    cout<<"{{{{{{{{{{{{{{{{{{{}}}}}}}}}}}}}}}}}}}"<<endl;
    cout<<"El monto total recaudado fue: $"<<montoTotalRecaudado<<endl;
    cout<<"{{{{{{{{{{{{{{{{{{{}}}}}}}}}}}}}}}}}}}"<<endl;

    indiceMax=0;
    for(int i=0; i<5; i++)
    {
        //if(cantArticulosVendPorSucursal[i]>maximo)
        if(cantArticulosVendPorSucursal[i]>cantArticulosVendPorSucursal[indiceMax])
        {
            //maximo=cantArticulosVendPorSucursal[i];
            indiceMax = i;
        }
    }

    cout<<"................................."<<endl;
    cout<<"La sucursal que mas vendio fue: "<<indiceMax+1<<" con "<<cantArticulosVendPorSucursal[indiceMax]<<" ventas."<<endl;
    cout<<"................................."<<endl;

    return 0;
}
