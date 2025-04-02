#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.

 Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
 Importe: 4500, Descuento: 1800, total: 2700.
 */

int main()
{
    //Declaración de variables
    float importeCompra, descuentoAplicar, descuentoAplicado, importeConDescuento;

    //Ingreso de datos
    cout<< "Igrese el importe de la compra: ";
    cin>>importeCompra;
    cout<< "Ingrese el porcentaje de descuento a aplicar: %";
    cin>>descuentoAplicar;

    //Procesos
    descuentoAplicado = importeCompra * descuentoAplicar / 100;
    importeConDescuento = importeCompra - descuentoAplicado;

    //Salida de la información
    cout<<"Importe sin descuento: $"<<importeCompra<<endl;
    cout<<"Descuento a aplicar: $"<<descuentoAplicado<<endl;
    cout<<"Total a cobrar: $"<<importeConDescuento<<endl;

    return 0;
}
