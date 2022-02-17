#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
    Nodo *anterior;
};
// Todas las operaciones que se pueden hacer
void menu();
void insertarInicio(Nodo *&, int);
void insertarFinal(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarElemento(Nodo *, int);
void eliminarElemento(Nodo *&, int);
void eliminarLista(Nodo *&, int &);

Nodo *lista = NULL; // crear lista
int main()
{
    menu();
    return 0;
}

void menu()
{
    int opc = 1;
    int dato;
    while (opc != 0) // Bucle para que siempre se ejecute el menu despues de una operacion
    {
        system("cls");
        cout << "\tMenu\n";
        cout << "1. Insertar al inicio\n";
        cout << "2. Insertar al final\n";
        cout << "3. Mostrar lista\n";
        cout << "4. Buscar un elemento\n";
        cout << "5. Eliminar elemento\n";
        cout << "6. Vaciar lista\n";
        cout << "0. Salir\n\n";
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "Ingrese un dato: ";
            cin >> dato;
            insertarInicio(lista, dato);
            // Tienes que pasar en el 1er espacio el nombre de la lista que creamos, y el dato
            break;
        case 2:
            cout << "Ingrese un dato: ";
            cin >> dato;
            insertarFinal(lista, dato);
            // Tienes que pasar en el 1er espacio el nombre de la lista que creamos, y el dato
            break;
        case 3:
            mostrarLista(lista);
            /*
            Tienes que pasar el nombre de la lista que creamos, si la lista en la linea 21 la llamamos "listota"
            aqui tambien debemos llamarla "listota" y no "lista"
            */
            break;
        case 4:
            cout << "Ingrese el elemento a buscar: ";
            cin >> dato;
            buscarElemento(lista, dato);
            break;
        case 5:
            cout << "Ingrese el elemento a eliminar: ";
            cin >> dato;
            eliminarElemento(lista, dato);
            break;
        case 6:
            while (lista != NULL) // Para hacer la eliminacion de cada nodo hasat que este vacia
            {
                eliminarLista(lista, dato);
                cout << "Dato eliminado: " << dato << endl;
            }
            break;
        case 0:
            cout << "Gracias por su preferencia\n";
            break;
        default:
            cout << ("La opcion solicitada no existe\n");
            break;
        }
        system("PAUSE");
    }
}
void insertarInicio(Nodo *&lista, int n)
{

    Nodo *nuevo_nodo = new Nodo(); // Crear nuevo nodo dinamico
    if (lista == NULL)             // Si la lista esta vacia
    {
        lista = nuevo_nodo; // Apuntar al 1er elemento
        lista->siguiente = nullptr;
        lista->anterior = nullptr;
    }
    else // Si la lista no esta vacia
    {
        nuevo_nodo->siguiente = lista;
        nuevo_nodo->anterior = lista->anterior;
        lista->anterior = nuevo_nodo;
    }
}

void insertarFinal(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo(); // crear nuevo nodo dinamico
    nuevo_nodo->dato = n;          // asignar dato al nuevo nodo
    Nodo *aux1 = lista;            // Auxiliar para saber el siguiente
    Nodo *aux2;
    while (aux1 != NULL) // Porque si aux1 apunta a null, significa que es el final de la lista
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    aux2->siguiente = nuevo_nodo; // Como se inserta al final, el nodo que era el ultimo ahora pasa a ser el penultimo, y el nuevo nodo el ultimo
    nuevo_nodo->siguiente = aux1; // Asignar el puntero del nuevo nodo el siguiente nod
}

void mostrarLista(Nodo *lista)
{
    Nodo *actual = new Nodo(); // Creamos nodo actual para saber en cual nodo estamos ubicados mientrar recorremos la lista
    actual = lista;            // Apuntar el nodo actual al inicio, para recorrer desde el 1er elemento

    while (actual != NULL) // Mientras sigamos apuntando a un dato, y no al NULL, significa que seguimos en la lista
    {
        cout << actual->dato << ", "; // Imprimir el dato en el que nos encontramos
        actual = actual->siguiente;   // Recorrer un nodo
    }
}

void buscarElemento(Nodo *lista, int n)
{
    bool bandera = false;
    Nodo *actual = new Nodo(); // Creamos nodo actual para saber en cual nodo estamos ubicados mientrar recorremos la lista
    actual = lista;            // Apuntar el nodo actual al inicio, para recorrer desde el 1er elemento

    while ((actual != NULL)) // Mientras sigamos apuntando a un dato, y no al NULL, significa que seguimos en la lista
    {
        if (actual->dato == n)
        {
            bandera = true; // Se establece en true si encuentra el elemento n a buscar
        }
        actual = actual->siguiente; // Recorrer un nodo
    }
    if (bandera == true)
    {
        cout << "El elemento " << n << " SI se encuentra en la lista\n";
    }
    else
    {
        cout << "El elemento " << n << " NO se encuentra en la lista\n";
    }
}

void eliminarElemento(Nodo *&lista, int n)
{
    if (lista != NULL)
    {
        Nodo *aux_borrar;
        Nodo *anterior = NULL;
        aux_borrar = lista;
        while ((aux_borrar != NULL) && (aux_borrar->dato != n)) // Recorrer lista
        {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        if (aux_borrar == NULL) // Si el elemento no se encuentra en la lista(no se elimina)
        {
            cout << "El elemento no existe en la lista\n";
        }
        else if (anterior == NULL) // El primer elemento es el que se elimina
        {
            lista = lista->siguiente;                            // el inicio de la lista se cambia, pues se elimino el inicio
            cout << "El elemento '" << n << "' ha sido borrado"; // Imprimir el elemento a borrar
            delete aux_borrar;
        }
        else // El elemento que se elimina no es el primer elemento
        {
            anterior->siguiente = aux_borrar->siguiente;         // Se apunta el nodo anterior del eliminado al nodo siguiente del eliminado
            cout << "El elemento '" << n << "' ha sido borrado"; // Imprimir el elemento a borrar
            delete aux_borrar;
        }
    }
}

void eliminarLista(Nodo *&lista, int &n)
{
    Nodo *aux = lista; // Crear auxiliar que apunte al inicio de la lista
    n = aux->dato;     // Guardar el elemento antes de eliminar el nodo
    lista = aux->siguiente;
    delete aux; // Lo deletea q más t digo
}
