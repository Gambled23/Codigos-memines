#include <iostream>
#include <cstdlib>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void menu();
void agregarElemento(Nodo *&, int);
void eliminarElemento(Nodo *&, int);

Nodo *pila = NULL; //crear pila
int main()
{
    menu();
    system("PAUSE");
    return 0;
}

void menu()
{
    int opc = 1, dato;

    while (opc != 0)
    {
        system("cls");
        cout << "\t Menu\n";
        cout << "1. Insertar elemento\n";
        cout << "2. Eliminar elemento\n";
        cout << "0. Salir";
        cin >> opc;
        switch (opc)
        {
        case 0:
            cout << "Gracias por su preferencia\n";
            break;
        case 1:
            cout << "Ingresa el dato a guardar: ";
            cin >> dato;
            agregarElemento(pila, dato);
            break;
        case 2:

            break;
        case 3:
            break;
        default:
            cout << "La opcion indicada no esta disponible\n";
            break;
        }
        system("PAUSE");
    }
}

void agregarElemento(Nodo *&pila, int n)
{
    Nodo *nuevo_nodo = new Nodo(); //Nodo recien creado
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}


