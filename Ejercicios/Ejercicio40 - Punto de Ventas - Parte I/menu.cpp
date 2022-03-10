#include <iostream>

using namespace std;

extern void productos(int opcion);

void menu()                                                                   // Funcion Menu
{
    int opcion = 0;

    while (true)
    {
        system("cls");
        
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