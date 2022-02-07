#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Datos de Entrada
    double total = 0, subtotal = 0;
    double impuesto = 0.15;

    cout << " Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    // Proceso
    total = subtotal + (subtotal * impuesto);

    // Salida
    cout << " \n Total a pagar es: " << total << endl;

    return 0;
}
