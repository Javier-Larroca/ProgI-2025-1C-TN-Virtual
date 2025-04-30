#include <iostream>
using namespace std;

/*
 Una empresa registró las ventas que efectuó durante un día y para cada venta
 registró los siguientes datos:

 ● NúmerodeArtículo Vendido (1 a 30)
 ● CantidaddeUnidades Vendidas
 ● ImportedelaVenta

 El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0.
 En el lote anterior no aparecen registros de los artículos que por alguna razón
 no se hayan vendido durante el día. Los registros están agrupados por número
 de artículo.

  Se pide determinar e informar:
 a) La recaudación total para cada uno de los artículos vendidos. Se informa 1
 resultado para cada uno de los grupos.
 b) El número de artículo con mayor cantidad TOTAL de unidades vendidas
 */

int main()
{
    int numeroArticulo, cantidadUnidades, numeroArticuloActual, cantidadUnidadesPorArticulo, mayorCantidadDeArticulosVendidos, numeroArticuloMayorCantidadVendida;
    float importeVenta, recaudacionTotalPorArticulo;

    mayorCantidadDeArticulosVendidos = 0;
    cout<<"Ingrese numero de articulo: ";
    cin>>numeroArticulo;
    //cout<<"Ingrese cantidad de unidades vendidas: ";
    //cin>>cantidadUnidades;
    //cout<<"Ingrese importe de la venta: $";
    //cin>>importeVenta;

    while(numeroArticulo!=0)
    {
        numeroArticuloActual = numeroArticulo;

        recaudacionTotalPorArticulo=0; //Punto A
        cantidadUnidadesPorArticulo=0; //Punto B
        while(numeroArticulo == numeroArticuloActual)
        {
            cout<<"Ingrese cantidad de unidades vendidas: ";
            cin>>cantidadUnidades;
            cout<<"Ingrese importe de la venta: $";
            cin>>importeVenta;

            recaudacionTotalPorArticulo+=importeVenta; //Punto A
            cantidadUnidadesPorArticulo += cantidadUnidades; //Punto B

            cout<<"Ingrese numero de articulo: ";
            cin>>numeroArticulo;
            //cout<<"Ingrese cantidad de unidades vendidas: ";
            //cin>>cantidadUnidades;
            //cout<<"Ingrese importe de la venta: $";
            //cin>>importeVenta;
        }

        if(cantidadUnidadesPorArticulo>mayorCantidadDeArticulosVendidos)
        {
            mayorCantidadDeArticulosVendidos = cantidadUnidadesPorArticulo;
            numeroArticuloMayorCantidadVendida = numeroArticuloActual;
        }

        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"La recudación total del articulo "<<numeroArticuloActual<<" fue: "<<recaudacionTotalPorArticulo<<endl; //Punto A
    }

    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"El numero de articulo con mayor cantidad vendida fue: "<<numeroArticuloMayorCantidadVendida<<endl;


    return 0;
}
