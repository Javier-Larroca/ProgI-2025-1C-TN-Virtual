#include <iostream>
using namespace std;

/*
Hacer una funci�n llamada Redondear que reciba como par�metro un n�mero
 float y devuelva un n�mero entero con el redondeo del mismo.
 Por ejemplo:
 Si recibe 7.78, debe devolver 8.
 Si recibe 7.48, debe devolver 7.
 Si recibe 7.5, debe devolver 8.
 Hacer un programa para ingresar un n�mero y, utilizando Redondear, emita
 luego un cartel indicando el n�mero redondeado.
*/

int Redondear(float numero)
{
    int numeroSinDecimal;
    float decimal;
    numeroSinDecimal = numero;
    decimal = numero - numeroSinDecimal;
    if(decimal >= 0.5)
    {
        numeroSinDecimal++;
    }

    return numeroSinDecimal;
}

int main()
{
    float n;

    cout << "Ingrese un numero decimal: ";
    cin >> n;

    cout<<"El numero redondeado es: "<< Redondear(n)<<endl;
    return 0;
}
