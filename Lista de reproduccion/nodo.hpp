#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <cstdlib>
#pragma once

using namespace std;

class nodo
{
public:
    nodo *anterior;
    nodo *siguiente;
    string artista;
    string album;
    string titulo;
    nodo();
    nodo(string, string, string);
};

nodo::nodo()
{
    artista = "";
    album = "";
    titulo = "";
    anterior = nullptr;
    siguiente = nullptr;
}
nodo::nodo(string art, string alb, string tit)
{
    artista = art;
    album = alb;
    titulo = tit;
    anterior = nullptr;
    siguiente = nullptr;
}
#endif