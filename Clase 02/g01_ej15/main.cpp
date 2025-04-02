#include <iostream>
using namespace std;

/*
 La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
 temperatura m�nima en una zona y tiempo determinado. Dada la temperatura
 m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la
 amplitud t�rmica.
 NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al
 de la temperatura m�nima
 */

int main()
{
    setlocale(LC_ALL, "spanish");
    //Declaracion de variables
    float temperaturaMaxima, temperaturaMinima, amplitudTermica;

    //Ingreso de datos
    cout<<"----------AMPLITUD DE SAN FERNANDO----------"<<endl;
    cout << "Ingrese la temperatura maxima: ";
    cin>>temperaturaMaxima;
    cout << "Ingrese la temperatura minima: ";
    cin>>temperaturaMinima;

    //Proceso para calcular amplitud termica
    amplitudTermica = temperaturaMaxima - temperaturaMinima;

    //Egreso de la informaci�n
    cout<<endl;
    cout<<"La amplitud termica fue de: "<<amplitudTermica<<" �c"<<endl;

    return 0;
}
