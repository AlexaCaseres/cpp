/* Proposito: Calcular suma, resta, multiplicacion y division

   Autor: Katherine Alexandra Caseres Sabillon
   Fecha: miercoles 2 de febrero del 2022

*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    // Datos de Entrada
    int a = 0;
    int b = 0;
    int suma = 0, resta = 0, multiplicacion = 0;
    double division = 0;

    cout << " Ingrese el valor de a: ";
    cin >> a;
    cout << " Ingrese el valor de b: ";
    cin >> b;

    // Proceso
    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;

    // Salida 
    cout << " \n El resultado de a + b es: " << suma << endl;
    cout << " El resultado de a - b es: " << resta << endl;
    cout << " El resultado de a * b es: " << multiplicacion << endl;
    cout << " El resultado de a / b es: " << division << endl;

    return 0;
}
