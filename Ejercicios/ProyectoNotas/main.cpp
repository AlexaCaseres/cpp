/* Proposito: PROYECTO, Tabla de calificaciones de un grupo de estudiantes de 4to Grado

   Autor: Katherine Alexandra Caseres Sabillon
   Fecha de Entrega: viernes 29 de abril del 2022

*/

#include <iostream>

using namespace std;

extern void notas();
extern void resultados();

int main(int argc, char const *argv[])
{
    cout.precision(4);

    notas();
    resultados();

    return 0;
}
