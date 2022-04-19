#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)                                                             // Funcion Productos
{
    system ("cls");
    int opcionProducto = 0;                                                            // Declaracion de la variable de elegir el producto del menu
    int opcionSabor = 0;                                                               // Declaracion de la variable de elegir el sabor del producto 

    switch (opcion)
    {
        case 1:                                                                        // Opcion del Menu, Crepas Dulces 
        {
            cout << endl;
            cout << " CREPAS DULCES " << endl;
            cout << " ************* " << endl;
            cout << " 1 - Crepa con Nutella " << endl;
            cout << " 2 - Crepa con Nutella, Fresas o Banano " << endl;
            cout << " 3 - Crepa con Mantequilla, Caramelo y Almendras " << endl;
            cout << " 4 - Crepa con Chocolate, Frutillas y Crema Chantilly " << endl;
            cout << " 5 - Crepa con Chocolate, Almendras y Crema Chantilly " << endl;
            cout << " Ingrese su opcion: ";
            cin >> opcionProducto;

                switch (opcionProducto)
                {
                    case 1:
                    agregarProducto (" 1 Crepa con Nutella - L. 70.00 ", 1, 70);
                    break;

                    case 2:
                    {
                        cout << endl;
                        cout << " 1- Crepa con Nutella y Fresa " << endl;
                        cout << " 2- Crepa con Nutella y Banano " << endl;
                        cout << " Ingrese su Opcion: ";
                        cin >> opcionSabor;

                        switch (opcionSabor)
                        {
                            case 1:
                            agregarProducto (" 1 Crepa con Nutella y Fresa - L.95.00 ", 1, 95);
                            break;

                            case 2:
                            agregarProducto (" 1 Crepa con Nutella y Banano - L. 95.00 ", 1, 95);
                            break;

                            default:
                            {
                                cout << endl;
                                cout << " OPCION NO VALIDA " << endl;

                                return;
                                break;
                            }
                        }
                    break;
                    }

                    case 3:
                    agregarProducto (" 1 Crepa con Mantequilla, Caramelo y Almendras - L. 95.00 ", 1, 95);
                    break;

                    case 4:
                    agregarProducto (" 1 Crepa con Chocolate, Frutillas y Crema Chantilly - L. 110.00 ", 1, 110);
                    break;

                    case 5:
                    agregarProducto (" 1 Crepa con Chocolate, Almendras y Crema Chantilly - L. 110.00 ", 1, 110);
                    break;

                    default:
                    {
                    cout << endl;
                    cout << " OPCION NO VALIDA " << endl;

                    system("pause");
                    return;
                    break;
                    }
                }

            cout << endl;
            cout << " Producto Agregado " << endl;
            break;
        }


        case 2:                                                                           // Opcion del Menu, Crepas Saladas                            
        {
            cout << endl;
            cout << " CREPAS SALADAS " << endl;
            cout << " ************** " << endl;
            cout << " 1 - Quepavo (Jamon de Pavo + Queso Crema) " << endl;
            cout << " 2 - Campesina (Jamon + Champiñones + Queso Mozzarella + Albahaca) " << endl;
            cout << " 3 - Pollo (Pechuga de Pollo + Tomate + Queso Parmesano + Albahaca) " << endl;
            cout << " Ingrese su opcion: ";
            cin >> opcionProducto;

                switch (opcionProducto)
                {
                    case 1:
                    agregarProducto (" 1 Crepa Quepavo L. 120.00 ", 1, 120);
                    break;

                    case 2:
                    agregarProducto (" 1 Crepa Campesina - L. 140.00 ", 1, 140);
                    break;

                    case 3:
                    agregarProducto (" 1 Crepa de Pollo - L. 140.00 ", 1, 140);
                    break;

                    default:
                    {
                    cout << endl;
                    cout << " OPCION NO VALIDA " << endl;

                    system("pause");
                    return;
                    break;
                    }
                }

            cout << endl;
            cout << " Producto Agregado " << endl;
        break;
        }


        case 3:                                                                                // Opcion del Menu, las Bebidas
        {
            cout << endl;
            cout << " BEBIDAS " << endl;
            cout << " ******* " << endl; 
            cout << " 1 - Te " << endl;
            cout << " 2 - Juegos Naturales " << endl;
            cout << " 3 - Malteadas " << endl;
            cout << " Ingrese su opcion: ";
            cin >> opcionProducto;

                switch (opcionProducto)
                {
                    case 1:
                    {  
                        cout << endl;
                        cout << " 1 - Te Verde " << endl;
                        cout << " 2 - Te Negro " << endl;
                        cout << " 3 - Te de Limon " << endl;
                        cout << " Ingrese su Opcion: ";
                        cin >> opcionSabor;

                        switch (opcionSabor)
                        {
                            case 1:
                            agregarProducto (" 1 Te Verde L. 40.00 ", 1, 40);
                            break;

                            case 2:
                            agregarProducto (" 1 Te Negro L. 40.00 ", 1, 40);
                            break;

                            case 3:
                            agregarProducto (" 1 Te de Limon L. 40.00 ", 1, 40);

                            default:
                            {
                                cout << endl;
                                cout << " OPCION NO VALIDA " << endl;

                                system("pause");
                                return;
                                break;
                            }
                        }

                        break;
                    } 

                    case 2:
                    {
                        cout << endl;
                        cout << " 1 - Fresa " << endl;
                        cout << " 2 - Naranja " << endl;
                        cout << " 3 - Limonada " << endl;
                        cout << " Ingrese su Opcion: ";
                        cin >> opcionSabor;

                        switch (opcionSabor)
                        {
                            case 1:
                            agregarProducto (" 1 Jugo de Fresa L. 45.00 ", 1, 45);
                            break;

                            case 2:
                            agregarProducto (" 1 Juego de Naranja L. 45.00 ", 1, 45);
                            break;

                            case 3:
                            agregarProducto (" 1 Limonada L. 45.00 ", 1, 45);
                            break;

                            default:
                            {
                                cout << endl;
                                cout << " OPCION NO VALIDA " << endl;

                                system("pause");
                                return;
                                break;
                            }
                        }

                        break;
                    }

                    case 3:
                    {
                        cout << endl;
                        cout << " 1 - Fresa " << endl;
                        cout << " 2 - Chocolate " << endl;
                        cout << " 3 - Mango " << endl;
                        cout << " 4 - Piña " << endl;
                        cout << " Ingrese su Opcion: ";
                        cin >> opcionSabor;

                        switch (opcionSabor)
                        {
                            case 1:
                            agregarProducto (" 1 Malteada de Fresa L. 50.00 ", 1, 50);
                            break;

                            case 2:
                            agregarProducto (" 1 Malteada de Chocolate L. 50.00 ", 1, 50);
                            break;

                            case 3:
                            agregarProducto (" 1 Malteada de Mango L. 60 ", 1, 60);
                            break;

                            case 4:
                            agregarProducto (" 1 Malteada de Piña L. 60.00 ", 1, 60);
                            break;

                            default:
                            {
                                cout << endl;
                                cout << " OPCION NO VALIDA " << endl;

                                system("pause");
                                return;
                                break;
                            }
                        }

                    break;
                    }

                    default:
                    {
                        cout << endl;
                        cout << " OPCION NO VALIDA " << endl;

                        system("pause");
                        return;
                        break;
                    }

                }

            cout << endl;
            cout << " Producto Agregado " << endl;
            break;
        }

        default:                                                                        // Opcion no Valida Segun el Menu
        {
        cout << " *OPCION NO VALIDA* " <<endl;

        system("pause");
        return;
        break;
        }
    }
}