#include <iostream>
using namespace std;

/*
Una empresa registr� las compras realizadas a sus distintos proveedores
 durante todo el a�o anterior. Para cada compra se registraron los siguientes
 datos:
  N�merodeproveedor(n�mero de cuatro cifras no correlativo).
  D�a(1a31).
  Mes(1a12).
  Tipo de Factura (Responsable inscripto: "A", Consumidor Final: "B", o
 Monotributo: "C").
  Monto de la compra.
 Este lote finaliza con un registro con n�mero de proveedor igual a 0.
 Los registros est�n agrupados por n�mero de proveedor. En el lote anterior no
 aparecen registros de los proveedores a los que que no se les hayan realizado
 compras.

  a) El monto m�ximo registrado en una sola compra por cada proveedor y el
    n�mero de proveedor al que se le compr�
  b) La inversi�n total de todo el a�o discriminada por tipo de factura.
 */

/*
int main()
{
   int numeroProveedor, dia,  mes, numeroProveedorAnterior;
   char tipoDeFactura;
   float montoCompra, montoMaximo;

   cout<<"Ingrese numero de proveedor: ";
   cin>>numeroProveedor;
   cout<<"Ingrese dia: ";
   cin>>dia;
   cout<<"Ingrese mes: ";
   cin>>mes;
   cout<<"Ingrese tipo de factura (A, B, C): ";
   cin>>tipoDeFactura;
   cout<<"Ingrese el monton de la compra: $";
   cin>>montoCompra;
   cout<<endl;


   while(numeroProveedor!=0)
   {
       numeroProveedorAnterior = numeroProveedor;
       montoMaximo=montoCompra;

       while(numeroProveedor==numeroProveedorAnterior)
       {
           if(montoCompra>montoMaximo)
           {
               montoMaximo = montoCompra;
           }

           cout<<"Ingrese numero de proveedor: ";
           cin>>numeroProveedor;
           cout<<"Ingrese dia: ";
           cin>>dia;
           cout<<"Ingrese mes: ";
           cin>>mes;
           cout<<"Ingrese tipo de factura (A, B, C): ";
           cin>>tipoDeFactura;
           cout<<"Ingrese el monton de la compra: $";
           cin>>montoCompra;
           cout<<endl;
       }

       cout<<"El monto maximo de la compra fue: $"<<montoMaximo<<" y el proveedor fue: "<<numeroProveedorAnterior<<endl;

   }


   return 0;
}
*/


int main()
{
    int numeroProveedor, dia,  mes, numeroProveedorAnterior;
    char tipoDeFactura;
    float montoCompra, inversionTotalA=0, inversionTotalB=0, inversionTotalC=0;

    cout<<"Ingrese numero de proveedor: ";
    cin>>numeroProveedor;
    cout<<"Ingrese dia: ";
    cin>>dia;
    cout<<"Ingrese mes: ";
    cin>>mes;
    cout<<"Ingrese tipo de factura (A, B, C): ";
    cin>>tipoDeFactura;
    cout<<"Ingrese el monton de la compra: $";
    cin>>montoCompra;
    cout<<endl;


    while(numeroProveedor!=0)
    {
        numeroProveedorAnterior = numeroProveedor;

        while(numeroProveedor==numeroProveedorAnterior)
        {
            switch(toupper(tipoDeFactura))
            {
            case 'A':
                inversionTotalA+=montoCompra;
                break;
            case 'B':
                inversionTotalB+=montoCompra;
                break;
            case 'C':
                inversionTotalC+=montoCompra;
                break;
            default:
                cout<<"Se ingreso tipo de factura incorrecto."<<endl;
                break;
            }

            cout<<"Ingrese numero de proveedor: ";
            cin>>numeroProveedor;
            cout<<"Ingrese dia: ";
            cin>>dia;
            cout<<"Ingrese mes: ";
            cin>>mes;
            cout<<"Ingrese tipo de factura (A, B, C): ";
            cin>>tipoDeFactura;
            cout<<"Ingrese el monton de la compra: $";
            cin>>montoCompra;
            cout<<endl;
        }
    }

    cout<<"-Inversion total por Factura A: $"<<inversionTotalA<<endl;
    cout<<"-Inversion total por Factura B: $"<<inversionTotalB<<endl;
    cout<<"-Inversion total por Factura C: $"<<inversionTotalC<<endl;

    return 0;
}
