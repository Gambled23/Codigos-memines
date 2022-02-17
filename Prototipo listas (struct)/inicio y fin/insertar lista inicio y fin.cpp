#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarInicio(Nodo *&, int);
void insertarFinal(Nodo *&, int);

int main()
{
    int dato;
    Nodo *lista = NULL; //crear lista

    cout << "Ingrese un dato: ";
    cin >> dato;
    insertarInicio(lista, dato);

    cout << "Ingrese un dato: ";
    cin >> dato;
    insertarInicio(lista, dato);

    cout << "Ingrese un dato: ";
    cin >> dato;
    insertarInicio(lista, dato);
    system("PAUSE");
    return 0;
}

void insertarInicio(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo(); //crear nuevo nodo dinamico
    nuevo_nodo->dato = n;          //asignar dato al nuevo nodo
    Nodo *aux1 = lista;            //Auxiliar para saber el siguiente
    lista = nuevo_nodo;            //Apuntar al 1er elemento
    nuevo_nodo->siguiente = aux1;  //Asignar el puntero del nuevo nodo el siguiente nodo

    /*Mostramos que el dato se ha agregado a la lista, esto podemos hacerlo o bien accediendo directamente al nodo
    recien creado, o agarrando el numero que nos pasaron*/
    cout << "\nEl dato " << nuevo_nodo->dato << " ha sido agragado a la lista\n";
    cout << "\nEl dato " << n << " ha sido agragado a la lista\n";
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