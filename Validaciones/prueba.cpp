#include <iostream>
#include <cstdlib>
#include "validaciones.hpp"
using namespace std;
int main()
{
    double numeroInt;
    int numeroDouble;
    char dato[100];
    cout<<"mmm oye a ver tus patas dobles: ";
    cin>>dato;
    numeroDouble = pedirNumDouble(dato);
    cout<<numeroDouble + 1.5;
    cout<<"mmm oye a ver tus patas: ";
    cin>>dato;
    numeroInt = pedirNumDouble(dato);
    cout<<numeroInt + 3;
    system("PAUSE");
    return 0;
}