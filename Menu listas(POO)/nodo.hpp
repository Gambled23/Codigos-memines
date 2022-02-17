#ifndef NODO_H
#define NODO_H
#pragma once

class nodo  
{
public:
    nodo();
    nodo (int e)
    {
        dato = e;
        siguiente = nullptr;
    };
    int dato;
    nodo *siguiente;
private:

};
nodo::nodo()
{
    dato = 0; // obj inicializar el objeto
    siguiente = nullptr;
}
#endif