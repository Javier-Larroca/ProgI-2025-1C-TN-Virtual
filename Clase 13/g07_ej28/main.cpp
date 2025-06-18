#include <iostream>
#include "Funciones.h"

using namespace std;

/*
Un negocio de venta de libros cuenta con los siguientes lotes de informaci�n:
Un primer lote cuenta con los datos de los libros que este negocio vende. Cada
registro contiene:
  C�digo de Libro (1 a 200)
  Tema(1 a 20)
  Precio
Este lote cuenta con un total de 200 registros y se ingresa desordenado.

Un segundo lote con los datos de las ventas del �ltimo mes.
Cada registro contiene los siguientes datos:
  C�digo de Libro (1 a 200)
  N�mero de Vendedor (1 a 10)
  D�a de la venta (1 a 31)
Puede haber varios registros para el mismo c�digo de libro y para el mismo
vendedor. Este lote finaliza con un registro con c�digo de libro igual a cero.
Se pide determinar e informar:

a) Indicar por separado la recaudaci�n total para cada uno de las 31 d�as.

*/

int main()
{
    setlocale(LC_ALL, "Spanish");
    Libro vecLibros[200];
    float recaudacionPordia[31] = {};
    bool seCargaronLosLibros = false;
    bool seCargaronLasVentas = false;
    bool biblio = true;
    int opc;

    while(biblio)
    {
        system("cls");
        cout << "------------------------------------" << endl;
        cout << "   1 - Cargar registros de libros" << endl;
        cout << "   2 - Cargar registros de ventas" << endl;
        cout << "   3 - Ver reporte recudado por d�a" << endl;
        cout << "------------------------------------" << endl;
        cout << "             0 - SALIR" << endl;
        cout<<endl<<"          Opci�n: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            seCargaronLosLibros = cargarLibros(vecLibros);
            break;
        case 2:
            if (seCargaronLosLibros)
            {
                seCargaronLasVentas = cargarVentas(vecLibros, recaudacionPordia);
            }
            else
            {
                cout<<"A�n no se cargo el registro de libros."<<endl;
                system("pause");
            }
            break;
        case 3:
            if (seCargaronLasVentas)
            {
                mostrarRecaudacionPorDia(recaudacionPordia);
            }
            else
            {
                cout<<"A�n no se cargaron las ventas."<<endl;
                system("pause");
            }
            break;
        case 0:
            biblio = false;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }

    return 0;
}
