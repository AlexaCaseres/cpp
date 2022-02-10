#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << " Ingrese el valor de a: ";
    cin >> a;
    cout << " Ingrese el valor de b: ";
    cin >> b;
    cout << " Ingrese el valor de c: ";
    cin >> c;


    if ( a > b && a > c ){
        cout << " \n a es el mayor " << endl;
    } else {
        if ( b > a && b > c ){
            cout << " \n b es el mayor " << endl;
        } else {
            cout << " \n c es el mayor " << endl;
        }
    }
    
    return 0;
}
