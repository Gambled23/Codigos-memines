#include <cstdlib>
#include <iostream>
#include "listaReproduccion.hpp"

using namespace std;

void menu();

listaReproduccion *lista = new listaReproduccion();
int main()
{
    menu();
    system("PAUSE");
    return 0;
}

void menu()
{
    int opc;
    string auxTitulo;
    lista->insertaInicio("SHE","Cambiando la piel","Tal vez");
    lista->insertarFinal("Porta","Reset","Media vida");
    lista->insertaInicio("Violadores del verso","Doble V","Marrones, coronas, morenas");
    lista->insertarFinal("SHE","Tiempo","Tiempo");
    lista->inicializa();
    do
    {
        system("cls");
        lista->printQueue();
        cout<<"\n\n1)Cancion anterior\n2)Cancion siguiente\n\n3)Buscar cancion\n4)Eliminar cancion\n0)Salir del programa\n";
        cin >> opc;

        switch (opc)
        {
        case 1:
            lista->cancionAnteriorSiguiente(1);
            break;
        case 2:
            lista->cancionAnteriorSiguiente(2);
            break;
        case 3:
            system("cls");
            cout<<"Ingresa el titulo de la cancion a buscar\n";
            cin.sync();
            getline(cin, auxTitulo);
            lista->buscarElemento(auxTitulo);
            break;
        case 4:
            system("cls");
            cout<<"Ingresa el titulo de la cancion a eliminar\n";
            cin.sync();
            getline(cin, auxTitulo);
            lista->eliminarElemento(auxTitulo);
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
    } while (opc != 0);
}