#include <iostream>
using namespace std;

/*Hacer un programa para ingresar tres números distintos y listarlos ordenados
 de menor a mayor.
 Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
 Si N1=8, N2=6, N3=10 ó N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
 Si N1=6, N2=8, N3=10 ó N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
 Si N1=6, N2=10, N3=8 ó N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.
 */

int main()
{
    int n1, n2, n3, menor, medio, mayor;

    cout<<"Ingrese primer numero: ";
    cin>>n1;
    cout<<"Ingrese segundo numero: ";
    cin>>n2;
    cout<<"Ingrese tercer numero: ";
    cin>>n3;

    if(n1>n2 && n1>n3)
    {
        mayor = n1;
        if(n2>n3)
        {
            menor = n3;
            medio = n2;
        }
        else
        {
            menor = n2;
            medio = n3;
        }
    }
    else
    {
        if(n2>n3)
        {
            mayor = n2;
            if(n1>n3)
            {
                menor = n3;
                medio = n1;
            }
            else
            {
                menor = n1;
                medio = n3;
            }
        }
        else
        {
            mayor = n3;
            if(n2>n1)
            {
                menor = n1;
                medio = n2;
            }
            else
            {
                menor = n2;
                medio = n1;
            }
        }
    }

    cout<<endl;
    cout<<"Menor: "<<menor<<", medio: "<<medio<<", mayor: "<<mayor<<endl;

    return 0;
}
