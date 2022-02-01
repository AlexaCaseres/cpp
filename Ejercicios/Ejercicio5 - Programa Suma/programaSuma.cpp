#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Datos de entrada
    int a = 0;
    int b = 0;
    int resultado;

    cout << " Ingrese el valor de a: ";
    cin >> a;
    cout << " Ingrese el valor de b: ";
    cin >> b;

    // Proceso
    resultado = a + b;

    // Salida
    cout << " \n La suma de a + b es: " << resultado << endl;
    return 0;
}
