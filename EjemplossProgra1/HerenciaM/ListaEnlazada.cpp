#include "ListaEnlazada.h"
#include <iostream>
using namespace std;

ListaEnlazada::ListaEnlazada()
{
    cabeza = nullptr;
    cola = nullptr;
}

void ListaEnlazada::InsertarFinal(int valor)
{
    Nodo* nuevo = new Nodo(valor);

    if (cabeza == nullptr)
    {
        cabeza = nuevo;
        cola = nuevo;
    }
    else
    {
        cola->siguiente = nuevo;
        nuevo->anterior = cola;
        cola = nuevo;
    }
}

void ListaEnlazada::Mostrar()
{
    Nodo* actual = cabeza;
    cout << "Lista:\n-----------------------------\n";
    while (actual != nullptr)
    {
        cout << actual->dato << endl;
        actual = actual->siguiente;
    }
    cout << "-----------------------------\n";
}

void ListaEnlazada::BuscarMultiplos(int numero)
{
    cout << "Buscando multiplos de " << numero << "..." << endl;
    Nodo* actual = cabeza;
    int posicion = 1;
    bool encontrado = false;

    while (actual != nullptr)
    {
        if (actual->dato % numero == 0)
        {
            cout << "El numero " << actual->dato << " es multiplo. Posicion: " << posicion << endl;
            encontrado = true;
        }
        actual = actual->siguiente;
        posicion++;
    }

    if (!encontrado)
    {
        cout << "No se encontraron multiplos de " << numero << " en la lista." << endl;
    }
}

void ListaEnlazada::Promedio()
{
    Nodo* actual = cabeza;
    int suma = 0;
    int contador = 0;

    while (actual != nullptr)
    {
        suma += actual->dato;
        contador++;
        actual = actual->siguiente;
    }

    if (contador == 0)
    {
        cout << "La lista esta vacia. No se puede calcular el promedio." << endl;
    }
    else
    {
        double promedio = (double)suma / contador;
        cout << "El promedio de los valores es: " << promedio << endl;
    }
}



// Aqui inicia el examen


void ListaEnlazada::Menor()
{

    Nodo* actual = cabeza;
    int menor = actual->dato;
    int posicion_menor = 1;
    int posicion_general = 1;
    

    while (actual != nullptr)
    {
        if (actual->dato < menor)
        {
            menor = actual->dato;
            posicion_menor = posicion_general;
        }
        actual = actual->siguiente;
        posicion_general++;
    }

    cout << "El menor valor es " << menor << " y esta en la posicion " << posicion_menor << endl << endl;
}

void ListaEnlazada::Mayor()
{
    Nodo* actual = cabeza;
	int mayor = actual->dato;
	int posicion_general = 1;
    int posicion_mayor = 1;

    while (actual != nullptr)
    {
        if (actual->dato > mayor)
        {
            mayor = actual->dato;
            posicion_mayor = posicion_general;
        }
        actual = actual->siguiente;
        posicion_general++;
    }
    cout << "El Mayor valor es " << mayor << " y esta en la posicion " << posicion_mayor << endl << endl;
}

void ListaEnlazada::ParesYimpares()
{
    Nodo* actual = cabeza;
    int posicion_general = 1;

   
    cout << "-----------------\n";
    while (actual != nullptr)
    {
        if (actual->dato % 2 == 0) {
            cout << actual->dato << " es par esta en la posicion" << posicion_general << endl;
        }
        else {
            cout << actual->dato << " es impar esta en la posicion" << posicion_general << endl;
        }
        actual = actual->siguiente;
        posicion_general++;
    }
    cout << "-----------------\n";
}








