#ifndef ARBOL_H
#define ARBOL_H
#include <iostream>
#include <cstdlib>
#include "nodo.hpp"
#pragma once

using namespace std;

class arbol
{
public:
    arbol();
    nodo *raiz;
    void insertarElemento(nodo *, int);

private:
};

arbol::arbol()
{
    raiz = nullptr;
}
void arbol::insertarElemento(nodo *actual, int e)
{
    nodo *nuevo_nodo = new nodo(e);
    nodo *aux = new nodo();
    if (!raiz) //Si el arbol esta vacio
    {
        raiz = nuevo_nodo;
    }
    else if (e < raiz->dato) //Si el arbol tiene 1 o mas nodos
    {
        
    }
    else if (e > raiz->dato)
    {
        
    }
}
#endif