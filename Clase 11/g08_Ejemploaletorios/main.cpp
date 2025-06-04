#include <iostream>
#include <ctime>
using namespace std;

//Ejemplo: Se requiere un programa que almacene los números aleatorios del 1 al 10.

int main()
{
    int numeros[10];

    //cout<<"Segundos: "<<time(NULL)<<endl;

    srand(time(NULL));

    for(int i = 0; i < 10; i++)
    {
        numeros[i] = rand() % 10 + 1;
    }

    for(int i = 0; i < 10; i++)
    {
        cout<<"Numero: "<<i+1<<" :"<<numeros[i]<<endl;
    }

    return 0;
}
