/* Proposito: Suma de Pares e Impares y Total

   Autor: Katherine Alexandra Caseres Sabillon
   Fecha: miercoles 16 de febrero del 2022

*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0, impares = 0, total = 0;
 
    for (int i = 1; i <= 10; i++)
    {
        if ( i % 2 == 0 )
        {
            pares = pares + i;
        }
        else{
            impares = impares + i;
        }

        total = pares + impares;
        cout << i << " ";
    }

    cout << " \n Total pares: " << pares << endl;
    cout << " Total impares: " << impares << endl;
    cout << " Total: " << total << endl;
    
    return 0;
}
