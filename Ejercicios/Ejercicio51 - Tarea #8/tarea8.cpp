/* Proposito: Calcular la raiz cuadrada de un numero

   Autor: Katherine Alexandra Caseres Sabillon
   Fecha: miercoles 23 de marzo del 2022

*/

#include <iostream>
#include <math.h>

using namespace std;


double a = 0;

void raizCuadrada (double numero)
{
    double resultado = 0;

    cout << endl;
    cout << " CALCULO DE LA RAIZ CUADRADA DE UN NUMERO " << endl;
    cout << " ---------------------------------------- " << endl << endl;
    cout << " Ingrese un Numero: ";
    cin >> a;

    resultado = sqrt(a);

    cout << " La raiz cuadrada de " << a << " es: " << resultado << endl;
    cout << endl;

}

int main(int argc, char const *argv[])
{
    raizCuadrada(a);

    return 0;
}
