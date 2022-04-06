#include <iostream>

using namespace std;

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

            system("pause");
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
 
            system("pause");
            break;
        }

        default:
        break;
    }
}