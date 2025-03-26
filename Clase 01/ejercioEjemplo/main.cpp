#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado la cantidad de horas
trabajadas por un operario y el valor que se le paga por hora trabajada y
listar por pantalla el sueldo que le corresponda.
*/

int main()
{
    //Declaracion de variables
    int cantHorasTrabajadas;
/*  float valorHora;
    float sueldo; */
    float valorHora, sueldo;

    //Ingresos de datos
    cout<<"Ingrese la cantidad de horas trabajadas: ";
    cin>>cantHorasTrabajadas;
    cout<<"Ingrese el valor de la hora: $";
    cin >> valorHora;

    //Proceso de la informacion
    sueldo = cantHorasTrabajadas*valorHora;

    //Salida de información
/*  cout<<"El sueldo es de : $";
    cout<<sueldo;
    cout<<endl; */
    cout<<"El sueldo es de: $"<<sueldo<<endl;

    return 0;
}
