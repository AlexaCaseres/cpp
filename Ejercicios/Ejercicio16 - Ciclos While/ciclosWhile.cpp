#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 2;

    while ( a > b ){
        cout << " Ingrese el valor de a: " << endl;
        cin >> a;
    }

    cout << " \n Saliste del ciclo ";
    
    return 0;
}
