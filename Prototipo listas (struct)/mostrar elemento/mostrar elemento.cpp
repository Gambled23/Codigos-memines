#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void menu();
void insertarInicio(Nodo *&, int);
void insertarFinal(Nodo *&, int);
void mostrarLista(Nodo *);

Nodo *lista = NULL; //crear lista
int main()
{
    menu();

    system("PAUSE");
    return 0;
}
void menu()
{
    int opc = 1;
    int dato;
    while (opc != 0)
    {
        system("cls");
        cout << "\tMenu\n";
        cout << "1. Insertar al inicio\n";
        cout << "2. Insertar al final\n";
        cout << "3. Mostrar lista\n";
        cout << "0. Salir\n\n";
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "Ingrese un dato: ";
            cin >> dato;
            insertarInicio(lista, dato);
            break;
        case 2:
            cout << "Ingrese un dato: ";
            cin >> dato;
            insertarFinal(lista, dato);
            break;
        case 3:
            mostrarLista(lista);
            system("PAUSE");
            break;
        case 0:
            cout<<"Gracias por su preferencia\n";
            break;
        default:
            cout << ("La opcion solicitada no existe\n");
            break;
        }
    }
}

void insertarInicio(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo(); //crear nuevo nodo dinamico
    nuevo_nodo->dato = n;          //asignar dato al nuevo nodo
    Nodo *aux1 = lista;            //Auxiliar para saber el siguiente
    lista = nuevo_nodo;            //Apuntar al 1er elemento
    nuevo_nodo->siguiente = aux1;  //Asignar el puntero del nuevo nodo el siguiente nodo
}

void insertarFinal(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo(); //crear nuevo nodo dinamico
    nuevo_nodo->dato = n;          //asignar dato al nuevo nodo
    Nodo *aux1 = lista;            //Auxiliar para saber el siguiente
    Nodo *aux2;
    while (aux1 != NULL)
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    aux2->siguiente = nuevo_nodo;
    nuevo_nodo->siguiente = aux1; //Asignar el puntero del nuevo nodo el siguiente nod
}

void mostrarLista(Nodo *lista)
{
    Nodo *actual = new Nodo(); //Creamos nodo actual para saber en cual nodo estamos ubicados mientrar recorremos la lista
    actual = lista;            //Apuntar el nodo actual al inicio, para recorrer desde el 1er elemento

    while (actual != NULL) //Mientras sigamos apuntando a un dato, y no al NULL, significa que seguimos en la lista
    {
        cout << actual->dato << ", "; //Imprimir el dato en el que nos encontramos
        actual = actual->siguiente;   //Recorrer un nodo
    }
}