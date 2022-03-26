#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <cstdlib>
#pragma once

using namespace std;

class nodo
{
public:
    int dato;
    nodo *izquierda;
    nodo *derecha;
    nodo();
    nodo(int e)
    {
        dato = e;
        izquierda = nullptr;
        derecha = nullptr;
    }
private:
};

nodo::nodo()
{
    dato = 0;
    izquierda = nullptr;
    derecha = nullptr;
}
#endif