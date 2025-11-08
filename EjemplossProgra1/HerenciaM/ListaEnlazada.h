#pragma once
#include "Nodo.h"

class ListaEnlazada
{
private:
    Nodo* cabeza;
    Nodo* cola;

public:
    ListaEnlazada();
    void InsertarFinal(int valor);
    void Mostrar();
    void BuscarMultiplos(int numero);
    void Promedio();

	// Metodos para el examen 
	void Menor();
	void Mayor();
    void ParesYimpares();
};

