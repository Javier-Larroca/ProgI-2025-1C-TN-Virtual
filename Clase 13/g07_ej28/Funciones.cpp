#include "Funciones.h"

bool cargarLibros(Libro libros[])
{
    int codLibro;
    system("cls");
    cout<<"--SE INGRESO A LA CARGA DE LIBROS--"<<endl<<endl;
    for(int x=0; x<5; x++)
    {
        cout<<"Ingrese codigo de libro: ";
        cin>>codLibro;
        while(codLibro<0 || codLibro>200)
        {
            cout<<"Ingreso un codigo de libro erroneo."<<endl;
            cout<<"Ingrese codigo de libro: ";
            cin>>codLibro;
        }
        /*if(codLibro<0 || codLibro>200)
        {
            cout<<"Ingreso un codigo incorrecto."<<endl;
            system("pause");
            return false;
        }*/
        libros[x].codigo=codLibro;

        cout<<"Ingrese el tema del libro (1 a 20): ";
        cin>>libros[x].tema;
        while(libros[x].tema<0 || libros[x].tema>20)
        {
            cout<<"Ingreso un tema de libro erroneo."<<endl;
            cout<<"Ingrese el tema del libro (1 a 20): ";
            cin>>libros[x].tema;
        }

        cout<<"Ingrese el precio del libro: $";
        cin>>libros[x].precio;
        cout<<"-------------------------------------------"<<endl;
    }

    system("pause");
    return true;
}

int buscarIndiceLibro(Libro libros[], int codLibro)
{
    for(int x=0; x<200; x++)
    {
        if(libros[x].codigo==codLibro)
        {
            return x;
        }
    }

    return -1;
}


bool cargarVentas(Libro libros[], float recaudacionPordia[])
{
    int codLibro, numVendedor, diaVenta, indice;
    system("cls");
    cout<<"--SE INGRESO A LA CARGA DE VENTAS--"<<endl<<endl;
    cout<<"Ingrese el codigo de libro: ";
    cin>>codLibro;
    while(codLibro!=0)
    {
        cout<<"Ingrese el numero de vendedor: ";
        cin>>numVendedor;
        cout<<"Ingrese el día de la venta: ";
        cin>>diaVenta;

        indice = buscarIndiceLibro(libros, codLibro);

        if(indice==-1)
        {
            cout<<"Se ingreso un codigo de libro inexistente."<<endl;
        }
        else
        {
            recaudacionPordia[diaVenta-1]+=libros[indice].precio;
        }
        cout<<"-------------------------------------------"<<endl;

        cout<<"Ingrese el codigo de libro: ";
        cin>>codLibro;
    }

    system("pause");
    return true;
}

void mostrarRecaudacionPorDia(float recaudacionPorDia[])
{
    system("cls");
    cout<<"--SE INGRESO A EL REPORTE DE VENTAS POR DÍA--"<<endl<<endl;
    for(int x=0; x<31; x++)
    {
        cout<<"Recaudación día: "<<x+1<<" $: "<<recaudacionPorDia[x]<<endl;
    }

    system("pause");
}
