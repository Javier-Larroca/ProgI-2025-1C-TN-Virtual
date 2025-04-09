#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado la fecha de nacimiento de una
 persona, ingresando día, mes y año como 3 datos individuales.
 Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa persona y listar por pantalla.
*/

int main()
{
    int diaAct, mesAct, anioAct, diaNac, mesNac, anioNac, edad;

    cout<<"----Ingrese fecha nacimiento-----"<<endl;
    cout<<"Dia: ";
    cin>>diaNac;
    cout<<"Mes: ";
    cin>>mesNac;
    cout<<"Año: ";
    cin>>anioNac;
    cout<<"----Ingrese fecha actual-----"<<endl;
    cout<<"Dia: ";
    cin>>diaAct;
    cout<<"Mes: ";
    cin>>mesAct;
    cout<<"Año: ";
    cin>>anioAct;

    edad = anioAct - anioNac;

    /*
    if(mesAct<mesNac)
    {
        //edad--;
        edad=edad-1;
    }
    else
    {
        /*if(mesAct == mesNac)
        {
            if(diaAct<diaNac)
            {
                edad--;
            }
        }
        if(mesAct == mesNac && diaAct<diaNac)
        {
            edad--;
        }
    }
    */
    if((mesAct<mesNac) || (mesAct == mesNac && diaAct<diaNac))
    {
        //edad--;
        edad=edad-1;
    }

    cout<<"La edad de la persona es: "<<edad<<" años"<<endl;

    return 0;
}
