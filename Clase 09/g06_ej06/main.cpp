#include <iostream>
using namespace std;

/*
 Hacer una funci�n que reciba un n�mero entero por valor llamado d�a y un
 string llamado nombre por referencia y le asigne el nombre correspondiente
 seg�n el n�mero de d�a. Siendo 0  Domingo y 6  S�bado.
 */

void DiaDeLaSemana(int dia, string &nombre)
{
    switch(dia)
    {
    case 0:
        nombre = "Domingo";
        break;
    case 1:
        nombre = "Lunes";
        break;
    case 2:
        nombre = "Martes";
        break;
    case 3:
        nombre = "Miercoles";
        break;
    case 4:
        nombre = "Jueves";
        break;
    case 5:
        nombre = "Viernes";
        break;
    case 6:
        nombre = "Sabado";
        break;
    default:
        nombre = "Dia invalido";
        break;
    }
}

int main()
{
    int dia;
    string nombreDia;

    cout<<"Ingrese un dia de la semana (0 - 6): ";
    cin>>dia;

    //cout<<"Dia antes de la funcion: "<<nombreDia<<endl;

    DiaDeLaSemana(dia, nombreDia);

    cout<<"El dia de la semana es: "<<nombreDia<<endl;

    return 0;
}
