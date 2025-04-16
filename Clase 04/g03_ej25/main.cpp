#include <iostream>
using namespace std;

/*
Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y
 determine:
El legajo del empleado con mayor sueldo
*/

int main()
{
    int legajo, sueldo, sueldoMaximo, legajoConSueldoMaximo;

    for(int x=0; x<5; x++)
    {
        cout<<"Ingrese legajo: ";
        cin>>legajo;
        cout<<"Ingrese sueldo: $";
        cin>>sueldo;
        cout<<endl;

        /*
        if(x==0)
        {
            sueldoMaximo = sueldo;
            legajoConSueldoMaximo = legajo;
        }
        else if(sueldo>sueldoMaximo) */
        if(x==0 || sueldo>sueldoMaximo)
        {
            sueldoMaximo = sueldo;
            legajoConSueldoMaximo = legajo;
        }
        cout<<"Sueldo maximo al momento: $"<<sueldoMaximo<<" - Legajo: "<<legajoConSueldoMaximo<<endl<<endl;
    }

    cout<<endl<<"El legajo del mayor sueldo es: "<<legajoConSueldoMaximo<<" con un sueldo de: $"<<sueldoMaximo;

    return 0;
}
