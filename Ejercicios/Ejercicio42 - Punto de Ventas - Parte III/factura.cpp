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

