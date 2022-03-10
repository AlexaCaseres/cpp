#include <iostream>

using namespace std;

extern void agregarProductos(string descripcion, int cantidad, double precio);

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