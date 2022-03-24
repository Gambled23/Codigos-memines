#include <iostream>
#include <cstdlib>
#include "nodo.hpp"
#include "arbol.hpp"
using namespace std;

void menu();

int main()
{
    menu();
    system("PAUSE");
    return 0;
}

void menu()
{
    int opc;
    do
    {
        system("cls");
        cout << "Menu" << endl;
        cout << "1) " << endl;
        cout << "2) " << endl;
        cout << "3) " << endl;
        cout << "4) " << endl;
        cout << "5) " << endl;
        cout << "6) " << endl;
        cout << "7) " << endl;
        cout << "0) Salir" << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 7:
            /* code */
            break;
        case 0:
            cout << "Gracias por su preferencia" << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
        system("PAUSE");
    } while (opc != 0);
}