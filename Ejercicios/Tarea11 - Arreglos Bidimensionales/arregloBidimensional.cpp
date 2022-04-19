/* Proposito: TAREA 11, Arreglo Bidimensional con valores random

   Autor: Katherine Alexandra Caseres Sabillon
   Fecha: miercoles 20 de abril del 2022

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    srand (time(NULL));

    int filas = 5;
    int columnas = 5;
    int sumaTotal = 0;

    int numero[filas][columnas] =
    {
        {rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1},
        {rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1},
        {rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1},
        {rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1},
        {rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1}
    };

    for (int v = 0; v < 5; v++)                                                  // Suma de todos los valores del arreglo bidimensional
    {
        for (int h = 0; h < 5; h++)
        {
            sumaTotal = sumaTotal + numero[h][v];
        }   
    }
    
    for (int i = 0; i < filas; i++)                                             // Mostrar en pantalla el arreglo  
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << numero[i][j] << "     ";
        }
        cout << endl;
    }

    cout << endl;
    cout << " Total Suma: " << sumaTotal << endl;

    return 0;
}
