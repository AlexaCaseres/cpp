/* Proposito: Calcular el subtotal, impuesto a pagar y total

   Autor: Katherine Alexandra Caseres Sabillon
   Fecha: miercoles 9 de marzo del 2022

*/

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


void productos (int opcion)                                                         // Funcion Productos
{
    system ("cls");
    int opcionProducto = 0;

     switch (opcion)
    {
        case 1:
        {
            cout << endl;
            cout << " BEBIDAS CALIENTES " << endl;
            cout << " *****************" << endl;
            cout << " 1 - Capuccino " << endl;
            cout << " 2 - Expresso " << endl;
            cout << " Ingrese su opcion: ";
            cin >> opcionProducto;

                switch (opcionProducto)
                {
                    case 1:
                    agregarProducto (" 1 Capuccino - L 40.00 ", 1, 40);
                    break;

                    case 2:
                    agregarProducto (" 1 Expresso - L 30.00 ", 1, 30);
                    break;

                    default:
                    {
                    cout << " OPCION NO VALIDA ";
                    return;

                    break;}
                }

                cout << endl;
                cout << " Producto Agregado " << endl;
                system ("pause");
        break;
        }


        case 2:
        {
            cout << endl;
            cout << " BEBIDAS FRIAS " << endl;
            cout << " ************* " << endl;
            cout << " 1 - Te " << endl;
            cout << " 2 - Jugo de Naranja " << endl;
            cout << " 3 - Frappe de Fresa" << endl;
            cout << " Ingrese su opcion ";
            cin >> opcionProducto;

                switch (opcionProducto)
                {
                    case 1:
                    agregarProducto (" 1 Te L 40.00 ", 1, 40);
                    break;

                    case 2:
                    agregarProducto (" 1 Jugo de Naranja - L 25.00 ", 1, 25);
                    break;

                    case 3:
                    agregarProducto (" 1 Frappe de Fresa - L 60.00 ", 1, 60);
                    break;

                    default:
                    {
                    cout << " OPCION NO VALIDA ";
                    return;

                    break;}
                }

                cout << endl;
                cout << " Producto Agregado " << endl;
                system("pause");
        break;
        }


        case 3:
        {
            cout << endl;
            cout << " REPOSTERIA " << endl;
            cout << " ********** " << endl; 
            cout << " 1 - Muffins de Chocolate " << endl;
            cout << " 2 - Tres Leches " << endl;
            cout << " 3 - Flan con Frutas " << endl;
            cout << " Ingrese su opcion ";
            cin >> opcionProducto;

                switch (opcionProducto)
                {
                    case 1:
                    agregarProducto (" 1 Muffins de Chocolate L 40.00 ", 1, 40);
                    break;

                    case 2:
                    agregarProducto (" 1 Tres Leches - L 25.00 ", 1, 25);
                    break;

                    case 3:
                    agregarProducto (" 1 Flan con Frutas - L 60.00 ", 1, 60);
                    break;

                    default:
                    {
                    cout << " OPCION NO VALIDA ";
                    return;

                    break;}
                }
                
                cout << endl;
                cout << " Producto Agregado " << endl;
                system("pause");
        break;
        }
    }
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


void menu()                                                                   // Funcion Menu
{
    int opcion = 0;

    while (true)
    {
        cout << " ******** " << endl;
        cout << " * MENU * " << endl;
        cout << " ******** " << endl;

        cout << endl;
        cout << " 1 - Bebidas Calientes " << endl;
        cout << " 2 - Bebidas Frias " << endl;
        cout << " 3 - Reposteria " << endl;
        cout << " 4 - Imprimir Factura " << endl;
        cout << " 0 - Salir " << endl;

        cout << " Ingrese su opcion: ";
        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }

        if (opcion == 4)
        {
            imprimirFactura();
        } else{
            productos(opcion);
        }
    }
}


int main(int argc, char const *argv[])
{
    menu();
    
    return 0;
}
