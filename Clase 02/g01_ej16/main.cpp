#include <iostream>
using namespace std;

/*
 El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada
 frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de
 Micilina y 7 mg de Ácido Sinítico.

 Nos solicitan un programa donde se ingrese la cantidad de frascos de un
 pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido
 Sinítico que son necesarios para elaborarlos.
 */

int main()
{
    //Declaracion e inicializacion de constantes
    const int CANTIDAD_PILDORAS_FRASCO = 50;
    const int MGRS_BETAMOL = 45;
    const int MGRS_MICILINA = 2 * 1000;
    const int MGRS_ACIDO_SINITICO = 7;

    //Declaracion de variables
    int cantidadFrascos, mgrsBetamol, mgrsMicilina, mgrsAcidoSinitico;

    //Ingreso de datos
    cout<<"Ingrese la cantidad de frascos que desea realizar: ";
    cin>>cantidadFrascos;

    //Proceso
    mgrsBetamol = cantidadFrascos * CANTIDAD_PILDORAS_FRASCO * MGRS_BETAMOL;
    mgrsMicilina = cantidadFrascos * CANTIDAD_PILDORAS_FRASCO * MGRS_MICILINA;
    mgrsAcidoSinitico = cantidadFrascos * CANTIDAD_PILDORAS_FRASCO * MGRS_ACIDO_SINITICO;

    //Salida de informacion:
    cout<<endl<<"Para relizar "<< cantidadFrascos <<" frascos se necesita:"<<endl;
    cout<<mgrsBetamol<<" mgrs de Betamol"<<endl;
    cout<<mgrsMicilina<<" mgrs de Micilina"<<endl;
    cout<<mgrsAcidoSinitico<<" mgrs de Acido Sinitico"<<endl;
    cout<<"-------------------------------"<<endl;

    return 0;
}
