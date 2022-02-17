/*
Este es un programa nomás pa probar apuntadores y ver cómo funcionan
alch aquí no aprendes nada
*/

#include <iostream>
#include <cstdlib>
 
using namespace std;
int main()
{
    int *numeroPtr, numero = 3;
    numeroPtr = &numero;
    //*numeroPtr es el valor de la variable a la que esta apuntando
    //numeroPtr es la direccion de memoria de la variable a la que se apunta
    *numeroPtr = 5;
    cout<<"El numero es "<<*numeroPtr<<endl; //Aunque se inicialize en 3, va a imprimir el 5, pues eso le indicamos
    cout<<"La direccion es "<<numeroPtr<<endl;
    system("PAUSE");
    return 0;
}