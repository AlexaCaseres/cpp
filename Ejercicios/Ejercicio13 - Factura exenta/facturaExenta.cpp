/* Proposito: FACTURA EXENTA

   Autor: Katherine Alexandra Caseres Sabillon
   Fecha: miercoles 9 de febrero del 2022

*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Entrada de Datos
    double subtotal = 0, total = 0;
    float impuesto = 0.15;
    int descuento = 0;
    char estaExenta = 0;
    double calculoDescuento = 0, calculoImpuesto = 0;

    cout << " Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << " Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    cout << " ¿Es factura exenta? Ingrese una S=si o N=no: ";
    cin >> estaExenta;

    // Proceso
    calculoDescuento = (subtotal * descuento) / 100;

    if ( estaExenta == 'S' || estaExenta == 's' )
    {
        calculoImpuesto = 0;
    }
    else
    {
        calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
    }

    total = subtotal - calculoDescuento + calculoImpuesto;


    // Salida
    cout << " \n Total a pagar es: " << total << endl;

    return 0;
}



