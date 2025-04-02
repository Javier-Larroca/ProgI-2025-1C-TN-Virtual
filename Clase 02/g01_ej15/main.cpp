#include <iostream>
using namespace std;

/*
 La amplitud térmica es la diferencia entre la temperatura máxima y la
 temperatura mínima en una zona y tiempo determinado. Dada la temperatura
 máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la
 amplitud térmica.
 NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al
 de la temperatura mínima
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

    //Egreso de la información
    cout<<endl;
    cout<<"La amplitud termica fue de: "<<amplitudTermica<<" °c"<<endl;

    return 0;
}
