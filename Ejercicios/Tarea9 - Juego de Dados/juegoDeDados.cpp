/* Proposito: Juego De Los Dados 

   Autor: Katherine Alexandra Caseres Sabillon
   Fecha: miercoles 30 de marzo del 2022

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int dado1 = 0, dado2 = 0;
    int numero = 0, sumaDados = 0;

    do{
        system("cls");
        cout << endl;
        cout << "  ------------------------------------------ " << endl;
        cout << " | BIENVENIDO ESTE ES EL JUEGO DE LOS DADOS | " << endl;
        cout << "  ------------------------------------------ " << endl;
        cout << endl;
        cout << " Si la suma de tus dados es 2, 6 y 12 ganas, de lo contrario pierdes " << endl;
        cout << " Ingrese cualquier numero para lanzar los dados: ";
        cin >> numero;

        srand (time(NULL));

        dado1 = rand() % 6 + 1;
        cout << " Dado 1: " << dado1 << endl;

        dado2 = rand() % 6 + 1;
        cout << " Dado 2: " << dado2 << endl;

        sumaDados = dado1 + dado2;
        cout << " La suma de los dos dados es: " << sumaDados << endl;

        if ( sumaDados == 2 || sumaDados == 6 || sumaDados == 12)
        {
            cout << endl;
            break;

        } else
        {
            cout << endl;
            cout << " Lo siento has Perdidio, vulve a lanzar los dados :( " << endl;

            system("pause");
        }

    } while (sumaDados != 2 || sumaDados != 6 || sumaDados != 12 );

    cout << " * FELICIDADES HAS GANADO EL JUEGO :) * " << endl;

    return 0;
}
