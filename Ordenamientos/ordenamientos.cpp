#include <iostream>
#include <cstdlib>

using namespace std;
void metodoBurbuja(int[], int);
void metodoInsercion(int[], int);
void metodoSeleccion(int[], int);
int main()
{
    int size = 0;
    cout << "De cuantos elementos es el arreglo?: ";
    cin >> size;
    int arreglo[size];
    for (size_t i = 0; i < size; i++)
    {
        cout << "Digita el elemento [" << i + 1 << "]\n";
        cin >> arreglo[i];
    }
    cout << "\nMETODO BURBUJA:\n";
    metodoBurbuja(arreglo, size);
    cout << "\nMETODO INSERCION:\n";
    metodoInsercion(arreglo, size);
    cout << "\nMETODO SELECCION:\n";
    metodoSeleccion(arreglo, size);
    system("PAUSE");
    return 0;
}

void metodoBurbuja(int arreglo[], int size)
{
    int aux;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << arreglo[i] << endl;
    }
}
void metodoInsercion(int arreglo[], int size)
{
    int pos, aux; // Aux es el valor del numero, pos es la posicion en la que estamos
    for (size_t i = 0; i < size; i++)
    {
        pos = i;
        aux = arreglo[i];
        while ((pos > 0) and (arreglo[i - 1]) > aux)
        {
            arreglo[pos] = arreglo[pos - 1];
            pos--;
        }
        arreglo[pos] = aux;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << arreglo[i] << endl;
    }
}
void metodoSeleccion(int arreglo[], int size)
{
    int aux, min;
    for (size_t i = 0; i < size; i++)
    {
        min = i;
        for (size_t j = i + 1; j < size; j++)
        {
            if (arreglo[j] < arreglo[min])
            {
                min = j;
            }
        }
        aux = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = aux;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << arreglo[i] << endl;
    }
}