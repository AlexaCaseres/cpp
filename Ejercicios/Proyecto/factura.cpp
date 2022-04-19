#include <iostream>

using namespace std;

// Declaracion de las Variables 
int cliente = 0;
double subtotal = 0;
string listaProductos;
double total = 0, impuesto = 0;
double descuentoPromocion = 0, totalPromocion = 0;

void agregarProducto (string descripcion, int cantidad, double precio)             // Funcion Agregar Producto
{
    listaProductos = listaProductos + descripcion + "\n";
    subtotal = subtotal + (cantidad * precio);
    impuesto = (subtotal * 0.15);
    total = (subtotal + impuesto);
    descuentoPromocion = total * 0.25;
    totalPromocion = total - descuentoPromocion;
}


void imprimirFactura()                                                            // Funcion Imprimir Factura
{
        system ("cls");
        cout << " -----------" << endl;
        cout << " | FACTURA | " << endl;
        cout << " -----------" << endl;

        if (total >= 200)                                                             // Factura de las personas que si aplican el descuento
            {

                cout << " \n Cliente No. " << cliente << endl;
                cout << " Productos: " << endl;
                cout << listaProductos;

                cout << endl;
                cout << " Subtotal: " << subtotal << endl;

                cout << " Impuesto 15%: " << impuesto << endl;

                cout << endl;
                cout << " Descuento del 25%, por la compra mayor de L. 200.00:  " << descuentoPromocion << endl;

                cout << endl;
                cout << " Total a Pagar: " << totalPromocion << endl;

                system("pause");
            }
        else                                                                             // Factura de las personas que no aplican el descuento
            {  
                cout << " \n Cliente No. " << cliente << endl;
                cout << " Productos: " << endl;
                cout << listaProductos;

                cout << endl;
                cout << " Subtotal: " << subtotal << endl;

                cout << " Impuesto 15%: " << impuesto << endl;

                cout << " * Esta Compra no Aplica el Descuento * " << endl;

                cout << endl;
                cout << " Total a Pagar: " << total << endl;

                system("pause");
            }
}
