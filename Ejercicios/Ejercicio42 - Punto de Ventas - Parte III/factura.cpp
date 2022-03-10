#include <iostream>

using namespace std;

double subtotal = 0;
string listaProductos;
double total = 0, impuesto = 0;

void agregarProducto (string descripcion, int cantidad, double precio)              // Funcion Agregar Producto
{
    listaProductos = listaProductos + descripcion + "\n";
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    total = total + (subtotal + impuesto);
}


void imprimirFactura()                                                            // Funcion Imprimir Factura
{
    system ("cls");
    cout << " -----------" << endl;
    cout << " | FACTURA | " << endl;
    cout << " -----------" << endl;

    cout << " Productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << " Subtotal: " << subtotal << endl;

    cout << " Impuesto del 15% " << endl;

    cout << endl;
    cout << " El total a Pagar es: " << total << endl;

}
