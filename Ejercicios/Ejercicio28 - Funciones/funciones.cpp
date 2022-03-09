#include <iostream>

using namespace std;

int sumar() {
    return 5 + 7;
}

string nombreCompleto(){
    return " Juan Perez ";
}

int main(int argc, char const *argv[])
{
    int resultado = sumar();
    string nombreApellido = nombreCompleto();

    cout << " La suma de 5 + 7 es: " << resultado << endl;
    cout << nombreApellido;
    
    return 0;
}


