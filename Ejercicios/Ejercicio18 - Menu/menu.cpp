#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while ( true ){

        cout << " **** ";
        cout << " MENU ";
        cout << " **** ";

        cout << " \n 1 - Cafe y Granitas " << endl;
        cout << " 2 - Reposteria " << endl;
        cout << " 0 - Salir " << endl;

        cout << " Ingrese una opcion del menu: ";
        cin >> opcion;

        if ( opcion == 1 ){
            system ("cls");
            cout << " \n Estas en el menu de Cafe y Granitas ";
            system ("pause");
        }
        if ( opcion == 2 ){
            system ("cls");
            cout << " \n Estas en el menu de Reposteria ";
            system ("pause");
        }
        if (opcion == 0 ){
            break;
        }
    }

    cout << " \n Saliste del Sistema ";
    return 0;
}
