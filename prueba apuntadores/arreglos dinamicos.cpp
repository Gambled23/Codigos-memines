#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    int nElementos, *arreglo;
    cout<<"Cuantos elementos va a tener el arreglo: ";
    cin>>nElementos;
    //Crea un arreglo dinamico (necesita la libreria stdlib)
    arreglo = new int[nElementos];
    //Guarda los elementos
    for (size_t i = 0; i < nElementos; i++)
    {
        cout<<"Ingresa el elemento ["<<i+1<<"]\n";
        cin>>arreglo[i]; //Tambien se puede usar *(arreglo+i), es basicamente lo mismo que arreglo[i]
    }
    //Imprime los elementos guardados
    for (size_t i = 0; i < nElementos; i++)
    {
        cout<<"El elemento ["<<i+1<<"] es: "<<*(arreglo+i)<<endl;
    }
    
    system("PAUSE");
    return 0;
}