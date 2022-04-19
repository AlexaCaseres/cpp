#include <iostream>

using namespace std;

extern void productos(int opcion);
extern void imprimirFactura();

void menu()                                                                   // Funcion Menu
{
    int cliente = 0;
    int opcion = 0;

    while (true)
    {
        system("cls");
        
        cout << " LA CASA DE LAS CREPAS " << endl;

        cout << endl;
        cout << " ******** " << endl;
        cout << " * MENU * " << endl;
        cout << " ******** " << endl;

        cout << endl;
        cout << " 1 - Crepas Dulces " << endl;
        cout << " 2 - Crepas Saladas " << endl;
        cout << " 3 - Bebidas " << endl;
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

        system("pause");
    }
}

