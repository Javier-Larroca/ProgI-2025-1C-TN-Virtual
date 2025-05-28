#include <iostream>
using namespace std;
/*
Una empresa posee un grupo de 15 vendedores para atender a sus clientes.
 Por cada venta realizada se genera un registro con la siguiente informaci�n:
  N�merodevendedor (1 a 15)
  Importe de la venta (en $)
 Un vendedor puede realizar m�s de una venta. El �ltimo registro se indica con
 n�mero de vendedor igual a 0.
 Se pide determinar e informar:

 a) El n�mero de vendedor que m�s vendi� en total (en $).

 b) Cada uno de los n�meros de vendedores que no hayan realizado ventas.
 c) El total recaudado por la empresa por todas las ventas efectuadas por sus
 vendedores
 */

int main()
{
    float ventas[15]={};
    int numVendedor, numVendorVentaMaxima;
    float importeVenta, ventaMaxima = 0;

    //Lote de carga
    cout<<"Ingrese numero de vendedor: ";
    cin>>numVendedor;
    while(numVendedor!=0)
    {
        cout<<"Ingrese el importe de la venta: $";
        cin>>importeVenta;

        //Buscar el indice que corresponda al codigoDeVendedor.

        ventas[numVendedor-1]+=importeVenta;

        cout<<"Ingrese numero de vendedor: ";
        cin>>numVendedor;
    }

    //Punto A
    //ventaMaxima = ventas[0];
    for(int i=0;i<15;i++)
    {
        if(ventas[i]>ventaMaxima)
        {
            ventaMaxima=ventas[i];
            numVendorVentaMaxima = i+1;
        }
    }

    cout<<"El numero de vendedor que m�s vendio fue: "<<numVendorVentaMaxima<<endl;


    return 0;
}
