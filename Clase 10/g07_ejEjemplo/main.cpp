#include <iostream>

using namespace std;


int main()
{
    int n;
    int edades[5];
    for(int x=0; x<5; x++)
    {
        cout<<"Ingrese una edad:";
        cin>>n;
        edades[x] = n;
    }

    for(int x=0; x<5; x++)
    {
        cout<<"Indice: "<<x<<endl;
        cout<<"Posicion: "<<x+1<<endl;
        cout<<"Edad:"<<edades[x]<<endl;
    }

    return 0;
}





